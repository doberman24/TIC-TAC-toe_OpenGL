#ifndef EKS_H
#define EKS_H

#include "zero.h"
#include <GL/glut.h>

class Eks
{
 public:
  Eks(int _x, int _y);
//  ~Eks();
  void drawX();

 private:
  int x;
  int y;
};

#endif //EKS_H
