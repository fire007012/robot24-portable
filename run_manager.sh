#!/usr/bin/env bash
set -eo pipefail
robot_bundle_dir="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
export ROS_DOMAIN_ID=97 ROS_LOCALHOST_ONLY=1 PYTHONDONTWRITEBYTECODE=1
export ROS_HOME="$robot_bundle_dir/runtime/ros-home"
export ROS_LOG_DIR="$robot_bundle_dir/runtime/ros-logs"
exec /usr/bin/python3 -B "$robot_bundle_dir/install/manager/manager.py" --config "$robot_bundle_dir/runtime/manager.json"
