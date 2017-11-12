#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<iostream>
#include<math.h>
using namespace std;

int i,x,y;

int red, green , blue;
int clLimit=255;
int inputValue;
int xaxisLimit=640;//it is the limit of x axis
int yaxisLimit=480;//it is the limit of y axis

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
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void draw()
{
    for(i=0;i<inputValue;i++)
    {
        x=rand()%xaxisLimit;
        y=rand()%yaxisLimit;
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

void input()
{
    cout<<"Enter number of Points : " ;
    cin>>inputValue;
}
void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0,0,0);
    glPointSize(4);// Input of Point Size .Point Size will be changed if we change it.
    draw();
    glFlush ();
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("LabTask");
input();
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();

}


