//
//  bird.cpp
//  SKEET
//
//  Created by Gabriel Ikpaetuk on 3/8/21.
//

#include "bird.h"
#include "uiDraw.h"
#include "velocity.h"
#include "point.h"
#include "flyingObject.h"
#include <cmath>



using namespace std;

// Defalult Constructor for Bird class

Bird::Bird()
{
   
    Point p(-300, 0);
    setPoint(p);
    
    birdInit(3.0,6.0,4.0,1,7.5,1,0);
    
}

// Constructor for bird that points to a Point
Bird::Bird(Point p)
{
    
    setPoint(p);
    birdInit(3.0,6.0,4.0,1,7.5,1,0);
    
}


// draw Function that draw the bird, gets its radius and a point location

void Bird::draw()
{
    
    drawCircle(getPoint(),getRadius());
}

// hit function
int Bird::hit()
{
    hits -- ;
    
    if( hits == 0 )
    {
        kill();
        return score + morePoints;
    }
    
    return score;
}

// initualize the bird veloctity and randomize it


void Bird::birdInit(float minX, float maxX, float yRange, int hits, float radius, int score, int morePoints)
{
    
    Velocity v;
    this -> hits = hits;
    this -> radius = radius;
    this -> score = score;
    this -> morePoints = morePoints;
    
    float y = random( 0.0, yRange);
    
    v.setDx(random(minX, maxX));
    
    if (getPoint().getY() > 0)
        v.setDy(-y);
    else
        v.setDy(y);
    
    setVelocity(v);
    

    
}
