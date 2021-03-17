//
//  birdTough.cpp
//  SKEET
//
//  Created by Gabriel Ikpaetuk on 3/8/21.
//

#include "toughBird.h"
#include "bird.h"



ToughBird::ToughBird()
{
    Point p( random(-200,0),random(-200, 200));
    
    setPoint(p);
    
    birdInit(2.0,4.0,3.0,3,7.5,1,3);
}
