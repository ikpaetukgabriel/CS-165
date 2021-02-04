#include "robot.h"
#include <iostream>
using namespace std;

Robot::Robot()
{
   setEnergy(100);
}

Robot::Robot(int energyInput)
{
   setEnergy(energyInput);
}

Robot::Robot(Point positionInput, int energyInput)
{
   setEnergy(energyInput);
   setPosition(positionInput);
}

void Robot::setEnergy(int energyInput)
{
   if (energyInput < 0)
   {
      energy = 0;
   }
   else
   {
      energy = energyInput;
   }
}

int Robot::getEnergy() const
{
   return energy;
}

Point Robot::getPosition() const
{
   return position;
}

void Robot::setPosition(Point positionInput)
{
   position.setX(positionInput.getX());
   position.setY(positionInput.getY());
}

/************************************
 * Function: Display
 * Purpose: Displays the robot.
 ************************************/
void Robot ::display() const
{
   position.display();
   cout << " - Energy: " << getEnergy();
}
