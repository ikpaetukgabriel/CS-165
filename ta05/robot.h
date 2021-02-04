#ifndef ROBOT_H
#define ROBOT_H

#include "point.h"

class Robot
{
private:
   Point position;
   int energy;

public:
   Robot();
   Robot(int energyInput);
   Robot(Point position, int energyInput);

   Point getPosition() const;
   int getEnergy() const;

   void setPosition(Point positionInput);
   void setEnergy(int energyInput);

   void display() const;
};

#endif
