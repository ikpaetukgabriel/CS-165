//
//  velocity.cpp
//  SKEET
//
//  Created by Gabriel Ikpaetuk on 3/8/21.
//

#include "velocity.h"
// Constructors
Velocity::Velocity(){
    
    setDx(0);
    setDy(0);
}

Velocity::Velocity(float Dx, float Dy)
{
    setDx(Dx);
    setDy(Dy);
}

// setters

void Velocity::setDx(float Dx)
{
    dX = Dx;
}

void Velocity::setDy(float Dy)
{
    dY = Dy;
}


//getters

float Velocity::getDx() const
{
    return dX;
}

float Velocity::getDy() const
{
    return dY;
}
