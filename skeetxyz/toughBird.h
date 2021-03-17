//
//  birdTough.h
//  SKEET
//
//  Created by Gabriel Ikpaetuk on 3/8/21.
//


#ifndef toughBird_h
#define toughBird_h
#include "bird.h"



class ToughBird: public Bird
{
public:
    ToughBird();
    
    virtual void draw(){
        drawToughBird(getPoint(), getRadius(), getHits());
    }
};

#endif /* toughBird_h */
