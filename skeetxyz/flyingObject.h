//
//  flyingObject.h
//  SKEET
//
//  Created by Gabriel Ikpaetuk on 3/8/21.
//

#ifndef flyingObj_h
#define flyingObj_h


#include "velocity.h"
#include "point.h"



class FlyingObjects{
    
    
private:
    
    Point p;
    Velocity v;
    bool alive;
    
    
    
public:

    FlyingObjects();
    Point getPoint() const;
    Velocity getVelocity()const;
    bool isAlive() const;
    void setPoint(Point p);
    void setVelocity(Velocity v);
    virtual void kill();
    void advance();
    virtual void draw();
    
    

};


#endif /* flyingObj_h */
