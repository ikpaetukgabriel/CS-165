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

   int currentEnergy = getEnergy();
   int moveEnergy = -10;
   int newEnergy;

   if (((yCurrent + moveAmount) > 10) || ((currentEnergy + moveEnergy) < 0))
   {
      return;
   }
   else
   {
      newPositionY = yCurrent + moveAmount;
      position.setY(newPositionY);
      newEnergy = currentEnergy + moveEnergy;
      setEnergy(newEnergy);
   }
}

void Robot::moveDown()
{

   int yCurrent = position.getY();
   int moveAmount = -1;
   int newPositionY;

   int currentEnergy = getEnergy();
   int moveEnergy = -10;
   int newEnergy;

   if (((yCurrent + moveAmount) < 1) || ((currentEnergy + moveEnergy) < 0))
   {
      return;
   }
   else
   {
      newPositionY = yCurrent + moveAmount;
      position.setY(newPositionY);
      newEnergy = currentEnergy + moveEnergy;
      setEnergy(newEnergy);
   }
}

void Robot::moveLeft()
{

   int xCurrent = position.getX();
   int moveAmount = -1;
   int newPositionX;

   int currentEnergy = getEnergy();
   int moveEnergy = -10;
   int newEnergy;

   if (((xCurrent + moveAmount) < 1) || ((currentEnergy + moveEnergy) < 0))
   {
      return;
   }
   else
   {
      newPositionX = xCurrent + moveAmount;
      position.setX(newPositionX);
      newEnergy = currentEnergy + moveEnergy;
      setEnergy(newEnergy);
   }
}

void Robot::moveRight()
{

   int xCurrent = position.getX();
   int moveAmount = 1;
   int newPositionX;

   int currentEnergy = getEnergy();
   int moveEnergy = -10;
   int newEnergy;

   if (((xCurrent + moveAmount) > 10) || ((currentEnergy + moveEnergy) < 0))
   {
      return;
   }
   else
   {
      newPositionX = xCurrent + moveAmount;
      position.setX(newPositionX);
      newEnergy = currentEnergy + moveEnergy;
      setEnergy(newEnergy);
   }
}

void Robot::fireLaser()
{
   int robotEnergy = getEnergy();
   int shootEnergy = -25;
   int newEnergy;

   if ((robotEnergy + shootEnergy) < 0)
   {
      cout << "Insufficient fuel to fire :(";
      return;
   }

   else
   {
      newEnergy = robotEnergy + shootEnergy;
      setEnergy(newEnergy);
      cout << "Pew! Pew!";
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
