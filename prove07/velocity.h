#ifndef VELOCITY_H
#define VELOCITY_H

class Velocity
{
public:
   float getDx() const;
   float getDy() const;
   void addDx(float dx);
   void addDy(float dy);

   void setDx(float dx);
   void setDy(float dy);

private:

   float Dx;
   float Dy;
};

#endif
