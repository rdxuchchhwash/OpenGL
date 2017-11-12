#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<iostream>
#include<math.h>
using namespace std;

int x,y;


void init() {
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, 0, 0, 0);
}

void myInit (void)
{
glClearColor(.96,.81,.65,0);
//glClearColor(1,0,1,0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 100.0, 0.0, 100.0);
}

void draw()
{

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0.0);
    glVertex2i(0,0);
    glVertex2i(100,0);
    glVertex2i(100,16);
    glVertex2i(0,16);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0.0);
    glVertex2i(0,16);
    glVertex2i(0,933);
    glVertex2i(19,93);
    glVertex2i(19,16);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0.0);
    glVertex2i(19,100);
    glVertex2i(19,86);
    glVertex2i(100,86);
    glVertex2i(100,100);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0.0);
    glVertex2i(80,99);
    glVertex2i(80,15);
    glVertex2i(100,15);
    glVertex2i(100,100);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0.0);
    glVertex2i(19,86);
    glVertex2i(21,86);
    glVertex2i(21,68);
    glVertex2i(19,68);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0.0);
    glVertex2i(78,86);
    glVertex2i(80,86);
    glVertex2i(80,68);
    glVertex2i(78,68);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,.6,0);
    glVertex2i(2,100);
    glVertex2i(100,100);
    glVertex2i(6,88);
    glVertex2i(100,88);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (.96,.81,.65);
    glVertex2i(78,62);
    glVertex2i(78,68);
    glVertex2i(80,68);
    glVertex2i(80,56);
    glVertex2i(74,56);
    glVertex2i(74,62);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (.52,.36,0.11);
    glVertex2i(74,56);
    glVertex2i(76,56);
    glVertex2i(76,45);
    glVertex2i(74,45);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (.52,.36,0.11);
    glVertex2i(22,56);
    glVertex2i(24,56);
    glVertex2i(24,45);
    glVertex2i(22,45);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (.96,.81,.65);
    glVertex2i(19,62);
    glVertex2i(25,62);
    glVertex2i(25,56);
    glVertex2i(19,56);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (.96,.81,.65);
    glVertex2i(19,68);
    glVertex2i(21,68);
    glVertex2i(21,62);
    glVertex2i(19,62);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (.52,.36,0.11);
    glVertex2i(30,75);
    glVertex2i(30,62);
    glVertex2i(21,62);
    glVertex2i(21,86);
    glVertex2i(37,86);
    glVertex2i(37,75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (.52,.36,0.11);
    glVertex2i(70,75);
    glVertex2i(70,62);
    glVertex2i(78,62);
    glVertex2i(78,86);
    glVertex2i(62,86);
    glVertex2i(62,75);
    glEnd();

      glBegin(GL_POLYGON);
    glColor3f (0,0.6,0.0);
    glVertex2i(43,44);
    glVertex2i(31,44);
    glVertex2i(31,59);
    glVertex2i(68,59);
    glVertex2i(68,44);
    glVertex2i(57,44);
    glVertex2i(57,41);
    glVertex2i(43,41);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1,1,1);
    glVertex2i(33,56);
    glVertex2i(45,56);
    glVertex2i(45,46);
    glVertex2i(33,46);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1,1,1);
    glVertex2i(55,56);
    glVertex2i(66,56);
    glVertex2i(66,46);
    glVertex2i(55,46);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (.96,.81,.65);;//
    glVertex2i(48,59);
    glVertex2i(52,59);
    glVertex2i(52,57);
    glVertex2i(48,57);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (.52,.36,0.11);
    glVertex2i(37,86);
    glVertex2i(62,86);
    glVertex2i(62,80);
    glVertex2i(37,80);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1,1,1);
    glVertex2i(38,34);
    glVertex2i(63,34);
    glVertex2i(63,31);
    glVertex2i(38,31);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0,0);
    glVertex2i(38,31);
    glVertex2i(63,31);
    glVertex2i(63,27);
    glVertex2i(38,27);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0,0);
    glVertex2i(44,27);
    glVertex2i(58,27);
    glVertex2i(58,23);
    glVertex2i(44,23);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0.0);

    glVertex2i(76,45);
    glVertex2i(76,56);
    glVertex2i(80,56);
    glVertex2i(80,16);
    glVertex2i(74,16);
    glVertex2i(74,45);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0.0);
    glVertex2i(22,45);
    glVertex2i(22,56);
    glVertex2i(19,56);
    glVertex2i(19,16);
    glVertex2i(24,16);
    glVertex2i(24,45);

    glEnd();


    glFlush ();
}


void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    //glColor3f (.25,.66,.58);
    glPointSize(2);
    draw();
    glFlush ();
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (400, 400);
glutInitWindowPosition (400, 400);
glutCreateWindow ("LabTask");

glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();

}


