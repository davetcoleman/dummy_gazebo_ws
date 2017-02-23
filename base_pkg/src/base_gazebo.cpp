#include <ros/ros.h>
#include <gazebo/physics/physics.hh>

int main(int argc, char** argv)
{
  gazebo::physics::WorldPtr world = gazebo::physics::get_world("world");

  std::cout << "Hello " << world << std::endl;

  return 0;
}
