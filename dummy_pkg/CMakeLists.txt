cmake_minimum_required(VERSION 2.8.3)
project(dummy_pkg)

find_package(catkin REQUIRED COMPONENTS
  base_pkg
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

catkin_package(
  CATKIN_DEPENDS
    base_pkg
  DEPENDS
    GAZEBO
)