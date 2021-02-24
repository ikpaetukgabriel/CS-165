/***********************************************************************
 * File: lander.h
 ***********************************************************************/

#ifndef LANDER_H
#define LANDER_H

#include "point.h"
#include "velocity.h"
#include "uiDraw.h"

class Lander
{
private:
    Point point;
    Velocity velocity;
    
    bool alive;
    bool landed;
    bool thrust;
    
    int fuel;
    float gravity;
    
public:
    Lander();
    Point getPoint() const {return point;}
    Velocity getVelocity() const {return velocity;}
    
    bool isAlive() {return alive;}
    bool isLanded() {return landed;}
    bool canThrust() {return thrust;}
    
    int getFuel() const {return fuel;}
    
    void setLanded(bool landed) {this->landed = landed;}
    void setAlive(bool alive) {this->alive = alive;}
    void setFuel(int fuel) {this->fuel = fuel;}
    
    void applyGravity(float gravity);
    void applyThrustLeft();
    void applyThrustRight();
    void applyThrustBottom();
    
    void advance();
    void draw();
    
};

#endif
