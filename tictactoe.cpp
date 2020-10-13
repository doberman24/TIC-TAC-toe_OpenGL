#include "eks.h"
#include "zero.h"
#include <vector>
using namespace std;

float WinWid = 600.0;
float WinHei = 600.0;
int X = 0, Y = 0;
int pushN = 0;
bool pushL, pushR;

vector<Eks> eks;
vector<Zero> zero;

void display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0.0, 0.0, 0.0);
  glBegin(GL_LINES);
  for(float i = 0; i <= WinWid; i+=200)
  {
    glVertex2f(i, 0);
    glVertex2f(i, WinHei);
  }
  for(float i = 0; i <= WinHei; i+=200)
  {
    glVertex2f(0, i);
    glVertex2f(WinWid, i);
  }

  if (pushL)
  {
    Eks *temp = new Eks(X, Y);
    eks.push_back(*temp);
  }
  for (vector<Eks>::iterator i = eks.begin(); i != eks.end(); ++i)
  i->drawX();

  if (pushR)
  {
    Zero *temp = new Zero(X, Y);
    zero.push_back(*temp);
  }
  for (vector<Zero>::iterator i = zero.begin(); i != zero.end(); ++i)
  i->drawO();

  /*  else
  {
    pushN = false;
    Zero zero(X, Y);
    zero.drawO();
    }*/
  glEnd();
  glFlush();   //Only for GLUT_SINGLE
}

void Timer(int)
{
  glutPostRedisplay();
  glutTimerFunc(10, Timer, 0);
}

void MousePush(int button, int state, int ax, int ay)
{
  pushL = button == GLUT_LEFT_BUTTON;// && state == GLUT_DOWN;
  pushR = button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN;
  X = ax;
  Y = ay;
}

void Initialize()
{
  glClearColor(1.0, 1.0, 1.0, 1.0);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glOrtho(0, WinWid, WinHei, 0, -200.0, 200.0);
  //  glMatrixMode(GL_MODELVIEW);
  //  glTranslatef(50.0, 0.0, 0.0);
}

int main(int argc, char **argv)
{
  //Initialize
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(WinWid, WinHei);
  glutInitWindowPosition(500, 140);
  glutCreateWindow("OpenGL");
  
  //Registration
  Initialize();
  glutDisplayFunc(display);   //Drawing
  glutTimerFunc(10, Timer, 0);
  glutMouseFunc(MousePush);
  glutMainLoop();
}
