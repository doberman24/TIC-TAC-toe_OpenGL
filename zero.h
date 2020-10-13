#ifndef ZERO_H
#define ZERO_H

#include <GL/glut.h>

class Zero
{
 public:
  Zero(int _x, int _y);
  ~Zero();
  void drawO();

 private:
  int x;
  int y;
};

#endif //ZERO_H
