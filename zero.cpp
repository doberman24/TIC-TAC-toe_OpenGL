#include <cmath>
#include "zero.h"

Zero::Zero(int _x, int _y)
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

Zero::~Zero()
{
}

void Zero::drawO()
{
  glBegin(GL_LINE_LOOP);
  glColor3f(1.0, 0.0, 0.0);
  for(float i = 0; i < 50; ++i)
    glVertex2f(cos(i / 8) * 90 + x, sin(i / 8) * 90 + y);
  glEnd();
}
