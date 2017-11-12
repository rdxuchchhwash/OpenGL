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

glClearColor(1,1,1,0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

void draw()
{

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0.0);
    glVertex2i(180,220);
    glVertex2i(180,380);  //1st green box
    glVertex2i(240,380);
    glVertex2i(240,220);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0.0);
    glVertex2i(240,220);
    glVertex2i(310,220);  //2nd green box
    glVertex2i(310,60);
    glVertex2i(240,60);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1,1,1);
    glVertex2i(190,350);
    glVertex2i(215,350);  //B
    glVertex2i(215,250);
    glVertex2i(190,250);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(195,340);
    glVertex2i(205,340);  //B Inside 1st green
    glVertex2i(205,300);
    glVertex2i(195,300);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(195,285);
    glVertex2i(210,285);  //B Inside 2nd green
    glVertex2i(210,260);
    glVertex2i(195,260);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(210,350);
    glVertex2i(215,350);  //B Inside 2nd green
    glVertex2i(215,300);
    glVertex2i(210,300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1,1,1);
    glVertex2i(225,270);
    glVertex2i(225,245);
    glVertex2i(220,245);
    glVertex2i(220,300);
    glVertex2i(225,300);  //R
    glVertex2i(225,285);
    glVertex2i(235,285);
    glVertex2i(235,270);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(245,300);
    glVertex2i(260,300); //E
    glVertex2i(260,245);
    glVertex2i(245,245);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1,1,1);
    glVertex2i(250,260);
    glVertex2i(250,285);
    glVertex2i(255,285);
    glVertex2i(255,270);
    glVertex2i(260,270);
    glVertex2i(260,260);  //E
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(265,300);
    glVertex2i(280,300); //a
    glVertex2i(280,245);
    glVertex2i(265,245);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1,1,1);
    glVertex2i(275,285);
    glVertex2i(265,285);
    glVertex2i(265,270);//a
    glVertex2i(270,270);
    glVertex2i(270,260);
    glVertex2i(275,260);
    glEnd();

 glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(285,350);
    glVertex2i(290,350); //k
    glVertex2i(290,245);
    glVertex2i(285,245);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(290,297);
    glVertex2i(295,297); //k
    glVertex2i(295,285);
    glVertex2i(290,285);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(295,297);
    glVertex2i(295,315); //k
    glVertex2i(300,315);
    glVertex2i(300,297);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(300,330);
    glVertex2i(306,330); //k
    glVertex2i(306,310);
    glVertex2i(300,310);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(295,285);
    glVertex2i(300,285); //k
    glVertex2i(300,270);
    glVertex2i(295,270);
    glEnd();


glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(300,270);
    glVertex2i(305,270); //k
    glVertex2i(305,260);
    glVertex2i(300,260);
    glEnd();


glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(305,260);
    glVertex2i(310,260); //k
    glVertex2i(310,245);
    glVertex2i(305,245);
    glEnd();

glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(315,300);
    glVertex2i(320,300); //i
    glVertex2i(320,245);
    glVertex2i(315,245);
    glEnd();

glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(315,330);
    glVertex2i(320,330); //i
    glVertex2i(320,310);
    glVertex2i(315,310);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(325,300);
    glVertex2i(345,300); //n
    glVertex2i(345,245);
    glVertex2i(325,245);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1,1,1);
    glVertex2i(330,285);
    glVertex2i(340,285); //n
    glVertex2i(340,245);
    glVertex2i(330,245);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(350,300);
    glVertex2i(370,300); //g
    glVertex2i(370,215);
    glVertex2i(350,215);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1,1,1);
    glVertex2i(355,285);
    glVertex2i(365,285); //g
    glVertex2i(365,260);
    glVertex2i(355,260);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f (1,1,1);
    glVertex2i(350,245);
    glVertex2i(365,245); //g
    glVertex2i(365,232);
    glVertex2i(350,232);
    glEnd();


//////////////
glBegin(GL_POLYGON);
    glColor3f (1,1,1);
    glVertex2i(250,190);
    glVertex2i(275,190);  //2nd B
    glVertex2i(275,85);
    glVertex2i(250,85);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(255,175);
    glVertex2i(265,175);  //B Inside 1st green
    glVertex2i(265,135);
    glVertex2i(255,135);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(255,120);
    glVertex2i(270,120);  //B Inside 2nd green
    glVertex2i(270,100);
    glVertex2i(255,100);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(270,190);
    glVertex2i(275,190);  //B Inside 2nd green
    glVertex2i(275,135);
    glVertex2i(270,135);
    glEnd();
///////

    glBegin(GL_POLYGON);
    glColor3f (1,1,1);
    glVertex2i(280,135);
    glVertex2i(295,135); //2nd a
    glVertex2i(295,85);
    glVertex2i(280,85);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(285,110);
    glVertex2i(280,110);
    glVertex2i(280,120);
    glVertex2i(290,120);
    glVertex2i(290,95);//a
    glVertex2i(285,95);
    glEnd();
    /////
    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(325,135);
    glVertex2i(325,180);
    glVertex2i(335,180);
    glVertex2i(335,85);
    glVertex2i(315,85);
    glVertex2i(315,135);//d
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1,1,1);
    glVertex2i(320,125);
    glVertex2i(327,125); //d
    glVertex2i(327,95);
    glVertex2i(320,95);
    glEnd();

//////flu
    glBegin(GL_POLYGON);
    glColor3f (.73,.89,.92);
    glVertex2i(85,360);
    glVertex2i(100,360); //fl
    glVertex2i(100,275);
    glVertex2i(85,275);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (.73,.89,.92);
    glVertex2i(75,275);
    glVertex2i(110,275); //fl
    glVertex2i(110,260);
    glVertex2i(75,260);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (.73,.89,.92);
    glVertex2i(65,260);
    glVertex2i(120,260); //fl
    glVertex2i(120,245);
    glVertex2i(65,245);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (.73,.89,.92);
    glVertex2i(65,245);
    glVertex2i(120,245); //fl
    glVertex2i(120,220);
    glVertex2i(65,220);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (.73,.89,.92);
    glVertex2i(55,220);
    glVertex2i(130,220); //fl
    glVertex2i(130,150);
    glVertex2i(55,150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (.73,.89,.92);
    glVertex2i(65,150);
    glVertex2i(120,150); //fl
    glVertex2i(120,125);
    glVertex2i(65,125);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (.73,.89,.92);
    glVertex2i(70,125);
    glVertex2i(115,125); //fl
    glVertex2i(115,110);
    glVertex2i(70,110);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f (.73,.89,.92);
    glVertex2i(75,110);
    glVertex2i(110,110); //fl
    glVertex2i(110,100);
    glVertex2i(75,100);
    glEnd();
/////liquid

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(65,190);
    glVertex2i(120,190); //fl
    glVertex2i(120,160);
    glVertex2i(65,160);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(70,160);
    glVertex2i(115,165); //fl
    glVertex2i(115,150);
    glVertex2i(70,150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0,0.6,0);
    glVertex2i(75,150);
    glVertex2i(110,150); //fl
    glVertex2i(110,120);
    glVertex2i(75,120);
    glEnd();


    glFlush ();
}


void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
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
glutCreateWindow ("LabTask 2");

glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();

}


