#include "velocity.h"

float Velocity::getDx() const
{
   return Dx;
}

float Velocity::getDy() const
{
   return Dy;
}

void Velocity::addDx(float dx)
{

   setDx(getDx() + dx);
}

void Velocity::addDy(float dy)
{
   setDy(getDy() + dy);
}

void Velocity::setDx(float dx)
{
   Dx = dx;
}

void Velocity::setDy(float dy)
{
   Dy = dy;
}
