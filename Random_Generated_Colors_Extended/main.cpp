#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<iostream>
#include<math.h>
using namespace std;

int x,y;
int w=10; // Input of Point Size .Point Size will be changed if we change it.
int red, green , blue;
int clLimit=255;



void init() {
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, 0, 0, 0);
}

void myInit (void)
{
glClearColor(1,1,1,0);
//glClearColor(1,0,1,0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(w);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void draw()
{
    for(x=w/2;x<=640;x=x+w)
    {
            for(int y=w/2;y<=480;y=y+w)
                {

                    red=rand()%clLimit;
                    green=rand()%clLimit;
                    blue=rand()%clLimit;
                    glColor3ub (red,green,blue);
                    glBegin(GL_POINTS);
                    glVertex2i(x,y);
                    glEnd();
                    glFlush();

                }

    }
}


void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0,0,0);
    glPointSize(w);
    draw();
    glFlush ();
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("LabTask2");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();

}


