#ifndef CANOPEN_402_DRIVER_POSITION_TRAJECTORY_HPP
#define CANOPEN_402_DRIVER_POSITION_TRAJECTORY_HPP

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <optional>
#include <stdexcept>
#include <vector>

namespace ros2_canopen
{
// Caller serializes access. Times are steady-clock seconds, positions radians.
// A complete bounded plan is sampled by the motor writer, never by a ROS client.
class PositionTrajectory
{
  std::vector<double> positions_, times_;
  uint64_t epoch_ = 0;
  double start_ = 0, last_ = 0;
  bool active_ = false;

public:
  bool active() const { return active_; }
  void clear() { active_ = false; positions_.clear(); times_.clear(); }

  void start(const std::vector<double> & positions, const std::vector<double> & times,
    double current, double max_velocity, double max_acceleration, uint64_t epoch, double now)
  {
    if (active_) throw std::invalid_argument("trajectory already active; halt before replacement");
    if (positions.size() < 2 || positions.size() > 128 || positions.size() != times.size())
      throw std::invalid_argument("expected 2..128 matching position/time knots");
    if (!std::isfinite(now) || !std::isfinite(current) || !std::isfinite(max_velocity) ||
      !std::isfinite(max_acceleration) || max_velocity <= 0 || max_acceleration <= 0)
      throw std::invalid_argument("invalid feedback or trajectory limits");
    if (times.front() != 0 || !std::isfinite(positions.front()) ||
      std::abs(positions.front() - current) > .01)
      throw std::invalid_argument("first knot must match actual position within .01 rad at time zero");
    for (size_t i = 0; i < positions.size(); ++i)
    {
      if (!std::isfinite(positions[i]) || !std::isfinite(times[i]) || times[i] < 0 || times[i] > 30)
        throw std::invalid_argument("nonfinite knot or duration outside 0..30 seconds");
      if (!i) continue;
      const double dt = times[i] - times[i-1], dx = std::abs(positions[i] - positions[i-1]);
      if (dt < .1 || 1.875 * dx / dt > max_velocity ||
        (10 / std::sqrt(3.)) * dx / (dt * dt) > max_acceleration)
        throw std::invalid_argument("segment violates duration/velocity/acceleration limits");
    }
    positions_ = positions;
    times_ = times;
    epoch_ = epoch;
    start_ = last_ = now;
    active_ = true;
  }

  std::optional<double> sample(uint64_t epoch, bool ready, double now)
  {
    if (!active_) return std::nullopt;
    if (!ready || epoch != epoch_)
    {
      clear();
      return std::nullopt;
    }
    if (!std::isfinite(now) || now < last_ || now - last_ > .1)
    {
      clear();
      throw std::runtime_error("trajectory writer missed 100 ms deadline or clock reversed");
    }
    last_ = now;
    const double elapsed = now - start_;
    if (elapsed >= times_.back())
    {
      const double final = positions_.back();
      clear();
      return final;
    }
    const size_t i = std::upper_bound(times_.begin(), times_.end(), elapsed) - times_.begin();
    const double u = (elapsed - times_[i-1]) / (times_[i] - times_[i-1]);
    const double s = u*u*u * (10 - 15*u + 6*u*u);
    return positions_[i-1] + (positions_[i] - positions_[i-1]) * s;
  }
};
}  // namespace ros2_canopen
#endif
