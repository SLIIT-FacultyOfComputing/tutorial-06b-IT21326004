#include "Box.h"

// Implement setters and getters
void Box::setLen(int len)
{
  length = len;
}
int Box::getLength()
{
  return length;
}
void Box::setWid(int wid)
{
  width = wid;
}
int Box::getWidth()
{
  return width;
}
void Box::setHei(int hei)
{
  height = hei;
}
int Box::getHeight()
{
  return height;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() 
  return length * width * height;
}
