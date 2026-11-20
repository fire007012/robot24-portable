cmake_minimum_required(VERSION 3.16)
project(arm_installed_test LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
find_package(Qt6 REQUIRED COMPONENTS Core Network Test)
set(QT_VERSION_MAJOR 6)
set(HOST_ROOT /home/fire/hostcomputer)
set(HOST_CONTROL_SOURCES
 ${HOST_ROOT}/src/communication/ControlProtocol.cpp
 ${HOST_ROOT}/src/communication/ControlSession.cpp
 ${HOST_ROOT}/src/communication/EmergencyChannel.cpp)
add_executable(installed_robot_probe installed_robot_probe.cpp ${HOST_CONTROL_SOURCES}
    ${HOST_ROOT}/src/communication/RobotTcpClient.cpp
    ${HOST_ROOT}/src/communication/HostProtocol.cpp
    ${HOST_ROOT}/src/communication/ManagementClient.cpp
    ${HOST_ROOT}/src/management/RuntimeService.cpp
    ${HOST_ROOT}/src/utils/Logger.cpp
    ${HOST_ROOT}/src/utils/ErrorHandler.cpp)
target_include_directories(installed_robot_probe PRIVATE
    ${HOST_ROOT}/src/communication ${HOST_ROOT}/src/management ${HOST_ROOT}/src/utils)
target_link_libraries(installed_robot_probe PRIVATE Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Network Qt${QT_VERSION_MAJOR}::Test)
