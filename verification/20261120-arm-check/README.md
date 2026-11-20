# 机械臂控制专项检查

日期：2026-11-20。结论：当前正式部署的机械臂控制尚不能判定正常，专项完整回归未通过。未连接真实 CAN 电机；未将候选程序发布到正式运行目录。

## 当前正式部署发现的问题

正式部署为 `~/robot24-portable`，build_version 仍为 `robot24-field-can0-20261117-3`。

1. 上位机明确选择 arm 分组、初始化、使能和恢复后，MoveIt 的 `ready` 命名目标可以执行；切换 `set_control_mode: arm` 失败，后端返回 `/arm_control/check_servo_ready: unavailable`。
2. 当前安装的 car_control/launch/moveit_servo.launch.py 没有启动 servo_readiness；源码已包含该节点。arm_control 执行程序也仍为旧二进制，未包含当前源码的六轴独立反馈校验与静止起点校验。
3. 当前安装的 MoveIt 回归能完成命名/关节/位姿目标、腕部回零和取消，但在向摆臂轴注入故障后，机械臂目标返回 `Arm not Running with fresh feedback and active JTC`。其他组故障影响了旧机械臂执行程序的反馈判定。

之前清理后的全车和底盘联动回归证明了管理、控制会话与底盘模拟运动，并未单独断言机械臂和夹爪位移，不能用来代替本次专项结果。

## 临时候选程序验证

在 `/tmp/robot24-arm-check` 中编译当前 arm_control 源码，并复制当前 Servo 启动文件，形成独立候选安装。ExecuteArmGoal.action 与正式部署逐字节一致；候选未改动正式配置、令牌、现场基线或控制 journal。

| 检查 | 结果 |
| --- | --- |
| arm_control CTest：motion_validation、reference_limits、execute_arm_goal_contract | 3 项通过 |
| 当前 Qt 生产管理/控制客户端 → 候选 manager → ROS 控制桥 → arm/gripper mock | 通过 |
| 显式操作授权、ready 命名目标、切换 Servo、机械臂与夹爪实测位移 | 通过 |
| 松开输入后连续零速、换档撤权、急停与显式恢复、管理停止 | 通过，剩余受管资源 0 |
| 单机械臂首次 Servo 准备 | 有等待时间；测试需区分启动准备与后续控制响应 |
| 完整 MoveIt 回归：取消后确认实测速度归零再提交新目标 | 保留静止起点保护，测试已增加等待实测静止的前提 |
| 摆臂故障后的继续规划 | 未通过；候选 move_group 在 FCL 碰撞检测调用栈段错误退出，exit code -11；后续 action 等待超时 |

候选 Qt 场景观察到 9248 条 joint_states，wrist_roll_joint 遥控期间最大位移约 0.01126 rad，夹爪有独立位移；松键零速检查通过。此结果仅证明候选的基本 mock 遥控链，不代表正式旧程序已修复或所有异常场景通过。

由于完整回归仍失败，没有执行候选部署脚本，没有更新正式 build_version 或 profiles revision。正式管理服务与控制栈保持 stopped，无受管资源。

## 证据与后续定位

证据保存到 `~/robot24-portable/verification/20261120-arm-check/`，包含正式版失败、候选 Qt 通过、候选扩展回归失败的日志和摘要，以及临时测试源码。不保存认证令牌。

后续应先定位摆臂故障场景中的 MoveIt/FCL 崩溃及单组 Servo 启动等待，再完成候选全量回归与独立部署检查，之后才能替换正式安装。更换程序时须同步发布清单与档案版本，保留现场参数和锁存状态。
