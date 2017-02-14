cmake_minimum_required(VERSION 2.8.3)
project(base_pkg)

find_package(catkin REQUIRED COMPONENTS
  roscpp
)

find_package(GAZEBO REQUIRED)

find_package(Boost REQUIRED COMPONENTS thread)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

catkin_package(
  DEPENDS
    Boost
    GAZEBO
)