//
//  flyingObject.cpp
//  SKEET
//
//  Created by Gabriel Ikpaetuk on 3/8/21.
//

#include "point.h"
#include "uiDraw.h"
#include "velocity.h"
#include "flyingObject.h"

// constructor

FlyingObjects::FlyingObjects()
{
    p.setX(0.0);
    p.setY(0.0);
    alive = true;
    
}

//setters

void FlyingObjects::setPoint(Point p)
{
    this -> p = p;
}

void FlyingObjects::setVelocity(Velocity v)
{
    this -> v = v;
}
void FlyingObjects::kill()
{
    alive = false;
    
}

void FlyingObjects::advance()
{
    p.setX(p.getX() + v.getDx());
    p.setY(p.getY() + v.getDy());
}

void FlyingObjects::draw()
{
    drawDot(p);
    
}

// getters


Point FlyingObjects::getPoint() const
{
    return p;
}

Velocity FlyingObjects::getVelocity() const
{
    return v;
}

bool FlyingObjects::isAlive() const
{
    return alive;
}
