## 2026-11-20 追加：机械臂基线已正式登记

按操作员明确要求，使用当前部署与现有配置完成登记，不等待补采身份或持久参数快照。正式 hardware 档案已指向 `runtime/profiles/commissioning-arm-registered.yaml`，配置 revision 为 `2a5fe4b04645439adcd5b751366c4b18504fbfe218fd34595caeac7551f2ac35`。

肩部旋转轴 Node-ID 6、肩部俯仰轴 Node-ID 5 均按每圈 6619136 counts、位置模式 7、CANopen=can1 登记；私有 CAN=can0。登记模式为 `operator_confirmed_configuration`，已登记组为 arm/base/gripper，未扩大摆臂登记范围。

已有身份与持久参数原样保留；不存在的序列号、固件和设备读回值保持 null/空，未使用假数填充。全局 commissioned 保留原语义，组级配置登记通过 schema v2、commissioned_groups 与每轴 parameter_registration 生效，不需要把整车标成完成实机读回。

正式机械臂基线预检已通过，完整预检剩余项仅为当前主机未连接 can0/can1。运行时仍执行正常设备通信、PDO、反馈和控制状态检查；本次没有启动电机或执行参数写入，也不要求另行提供历史身份快照才能使用这份登记基线。

源码副本：`robot_hardware/config/arm_registered_baseline.yaml`。可重建工具：`tools/register_arm_baseline.py`。证据：`~/robot24-portable/verification/20261120-arm-registration/`。此节取代此前“机械臂身份基线尚未登记”的限制。
