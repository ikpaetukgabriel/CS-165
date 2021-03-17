//
//  velocity.h
//  SKEET
//
//  Created by Gabriel Ikpaetuk on 3/8/21.
//

#ifndef velocity_h
#define velocity_h

#include <stdio.h>


class Velocity{
    
private:
    float dX;
    float dY;
public:

    // Constructor
    Velocity();
    Velocity(float Dx,float Dy);
    
    // getters
    float getDx() const;
    float getDy() const;
    // setters
    void setDx(float Dx);
    void setDy(float Dy);

    
};



#endif /* velocity_h */
