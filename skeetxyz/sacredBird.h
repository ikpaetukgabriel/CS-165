//
//  birdSacred.h
//  SKEET
//
//  Created by Gabriel Ikpaetuk on 3/8/21.
//

#ifndef sacredBird_h
#define sacredBird_h
#include "bird.h"



class SacredBird: public Bird
{
public:
    SacredBird();
    
    virtual void draw(){
        drawSacredBird(getPoint(),getRadius());
    }
};

#endif /* sacredBird_h */
