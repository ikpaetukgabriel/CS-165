//
//  bullet.cpp
//  SKEET
//
//  Created by Gabriel Ikpaetuk on 3/8/21.
//

#include "flyingObject.h"
#include "point.h"
#include "uiDraw.h"
#include "velocity.h"
#include "bullet.h"
#include <cmath>

#define BULLET_SPEED 10.0

//Constructor
Bullet::Bullet(){
    
    Point a;
    a.setX(200.0);
    a.setY(-200.0);
    setPoint(a);
    

}

// Method

void Bullet::fire(Point p, float angle){
    
    Velocity bulletVelocity;
    
    setPoint(p);
    
    bulletVelocity.setDx(BULLET_SPEED * (-cos(M_PI / 180.0 * angle)));
    bulletVelocity.setDy(BULLET_SPEED * (sin(M_PI / 180.0 * angle)));
    
    
    setVelocity(bulletVelocity);
}
