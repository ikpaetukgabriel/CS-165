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

void Robot::moveUp()
{

   int yCurrent = position.getY();
   int moveAmount = 1;
   int newPositionY;

   if ((yCurrent + moveAmount) > 10)
   {
      return;
   }
   else
   {
      newPositionY = yCurrent + moveAmount;
      position.setY(newPositionY);
   }
}

void Robot::moveDown()
{

   int yCurrent = position.getY();
   int moveAmount = -1;
   int newPositionY;

   if ((yCurrent + moveAmount) < 1)
   {
      return;
   }
   else
   {
      newPositionY = yCurrent + moveAmount;
      position.setY(newPositionY);
   }
}

void Robot::moveLeft()
{

   int xCurrent = position.getX();
   int moveAmount = -1;
   int newPositionX;

   if ((xCurrent + moveAmount) < 1)
   {
      return;
   }
   else
   {
      newPositionX = xCurrent + moveAmount;
      position.setX(newPositionX);
   }
}

void Robot::moveRight()
{

   int xCurrent = position.getX();
   int moveAmount = 1;
   int newPositionX;

   if ((xCurrent + moveAmount) > 10)
   {
      return;
   }
   else
   {
      newPositionX = xCurrent + moveAmount;
      position.setX(newPositionX);
   }
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
