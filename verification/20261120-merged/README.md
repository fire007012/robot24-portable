# Merged deployment validation

Build: `robot24-field-full-dualcan-20261120-local2`.

The current upper and lower commits recorded in result.json passed the management, control and GUI regressions and three actual ROS mock integration scenarios: all groups with an initial emergency latch; arm named target, Servo, gripper and neutral stop; base control with faults in unselected arm/gripper axes. Each scenario ended with zero managed resources and no crashed processes.

The actual deployed management widget also passed mode selection before connection, matching hardware/mock profiles, stable mode selection during polling and mock preflight against the normal manager endpoint.

Fresh Git clones exclude credentials and runtime state. Run `python3 -B portable_link.py prepare` followed by `python3 -B portable_link.py check` before starting a cloned deployment. Preparation preserves existing credentials and journals. The release manifest excludes disposable bytecode caches.

Hardware baseline and full preflight checks pass for all groups, with can0/can1 UP. The deployed hardware profile also passed software start, stable runtime/bridge feedback and controlled stop with zero resources (hardware-smoke.json). Motors were not initialized or enabled; physical motion acceptance was not performed. The normal manager stays running, with software stopped and no recovery required. Credentials and state are excluded from this evidence.

A clean local Git clone passed `prepare` and `check`, including release files, ROS package ownership and ELF dependencies, without relying on ignored files in the deployment checkout.
