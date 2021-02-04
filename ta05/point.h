#ifndef POINT_H
#define POINT_H

class Point
{
private:
   int x;
   int y;

public:
   Point();
   Point(int xInput, int yInput);

   int getX() const;
   int getY() const;

   void setX(int xInput);
   void setY(int yInput);

   void display() const;
};

#endif
