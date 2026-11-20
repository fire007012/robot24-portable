# Standalone CSP only. Empty arrays query the current command-session epoch.
# Otherwise provide that epoch and >=2 position/time knots; first time is zero.
# Positions: radians. Times: seconds from acceptance (steady clock).
# Each segment is a quintic rest-to-rest move. No automatic enable or mode switch.
uint64 epoch
float64[] positions
float64[] times_from_start
