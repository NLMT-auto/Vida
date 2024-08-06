cmake_minimum_required(VERSION 3.8)
project(control_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(vida_interfaces)

add_executable(remote_control)
ament_target_dependencies(remote_control rclcpp vida_interfaces) 

target_sources(
  remote_control

  PRIVATE

    src/RemoteControlPublisher/RemoteControlPublisher.cpp
    src/RemoteControlPublisher/RemoteControlPublisher.h

    ../../../Utils/UDP/UDP.cpp
    ../../../Utils/UDP/UDP.h

)

add_executable(record)
ament_target_dependencies(record rclcpp vida_interfaces) 

target_sources(
  record

  PRIVATE

    src/Record/Record.cpp
    src/Record/Record.h  
)


install(TARGETS
  record
  remote_control  
  DESTINATION lib/${PROJECT_NAME}
)


ament_package()
