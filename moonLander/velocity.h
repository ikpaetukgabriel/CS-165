//
//  velocity.h
//  myMoonLander
//
//  Created by Scott Burton on 10/22/15.
//  Copyright © 2015 Scott Burton. All rights reserved.
//

#ifndef velocity_h
#define velocity_h

#include "point.h"

class Velocity
{
private:
   float dx;
   float dy;
   
public:
   Velocity()
   {
      dx = 0.0;
      dy = 0.0;
   }
   
   Velocity(float dx, float dy)
   {
      this->dx = dx;
      this->dy = dy;
   }
   
   float getDx() const { return dx; }
   float getDy() const { return dy; }
   
   void setDx(float dx) { this->dx = dx; }
   void setDy(float dy) { this->dy = dy; }
   
   void add(const Velocity & other);

   void advancePoint(Point & point);
   
};

#endif /* velocity_h */
