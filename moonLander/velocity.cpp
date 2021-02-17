//
//  velocity.cpp
//  myMoonLander
//
//  Created by Scott Burton on 10/22/15.
//  Copyright © 2015 Scott Burton. All rights reserved.
//

#include "velocity.h"
#include "point.h"

void Velocity::add(const Velocity & other)
{
   dx += other.dx;
   dy += other.dy;
}

void Velocity::advancePoint(Point & point)
{
   point.addX(dx);
   point.addY(dy);
}