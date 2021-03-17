//
//  bullet.h
//  SKEET
//
//  Created by Gabriel Ikpaetuk on 3/8/21.
//

#ifndef bullet_h
#define bullet_h

#include "flyingObject.h"
#include "velocity.h"
#include "point.h"


class Bullet:public FlyingObjects{
  
    
private:
    float angle = 60.0;
    
    
public:
    
    Bullet();
    void fire(Point p, float angle);

};


#endif /* bullet_h */
