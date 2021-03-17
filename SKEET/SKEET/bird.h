//
//  bird.h
//  SKEET
//
//  Created by Gabriel Ikpaetuk on 3/8/21.
//
#ifndef bird_h
#define bird_h

#include "velocity.h"
#include "point.h"
#include "flyingObject.h"
#include "uiDraw.h"


// Bird Class
using namespace std;

class Bird : public FlyingObjects{

// Private variables
private:
    float radius;
    int hits;
    int score;
    int morePoints;

// Public
public:
    Bird();
    Bird(Point point);
    void draw();
    int hit();
// Protected
protected:
    
    
    void birdInit(float minX, float maxX, float yRange, int hits, float radius,int score, int morePoints );
    
    int getRadius() {
        
        return radius;
    }
    int getHits() {
    
        return hits;
    }
};


#endif /* bird_h */
