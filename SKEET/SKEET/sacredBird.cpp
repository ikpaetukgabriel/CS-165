//
//  birdSacred.cpp
//  SKEET
//
//  Created by Gabriel Ikpaetuk on 3/8/21.
//

#include "sacredBird.h"
#include "bird.h"

SacredBird::SacredBird()
{
    Point p( random(-200,0),random(-200, 200));
    
    setPoint(p);
    
    birdInit(3.0,6.0,4.0,1,7.5,-10,0);
}
