cmake_minimum_required(VERSION 2.8.3)
project(base_pkg)

find_package(catkin REQUIRED COMPONENTS
  roscpp
)

find_package(GAZEBO REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GAZEBO_CXX_FLAGS}")

find_package(Boost REQUIRED COMPONENTS thread)

include_directories(
  ${catkin_INCLUDE_DIRS}
  ${GAZEBO_INCLUDE_DIRS}
)

link_directories(
  ${GAZEBO_LIBRARY_DIRS}
)

catkin_package(
  DEPENDS
    Boost
    # Note we do not add GAZEBO here, instead we have an extras file
  CFG_EXTRAS base_pkg-extras.cmake
)

# Test program
add_executable(${PROJECT_NAME}_node
  src/base_gazebo.cpp
)
target_link_libraries(${PROJECT_NAME}_node
  ${GAZEBO_LIBRARIES}
  ${catkin_LIBRARIES}
)
