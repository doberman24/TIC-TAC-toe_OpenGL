#ifndef GAMEROBJ_H
#define GAMEROBJ_H

#include <GL/glut.h>

class GamerObj
{
 public:
  GamerObj(int _x, int _y);
  ~GamerObj();
  void drawX();
  void drawO();

 private:
  int x;
  int y;
};

#endif //GAMEROBJ_H
