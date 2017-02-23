cmake_minimum_required(VERSION 2.8.3)
project(dummy_pkg)

find_package(catkin REQUIRED COMPONENTS
  base_pkg
  roscpp
)

set(CMAKE_CXX_FLAGS "-std=c++11")

catkin_package(
  CATKIN_DEPENDS
    base_pkg
)


include_directories(
  ${catkin_INCLUDE_DIRS}
)

link_directories(
  ${catkin_LIBRARY_DIRS}
)

# MESSAGE( STATUS "base_pkg_INCLUDE_DIRS -----------------------: " ${base_pkg_INCLUDE_DIRS})
# MESSAGE( STATUS "catkin_INCLUDE_DIRS--------------------------------: " ${catkin_INCLUDE_DIRS} )
# MESSAGE( STATUS "GAZEBO_INCLUDE_DIRS--------------------------------: " ${GAZEBO_INCLUDE_DIRS} )

# Test program
add_executable(${PROJECT_NAME}_node
  src/dummy_gazebo.cpp
)
target_link_libraries(${PROJECT_NAME}_node
  ${catkin_LIBRARIES}
)
