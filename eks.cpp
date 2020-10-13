#include "eks.h"

Eks::Eks(int _x, int _y)
{
  if(_x < 200 && _y < 200)
  {
    x = 100;
    y = 100;
  }
  if(_x < 400 && _x > 200 && _y < 200)
  {
    x = 300;
    y = 100;
  }
  if(_x < 600 && _x > 400 && _y < 200)
  {
    x = 500;
    y = 100;
  }
  if(_x < 200 && _y < 400 && _y > 200)
  {
    x = 100;
    y = 300;
  }
  if(_x < 400 && _x > 200 && _y < 400 && _y > 200)
  {
    x = 300;
    y = 300;
  }
  if(_x < 600 && _x > 400 && _y < 400 && _y > 200)
  {
    x = 500;
    y = 300;
  }
  if(_x < 200 && _y < 600 && _y > 400)
  {
    x = 100;
    y = 500;
  }
  if(_x < 400 && _x > 200 && _y < 600 && _y > 400)
  {
    x = 300;
    y = 500;
  }
  if(_x < 600 && _x > 400 && _y < 600 && _y > 400)
  {
    x = 500;
    y = 500;
  }
}

/*Eks::~Eks()
{
}*/

void Eks::drawX()
{
  glColor3f(0.0, 0.0, 1.0);
  glVertex2f(this->x - 90, this->y - 90);
  glVertex2f(this->x + 90, this->y + 90);
  glVertex2f(this->x + 90, this->y - 90);
  glVertex2f(this->x - 90, this->y + 90);
}
