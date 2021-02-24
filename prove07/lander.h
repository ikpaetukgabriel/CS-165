#include "point.h"
#include "velocity.h"

#ifndef LANDER_H
#define LANDER_H

class Lander
{
   public:
   Lander();

   void setFuel(int Fuel);
   int getFuel() const;

   void applyGravity(float Gravity);
   float  getGravity() const;

   bool canThrust() const;

   Point getPoint() const;
   Velocity getVelocity() const;

   void setVelocityDx(float dx);

   void setVelocityDy(float dy);

   void setAlive(bool Alive);
   bool isAlive() const;

   void setLanded(bool Landed);
   bool isLanded() const;

   void draw();
   void applyThrustBottom();
   void applyThrustLeft();
   void applyThrustRight();
   void advance();

   private:
   float gravity;
   int fuel;
   
   Point point;
   Velocity velocity;

   bool _isAlive;
   bool _isLanded;
   bool _canThrust;
   
   void decreaseFuel();

   bool _isMovingRight;
   bool _isMovingLeft;
};

#endif /* LANDER_H */
