#ifndef CANOPEN_402_DRIVER_MODE_SUPPORT_HPP_
#define CANOPEN_402_DRIVER_MODE_SUPPORT_HPP_

#include <cstdint>
#include <string>

namespace ros2_canopen
{
// V133-0262 reports an empty 0x6502 despite implementing the modes used by the
// Eyou ROS1 master. A match permits trying a mode, never confirms the switch:
// Motor402 still requires Operation Enable, fresh feedback and matching 0x6061.
inline uint32_t eyou_zero_mode_support_mask(
  uint32_t device_type, uint32_t vendor, uint32_t product, uint32_t revision,
  std::string firmware)
{
  while (!firmware.empty() && firmware.back() == '\0') firmware.pop_back();
  if (device_type != 0x00220811 || vendor != 0x00000668 ||
      product != 0x00221401 || revision != 16 || firmware != "V133-0262") return 0;
  // Only project position/velocity modes; no torque or automatic homing fallback.
  return (uint32_t{1} << 6) | (uint32_t{1} << 7) | (uint32_t{1} << 8);
}

inline bool drive_mode_supported(uint16_t mode, uint32_t reported, uint32_t zero_mask = 0)
{
  if (mode == 0 || mode > 32) return false;
  const uint32_t supported = reported == 0 ? zero_mask : reported;
  return (supported & (uint32_t{1} << (mode - 1))) != 0;
}
}  // namespace ros2_canopen
#endif
