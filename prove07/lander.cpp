#include "lander.h"
#include "uiDraw.h"
#include <random>
using namespace std;

//The value of thurst of the lander
#define THRUST_VALUE 0.1
#define THRUSTDOWN_VALUE (THRUST_VALUE * 3.0) * -1.0
#define THRUST_FUEL_CONSUMPTION 1
#define THRUSTDOWN_FUEL_CONSUMPTION 3
#define GRAVITY 0.1
#define INITIAL_FUEL 500

/*************************************************************************
 * LANDER CONSTRUCTOR
 ************************************************************************/
Lander::Lander()
{
   default_random_engine generator;
   uniform_int_distribution<int> distribution(-190, 200);
   int position = distribution(generator); //generates number in the range -190, 200

   this->gravity = GRAVITY;

   this->setAlive(true);
   this->setLanded(false);

   this->point.setX(position);
   this->point.setY(200);

   this->velocity = Velocity();

   this->_isMovingLeft = true;
   this->_isMovingRight = false;

   this->_canThrust = true;
   this->setFuel(INITIAL_FUEL);
}

/*************************************************************************
 * SET FUEL
 *      Sets the value of the fuel 
 ************************************************************************/
void Lander::setFuel(int Fuel)
{
   if (Fuel < 0)
   {
      fuel = 0;
      //no more thurst, since there is no more fuel
      this->_canThrust = false;
   }
   else
      fuel = Fuel;
}

/*************************************************************************
 * GET FUEL
 *      Gets the value of the fuel
 ************************************************************************/
int Lander::getFuel() const
{
   return fuel;
}

void Lander::applyGravity(float Gravity)
{
   gravity = Gravity;
}

/*************************************************************************
 * GET GRAVITY
 *      Gets the value of gravity
 ************************************************************************/
float Lander::getGravity() const
{
   return gravity;
}

/*************************************************************************
 * CAN THRUST
 *      checks the boolean value of canThrust property
 ************************************************************************/
bool Lander::canThrust() const
{
   return _canThrust;
}

/*************************************************************************
 * GET POINT
 *      Gets the point property
 ************************************************************************/
Point Lander::getPoint() const
{
   return point;
}

/*************************************************************************
 * GET VELOCITY
 *      Gets the velocity property
 ************************************************************************/
Velocity Lander::getVelocity() const
{
   return velocity;
}

/*************************************************************************
 * SET VELOCITY DX
 *      Sets the velocity dx property
 ************************************************************************/
void Lander::setVelocityDx(float dx)
{
   velocity.addDx(dx);
}

/*************************************************************************
 * SET VELOCITY DY
 *      Sets the velocity dy property
 ************************************************************************/
void Lander::setVelocityDy(float dy)
{
   velocity.addDy(dy);
}

/*************************************************************************
 * SET ALIVE
 *      Sets the alive  property
 ************************************************************************/
void Lander::setAlive(bool Alive)
{
   _isAlive = Alive;
}

/*************************************************************************
 * GET ALIVE
 *      Gets the alive  property
 ************************************************************************/
bool Lander::isAlive() const
{
   return _isAlive;
}

/*************************************************************************
 * SET LANDED
 *      Sets the landed  property
 ************************************************************************/
void Lander::setLanded(bool Landed)
{
   _isLanded = Landed;
}

/*************************************************************************
 * IS LANDED
 *      Checks the landed boolean value
 ************************************************************************/
bool Lander::isLanded() const
{
   return _isLanded;
}

/*************************************************************************
 * DRAW
 *      Calls the drawLander function with the point
 *      parameter
 ************************************************************************/
void Lander::draw()
{
   drawLander(this->getPoint());
}

/*************************************************************************
 * APPLY THRUST BOTTOM
 *      Applies thrust down value
 ************************************************************************/
void Lander::applyThrustBottom()
{
   if (!_canThrust)
      return;

   this->point.addY(THRUSTDOWN_VALUE);
   this->setFuel(this->getFuel() - THRUSTDOWN_FUEL_CONSUMPTION);

   this->setVelocityDy(THRUSTDOWN_VALUE);
}

/*************************************************************************
 * APPLY THRUST LEFT
 *      Applies thrust left value
 ************************************************************************/
void Lander::applyThrustLeft()
{
   if (!_canThrust)
      return;

   this->point.addX(THRUST_VALUE);
   this->decreaseFuel();

   //if changed the direction, start the
   //count of the velocity.
   if (this->_isMovingRight == false)
   {
      this->velocity.setDx(0);
      this->setVelocityDx(THRUST_VALUE);
   }
   else
   {
      this->setVelocityDx(THRUST_VALUE);
   }

   this->_isMovingRight = true;
   this->_isMovingLeft = false;
}

/*************************************************************************
 * APPLY THRUST RIGHT
 *      Applies thrust right value
 ************************************************************************/
void Lander::applyThrustRight()
{
   if (!_canThrust)
      return;

   this->point.addX(THRUST_VALUE * -1.0);
   this->decreaseFuel();

   //if changed the direction, start the
   //count of the velocity.
   if (this->_isMovingLeft == false)
   {
      this->velocity.setDx(0);
      this->setVelocityDx(THRUST_VALUE);
   }
   else
   {
      this->setVelocityDx(THRUST_VALUE);
   }

   this->_isMovingRight = false;
   this->_isMovingLeft = true;
}

/*************************************************************************
 * ADVANCE
 *      Handles lander movement
 ************************************************************************/
void Lander::advance()
{
   //the lander 'Y' direction will always be the effect of the gravity.
   this->point.addY(this->getGravity() * -1.0);

   //the lander 'X' direction will follow the last applied thurst.
   if (_isMovingLeft)
   {
      this->point.addX(this->getGravity() * -1.0);
   }

   if (_isMovingRight)
   {
      this->point.addX(this->getGravity());
   }
}

/*************************************************************************
 * DECREASE FUEL
 *      Decrease fuel in respect to thrust fuel value
 ************************************************************************/
void Lander::decreaseFuel()
{
   this->setFuel(this->getFuel() - THRUST_FUEL_CONSUMPTION);
}
