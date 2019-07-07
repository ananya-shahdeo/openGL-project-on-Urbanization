#include<windows.h>
#include<GL/glut.h>
#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include <iostream>
#include <cstdio>
#include <string>
#include<stdio.h>
#include <cstdlib>
#define PI 3.1416
using namespace std;
int submenu;
int j=0;
float c1xp=0.0,c1yp=0.0,c1zp=0.0,c2xp=0.0,c2yp=0.0,c2zp=0.0;
float p1xp=0.0,p1yp=0.0,p1zp=0.0,p1sxp=0.0,p1syp=0.0,p1szp=0.0;
float x=1.0,rxp=0.0,ryp=0.0,rzp=0.0,r=0.0;
float width=-940,width2=600,width3=2000;
int dnr=103,dng=155,dnb=176;
char b[] = "m = Move & Speed",n[] = "n = Night/Day or Right Click",e[] = "s =Stop";
void init(void)
{
        glClearColor(0.0,0,0, 0.0);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(0.0, 1000.0, 0.0, 500.0);
        glutSwapBuffers();
}
void printtext(int x, int y, string String,int font)
{
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    glOrtho(0,1000, 0,1000, -1.0f, 1.0f);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x,y);
   if(font==1)
    for (int i=0; i<String.size(); i++)
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, String[i]);
    if(font==2)
        for (int i=0; i<String.size(); i++)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, String[i]);
    glPopAttrib();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPopMatrix();
    glFlush();
}
void drawCircle(GLfloat x, GLfloat y, GLfloat radius)
{
    int i;
    int triangleAmount = 50; //# of triangles used to draw circle
    GLfloat twicePi = 2.0f * 3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2d(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2d(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
        glEnd();
}
void frontscreen(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    char string[64];
    sprintf(string, "BANGALORE INSTITUTE OF TECHNOLOGY");
    printtext(325,900,string,2);
    sprintf(string, "DEPARTMENT OF COMPUTER SCIENCE");
    printtext(340,850,string,2);
    sprintf(string, "AND ENGINEERING");
    printtext(400,800,string,2);
    sprintf(string, "AN OPENGL MINI PROJECT ON:");
    printtext(365,750,string,2);
    sprintf(string, "URBANIZATION");
    printtext(400,700,string,2);
    sprintf(string, "Press e for early_stage");
    printtext(390,650,string,1);
    sprintf(string, "Press v for village");
    printtext(390,600,string,1);
    sprintf(string, "Press c for city");
    printtext(390,550,string,1);
    sprintf(string, "BY:");
    printtext(50,180,string,2);
    sprintf(string, "ANANYA SHAHDEO         ADITI SHAHDEO");
    printtext(50,120,string,2);
    sprintf(string, "1BI16CS188                1BI16CS189");
    printtext(50,80,string,2);
    sprintf(string, "UNDER THE GUIDENCE OF:");
    printtext(750,160,string,2);
    sprintf(string, "PROF GIRIJA J");
    printtext(750,120,string,2);
    sprintf(string, "PROF K N PRASHANTH KUMAR");
    printtext(750,80,string,2);
    sprintf(string, "PROF VARSHITHA K C");
    printtext(750,40,string,2);
    glutSwapBuffers();
	glFlush();
}
void cloud_model_one(){
    glColor3f(1.25, 0.924, 0.930);
    if(dnr==0 && dng==50 && dnb==59)
        glColor3ub(0,50,59);
    drawCircle(320.0f,210.0f,15);///top_left
    drawCircle(340.0f,225.0f,16.0f);///top
    drawCircle(360.0f,210.0f,16.0f);///Right
    drawCircle(355.0f,210.0f,16.0f);///middle_Fill
    drawCircle(350.0f,210.0f,16.0f);
    drawCircle(345.0f,204.0f,10.0f);
    drawCircle(340.0f,204.0f,10.0f);
    drawCircle(335.0f,204.0f,10.0f);
    drawCircle(330.0f,204.0f,10.0f);
    drawCircle(325.0f,204.0f,10.0f);
    drawCircle(320.0f,204.0f,10.0f);
    drawCircle(315.0f,204.0f,10.0f);
    drawCircle(310.0f,204.0f,10.0f);
    drawCircle(305.0f,204.0f,10.0f);
 }
void cloud_model_Two(){
    glColor3f(1.25, 0.924, 0.930);
    if(dnr==0 && dng==50 && dnb==59)
        glColor3ub(0,50,59);
        drawCircle(305.0f,205.0f,10.0f);           ///Left_Part
    drawCircle(320.0f,210.0f,15.0f);           ///Top
    drawCircle(334.0f,207.0f,10.0f);           ///right_Part
    drawCircle(320.0f,207.0f,10.0f);           ///bottom_part
}
void cloud_model_Three(){
    glColor3f(1.25, 0.924, 0.930);
    if(dnr==0 && dng==50 && dnb==59)
        glColor3ub(0,50,59);
    drawCircle(300.0f,200.0f,15.0f);            ///Left_part
    drawCircle(320.0f,210.0f,15.0f);            ///Top_left
    drawCircle(340.0f,220.0f,16.0f);            ///Top
    drawCircle(360.0f,210.0f,15.0f);            ///Top_Right
    drawCircle(380.0f,200.0f,15.0f);            ///Right_Part
    drawCircle(360.0f,190.0f,20.0f);            ///Bottom_Right
    drawCircle(320.0f,190.0f,20.0f);            ///Bottom_Left
    drawCircle(340.0f,190.0f,20.0f);            ///Bottom
}
void hill_big(){
	glBegin(GL_POLYGON);
    glColor3f(0.396, 0.263, 0.129);
	glVertex2i(70, 150);
	glVertex2i(200, 305);
	glVertex2i(330, 150);
	glEnd();
}
void human(){
    glColor3f(0.0,0.0,0.0);
    drawCircle(195.0f, 175.0f, 5.0f);
    glLineWidth(2);
    glBegin(GL_LINES);
	glVertex2i(192,130);
	glVertex2i(192,150);
    glVertex2i(198, 130);
	glVertex2i(198, 150);
	glVertex2i(205, 150);
	glVertex2i(200, 170);
	glVertex2i(185,150 );
	glVertex2i(190,170);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(190,150);
    glVertex2i(190,170);
    glVertex2i(200,170);
    glVertex2i(200,150);
    glEnd();
    glFlush();
}
void vera()
{
    ///////////////////////////////1st vera
 	glColor3ub (0, 0, 10);////////legs from L.H.S
	glBegin(GL_LINES);
	glVertex2i(193, 130);
	glVertex2i(193, 142);
	glVertex2i(196, 130);
	glVertex2i(196, 140);
	glVertex2i(203, 130);
	glVertex2i(203, 140);
	glVertex2i(206, 130);
	glVertex2i(206, 142);
    glEnd();
    glFlush();
    glColor3ub (208, 216, 219);////////body
    drawCircle(200.0f, 150.0f, 10.0f);
    glFlush();
    glColor3ub (20, 50, 10);//////head
    drawCircle(212.0f, 150.0f, 5.0f);
	glFlush();
    glColor3ub (255, 255, 255);////////eyes
    glPointSize(0.1);
	glBegin(GL_POINTS);
	glVertex2i(210, 150);
	glVertex2i(214, 150);
    glEnd();
	glColor3ub (0, 0, 10);//////////mouth
	drawCircle(212.0f, 145.0f, 2.0f);
    glFlush();
	drawCircle(209.0f, 155.0f, 2.0f);//ear
	glFlush();
	drawCircle(215.0f, 155.0f, 2.0f);
	glFlush();
    ///////////////////////////////////////////////////2nd vera
    glColor3ub (0, 0, 10);////////legs from L.H.S
	glBegin(GL_LINES);
	glVertex2i(235, 130);
	glVertex2i(235, 142);
	glVertex2i(238, 130);
	glVertex2i(238, 140);
	glVertex2i(245, 130);
	glVertex2i(245, 140);
	glVertex2i(248, 130);
	glVertex2i(248, 143);
    glEnd();
    glFlush();
    glColor3ub (208, 216, 219);////////body
    drawCircle(240.0f, 150.0f, 10.0f);
    glFlush();
    glColor3ub (20, 50, 10);//////head
	drawCircle(230.0f, 150.0f, 5.0f);
    glFlush();
    glColor3ub (255, 255, 255);////////eyes
	glPointSize(0.1);
	glBegin(GL_POINTS);
	glVertex2i(228, 150);
	glVertex2i(232, 150);
    glEnd();
    glFlush();
    glColor3ub (0, 0, 10);//////////mouth
    drawCircle(230.0f, 145.0f, 2.0f);
    glFlush();
	drawCircle(233.0f, 155.0f, 2.0f);//right ear
	glFlush();
    drawCircle(227.0f, 155.0f, 2.0f);////////////left ear
	glFlush();
   }
void hill_small(){
    glBegin(GL_POLYGON);
    glColor3ub(181,101,29);
	glVertex2i(250, 150);
	glVertex2i(325, 285);
	glVertex2i(400, 150);
	glEnd();
	glFlush();
   }
void Tilla_One_Model(){
    glColor3f(0.1, 1.293, 0.0);
    if(dnr==0 && dng==50 && dnb==59)
         glColor3ub(50,208, 50);
    glBegin(GL_POLYGON);
    glVertex2i(125, 150);
	glVertex2i(150, 160);
	glVertex2i(160, 170);
	glVertex2i(170, 170);
	glVertex2i(180, 180);
	glVertex2i(190, 185);
	glVertex2i(200, 188);
	glVertex2i(330, 188);
	glVertex2i(360, 150);
	glEnd();
	glFlush();
}
void Tilla_Two_Model(){
    glColor3f(0.1, 1.293, 0.0);
    if(dnr==0 && dng==50 && dnb==59)
        glColor3ub(50,208, 50);
    drawCircle(430.0f,170.0f,30.0f);          /// Left_Part
    drawCircle(420.0f,167.0f,30.0f);
    drawCircle(410.0f,160.0f,30.0f);
    drawCircle(400.0f,160.0f,30.0f);
    drawCircle(390.0f,150.0f,30.0f);
    drawCircle(445.0f,160.0f,30.0f);         ///Right_Part
    drawCircle(455.0f,145.0f,30.0f);
    drawCircle(465.0f,150.0f,30.0f);
    drawCircle(470.0f,145.0f,30.0f);
    drawCircle(480.0f,140.0f,30.0f);
    drawCircle(485.0f,135.0f,20.0f);
}
void house(){
    glBegin(GL_POLYGON);///House_Fence
    glColor3ub(180, 180, 180);
	glVertex2i(290, 150);
	glVertex2i(290, 184);
	glVertex2i(375, 184);
	glVertex2i(375, 150);
	glEnd();
   	glBegin(GL_POLYGON); ///House_Door
    glColor3f(0.38, 0.41, 0.36);
	glVertex2i(330, 150);
	glVertex2i(330, 180);
	glVertex2i(350, 180);
	glVertex2i(350, 150);
	glEnd();
    glColor3f(0.38, 0.21, 0.26);
    if(dnr==0 && dng==50 && dnb==59)
       glColor3f(1,1, 0);
	glBegin(GL_POLYGON); ///House_Window1
	glVertex2i(295, 160);
	glVertex2i(295, 175);
	glVertex2i(310, 175);
	glVertex2i(310, 160);
	glEnd();
  	glBegin(GL_POLYGON);  ///House_Window2
    glVertex2i(312, 160);
	glVertex2i(312, 175);
	glVertex2i(327, 175);
	glVertex2i(327, 160);
	glEnd();
   	glBegin(GL_POLYGON); ///House_Window3
   	glVertex2i(355, 160);
	glVertex2i(355, 175);
	glVertex2i(370, 175);
	glVertex2i(370, 160);
	glEnd();
    glBegin(GL_POLYGON);///roof big
    glColor3ub(128,0,0);
	glVertex2i(250, 170);
	glVertex2i(257, 190);
	glVertex2i(290, 190);
	glVertex2i(290, 170);
	glEnd();
   	glBegin(GL_POLYGON); ///House_Small_Fence
    glColor3ub(255,200,78);
	glVertex2i(255, 150);
	glVertex2i(255, 170);
	glVertex2i(290, 170);
	glVertex2i(290, 150);
	glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.256, 0.129);
	glVertex2i(265, 150);
	glVertex2i(265, 165);
	glVertex2i(280, 165);
	glVertex2i(280, 150);
	glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(235, 200, 95);
	glVertex2i(280, 184);
	glVertex2i(290, 225);
	glVertex2i(375, 225);
	glVertex2i(385, 184);
	glEnd();
    glFlush();
    }
void field(){
   	glBegin(GL_POLYGON); ///Field
    glColor3ub(0,128, 0);
	glVertex2i(0, 100);
	glVertex2i(0, 150);
	glVertex2i(1000, 150);
	glVertex2i(1000, 100);
	glEnd();
    glBegin(GL_POLYGON);///Field_Shadow
	glColor3f(0.1, 1.293, 0.0);
    if(dnr==0 && dng==50 && dnb==59)
        glColor3ub(0,128, 0);
	glVertex2i(0, 0);
	glVertex2i(0, 100);
	glVertex2i(1000, 100);
	glVertex2i(1000, 0);
	glEnd();
    }
void field1(){
   	glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
	glVertex2i(0, 0);
	glVertex2i(0, 150);
	glVertex2i(1000, 150);
	glVertex2i(1000, 0);
	glEnd();
}
void Tree_Model_One(){
    if(dnr==0 && dng==50 && dnb==59)
        glColor3ub(0,128, 0);
    drawCircle(110.0f,190.0f,15.0f);
    drawCircle(110.0f,180.0f,15.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2f(109, 150);
	glVertex2f(109, 170);
	glVertex2f(111, 170);
	glVertex2f(111, 150);
    glEnd();
    glFlush();
}
void Tree_Model_Two(){
    if(dnr==0 && dng==50 && dnb==59)
        glColor3ub(0,128, 0);
    drawCircle(130.0f,228.0f,7.0f);
    drawCircle(125.0f,222.0f,7.0f);
    drawCircle(135.0f,222.0f,7.0f);
    drawCircle(130.0f,220.0f,7.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2f(129, 190);
	glVertex2f(129, 220);
	glVertex2f(131, 220);
	glVertex2f(131, 190);
    glEnd();
}
void Tree_Model_Three(){
    if(dnr==0 && dng==50 && dnb==59)
        glColor3ub(0,128, 0);
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.728,0.0);
	glVertex2f(120, 215);
	glVertex2f(133, 240);
	glVertex2f(144, 215);
	glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2f(132, 190);
	glVertex2f(132, 220);
	glVertex2f(134, 220);
	glVertex2f(134, 190);
    glEnd();
}
void Sun(){
    glColor3f(1, 1, 0);
    drawCircle(850.0f,450.0f,35.0f);
}
void Moon(){
    glColor3f(1, 1, 1);
    drawCircle(850.0f,450.0f,25.0f);
}
void cloud_one(){
    glPushMatrix();
    glTranslatef(0,90,0);
    cloud_model_one();
   glTranslatef(-300,40,0);
    cloud_model_one();
    glTranslatef(750,30,0);
    cloud_model_Two();
    glTranslatef(-150,15,0);
    cloud_model_Two();
    glTranslatef(-390,40,0);
    cloud_model_Three();
    glTranslatef(500,30,0);
    cloud_model_Three();
    glPopMatrix();
}
void sheep1(){
    glPushMatrix();
    glTranslatef(420,-25,0);
    vera();
    glPopMatrix();
    glFlush();
}
void sheep2(){
    glPushMatrix();
    glTranslatef(420,-45,0);
    vera();
    glPopMatrix();
    glFlush();
}
void Hill_Big_One(){
    glPushMatrix();
    glTranslatef(0,0,0);
    hill_big();
    glPopMatrix();
}
void Hill_Big_Two(){
    glPushMatrix();
    glTranslatef(550,-20,0);
    hill_big();
    glPopMatrix();
}
void Hill_Small_two(){
    glPushMatrix();
    glTranslatef(300,0,0);
   hill_big();
    glPopMatrix();
}
void Hill_Big_three(){
    glPushMatrix();
    glTranslatef(300,0,0);
    hill_big();
    glPopMatrix();
}
void Hill_Big_four(){
    glPushMatrix();
    glTranslatef(-100,0,0);
    hill_big();
    glPopMatrix();
}
void Hill_Big_five(){
    glPushMatrix();
    glTranslatef(400,0,0);
    hill_big();
    glPopMatrix();
}
void Hill_Small_three(){
    glPushMatrix();
    glTranslatef(600,0,0);
    hill_small();
    glPopMatrix();
}
void Hill_Small_four(){
    glPushMatrix();
    glTranslatef(350,0,0);
    hill_small();
    glPopMatrix();
}
void Hill_Small_One(){
    glPushMatrix();
    glTranslatef(0,0,0);
    hill_small();
    glPopMatrix();
}
void Tilla_One(){
    glPushMatrix();
    glTranslatef(0,0,0);
    Tilla_One_Model();
    glPopMatrix();
}
void Tilla_Two(){
    glPushMatrix();
    glTranslatef(0,0,0);
    Tilla_Two_Model();
    glPopMatrix();
}
void Tilla_Three(){
    glPushMatrix();
    glTranslatef(400,0,0);
    Tilla_Two_Model();
    glPopMatrix();
}
void Tilla_Four(){
    glPushMatrix();
    glTranslatef(380,0,0);
    Tilla_One_Model();
    glPopMatrix();
}
void Tree_One(){
    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(0,0,0);
    Tree_Model_One();
    glPopMatrix();
}void house_one(){
    glPushMatrix();
    glTranslatef(320, 37,0);
    house();
    glTranslatef(-570,-37,0);
    house();
     glTranslatef(750,0,0);
    house();
    glTranslatef(-500,0,0);
    house();
    glPopMatrix();
}
void Tree_Two(){
    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(540,0,0);
    Tree_Model_One();
    glPopMatrix();
}
void Tree_Three(){
    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(750,0,0);
    Tree_Model_One();
    glPopMatrix();
}
void Tree_Four(){
    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(292,40,0);
    Tree_Model_One();
    glPopMatrix();
}
void Tree_Five(){
    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(30,-20,0);
    Tree_Model_Two();
    glPopMatrix();
}
void Tree_Six(){
    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(50,-10,0);
    Tree_Model_Two();
    glPopMatrix();
}
void Tree_Seven(){
    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(322,0,0);
    Tree_Model_Two();
    glPopMatrix();
}
void Tree_Eight(){
    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(350,-15,0);
    Tree_Model_Two();
    glPopMatrix();
}
void Tree_Nine(){
    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(760,-25,0);
    Tree_Model_Two();
    glPopMatrix();
}
void Tree_Ten(){
    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(90,-2,0);
    Tree_Model_Three();
    glPopMatrix();
}
void Tree_Eleven(){
    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(125,0,0);
    Tree_Model_Three();
    glPopMatrix();
}
void forest()
{
     for(int c=0;c<8*200;c+=30)
    {
    glColor3ub(0,128, 0);
    glPushMatrix();
    glTranslatef(c+120,-10,0);
    Tree_Model_One();
    glPopMatrix();
    }
    for(int c=0;c<8*200;c+=30)
    {
    glColor3ub(0,128, 0);
    glPushMatrix();
    glTranslatef(c+120,-50,0);
    Tree_Model_One();
    glPopMatrix();
    }
    for(int c=0;c<8*200;c+=30)
    {
    glColor3ub(0,128, 0);
    glPushMatrix();
    glTranslatef(c+120,-90,0);
    Tree_Model_One();
    glPopMatrix();
}
for(int c=0;c<8*200;c+=30)
    {
    glColor3ub(0,128, 0);
    glPushMatrix();
    glTranslatef(c+120,-130,0);
    Tree_Model_One();
    glPopMatrix();
}
}
void forest_1()
{
    glPushMatrix();
    glTranslatef(-220,-30,0);
    forest();
    glPopMatrix();
}
void Tree_Twelve(){
    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(408,-22,0);
    Tree_Model_Three();
    glPopMatrix();
}
void human1(){
    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(-20,-42,0);
    human();
    glPopMatrix();
}
void human2(){
    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(510,-25,0);
    human();
    glPopMatrix();
}
void human3(){
    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(-45,-42,0);
    human();
    glPopMatrix();
}
void human4(){
    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(-90,20,0);
    glScalef(0.8,0.8,0.8);
    human();
    glPopMatrix();
}
void print( float x, float y, char *st)
{
    int l,i;
    l=strlen( st ); // see how many characters are in text string.
    glColor3f(0.2,1.0,0.7);
    glRasterPos2f( x, y); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);
    }
}
void Sky()
{
        glPushMatrix();
        glColor3ub(103,155,176);
        if(dnr==0 && dng==50 && dnb==59)
            glColor3ub(0,50,59);
        glBegin(GL_QUADS);
        glVertex2i(0,684);
        glVertex2i(1000,684);
        glVertex2i(1000,0);
        glVertex2i(0,0);
        glEnd();
        glPopMatrix();

        //glutPostRedisplay();
}
void homeWindow(int x,int y)
{
        glPushMatrix();
        glColor3ub(156,178,189);
        if(dnr==0 && dng==50 && dnb==59)
            glColor3f(1,1,1);
        glBegin(GL_QUADS);
        glVertex2i(x,y);
        glVertex2i(x+10,y);
        glVertex2i(x+10,y+12);
        glVertex2i(x,y+12);
        glEnd();
        glPopMatrix();
}
void homeWindow2(int x,int y)
{
    glPushMatrix();
    glColor3ub(96,131,135);
    glBegin(GL_QUADS);
    glVertex2i(x,y);
    glVertex2i(x+4,y);
    glVertex2i(x+4,y+17);
    glVertex2i(x,y+17);
    glEnd();
    glPopMatrix();
}
void homeWindow3(int x,int y)
{
    glPushMatrix();
    glColor3ub(140,148,148);
    if(dnr==0 && dng==50 && dnb==59)
        glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2i(x,y);
    glVertex2i(x+14,y);
    glVertex2i(x+14,y+13);
    glVertex2i(x,y+13);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2i(x,y+17);
    glVertex2i(x+14,y+17);
    glVertex2i(x+14,y+30);
    glVertex2i(x,y+30);
    glEnd();
    glPopMatrix();
}
void Home()
{
    glPushMatrix();
    glColor3ub(150,214,184);
    glBegin(GL_QUADS);
    glVertex2i(20,385);
    glVertex2i(118,385);
    glVertex2i(118,398);
    glVertex2i(20,398);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(127,10,20);
    glBegin(GL_QUADS);
    glVertex2i(20,379);
    glVertex2i(118,379);
    glVertex2i(118,385);
    glVertex2i(20,385);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(150,214,184);
    glBegin(GL_QUADS);
    glVertex2i(28,370);
    glVertex2i(110,370);
    glVertex2i(110,379);
    glVertex2i(28,379);
    glEnd();

    glColor3ub(150,214,184);
    glBegin(GL_QUADS);
    glVertex2i(10,330);
    glVertex2i(130,330);
    glVertex2i(130,370);
    glVertex2i(10,370);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(150,214,184);
    glBegin(GL_QUADS);
    glVertex2i(0,309);
    glVertex2i(141,309);
    glVertex2i(141,331);
    glVertex2i(0,331);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(150,214,184);
    glBegin(GL_QUADS);
    glVertex2i(5,257);
    glVertex2i(137,257);
    glVertex2i(137,309);
    glVertex2i(5,309);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(52,257);
    glVertex2i(87,257);
    glVertex2i(87,287);
    glVertex2i(52,287);
    glEnd();
    glPopMatrix();
    int HomeStripe1=-5;     ///Bottom Block
     for(int i=9;i>=0;i--)
    {
        HomeStripe1+=13;
        homeWindow(HomeStripe1,292);
     }
    int HomeStripe2=-5;     ///Bottom up block
    for(int i=16;i>=0;i--)
    {
        HomeStripe2+=8;
        homeWindow2(HomeStripe2,312);
    }
    int HomeStripe3=-1;     ///next Bottom up block
    for(int i=5;i>=0;i--)
    {
        HomeStripe3+=18;
        homeWindow3(HomeStripe3,335);
    }

    glutPostRedisplay();
}
void HospitalWindow1(int x,int y)
{
    glPushMatrix();
    glColor3ub(0,0,0);
    if(dnr==0 && dng==50 && dnb==59)
        glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2i(x,y);
    glVertex2i(x+16,y);
    glVertex2i(x+16,y+30);
    glVertex2i(x,y+30);
    glEnd();
    glPopMatrix();
}
void HospitalMidWindow1(int x,int y)
{
    glPushMatrix();
    glColor3ub(0,0,0);
    if(dnr==0 && dng==50 && dnb==59)
        glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2i(x,y);
    glVertex2i(x+12,y);
    glVertex2i(x+12,y+18);
    glVertex2i(x,y+18);
    glEnd();
    glPopMatrix();
}
void Hospital()
{
    glPushMatrix();
    glColor3ub(252,222,66);
    glBegin(GL_QUADS);
    glVertex2i(151,257);
    glVertex2i(181,257);
    glVertex2i(181,424);
    glVertex2i(151,424);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(252,222,66);
    glBegin(GL_QUADS);
    glVertex2i(449,257);
    glVertex2i(449,424);
    glVertex2i(420,424);
    glVertex2i(420,257);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(252,222,66);
    glBegin(GL_QUADS);
    glVertex2i(181,381);
    glVertex2i(420,381);
    glVertex2i(420,400);
    glVertex2i(181,400);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(190,27,9);
    glBegin(GL_QUADS);
    glVertex2i(181,258);
    glVertex2i(420,258);
    glVertex2i(420,381);
    glVertex2i(181,381);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(151,390);
    glVertex2i(181,390);
    glVertex2i(181,401);
    glVertex2i(151,401);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(420,390);
    glVertex2i(449,390);
    glVertex2i(449,401);
    glVertex2i(420,401);
    glEnd();
    glPopMatrix();
    int HospitalStripe1=163;
    for(int i=11;i>=0;i--)
    {
        HospitalStripe1+=20;
        HospitalWindow1(HospitalStripe1,349);
    }
    int HospitalStripe2=163;
    for(int i=11;i>=0;i--)
    {
        HospitalStripe2+=20;
        HospitalWindow1(HospitalStripe2,315);
    }
    int HospitalStripe3=163;
    for(int i=11;i>=0;i--)
    {
        HospitalStripe3+=20;
        HospitalWindow1(HospitalStripe3,281);
    }
    glPushMatrix(); //middle long stripe
    glColor3ub(252,222,66);
    glBegin(GL_QUADS);
    glVertex2i(263,257);
    glVertex2i(339,257);
    glVertex2i(339,400);
    glVertex2i(263,400);
    glEnd();
    glPopMatrix();
    int HospitalStripe4=260;
    for(int i=3;i>=0;i--)
    {
        HospitalStripe4+=14;
        HospitalMidWindow1(HospitalStripe4,370);
    }
    int HospitalStripe5=260;
    for(int i=3;i>=0;i--)
    {
        HospitalStripe5+=14;
        HospitalMidWindow1(HospitalStripe5,340);
    }

     int HospitalStripe6=260;
    for(int i=3;i>=0;i--)
    {
        HospitalStripe6+=14;
        HospitalMidWindow1(HospitalStripe6,310);
    }

    glPushMatrix();  //Door
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(286,257);
    glVertex2i(318,257);
    glVertex2i(318,298);
    glVertex2i(286,298);
    glEnd();
    glPopMatrix();
    glutPostRedisplay();
}
void plus1()
{
 glPushMatrix();
    glColor3ub(255,0,0);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2i(301,395);
    glVertex2i(301,426);
    glVertex2i(284,413);
    glVertex2i(318,413);
    glEnd();
    glPopMatrix();
}
void HotelBelowWindow1(int x,int y)
{
    glPushMatrix();
    glColor3ub(5,150,155);
    if(dnr==0 && dng==50 && dnb==59)
        glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2i(x,y);
    glVertex2i(x+19,y);
    glVertex2i(x+19,y+13);
    glVertex2i(x,y+13);
    glEnd();
    glPopMatrix();
}
void HotelAboveWindow1(int x,int y)
{
    glPushMatrix();
    glColor3ub(5,150,155);
    if(dnr==0 && dng==50 && dnb==59)
        glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2i(x,y);
    glVertex2i(x+17,y);
    glVertex2i(x+17,y+21);
    glVertex2i(x,y+21);
    glEnd();
    glPopMatrix();
}
void Hotel()
{
    glPushMatrix();
    glColor3ub(8,32,19);
    glBegin(GL_QUADS);
    glVertex2i(449,257);
    glVertex2i(644,257);
    glVertex2i(644,289);
    glVertex2i(449,289);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(23,60,43);
    glBegin(GL_QUADS);
    glVertex2i(473,289);
    glVertex2i(500,289);
    glVertex2i(500,413);
    glVertex2i(473,413);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(15,47,106);
    glBegin(GL_QUADS);
    glVertex2i(500,289);
    glVertex2i(517,289);
    glVertex2i(517,435);
    glVertex2i(500,435);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(21,63,53);
    glBegin(GL_QUADS);
    glVertex2i(517,289);
    glVertex2i(617,289);
    glVertex2i(617,408);
    glVertex2i(517,408);
    glEnd();
    glPopMatrix();

    glPushMatrix();  // above name plate
    glColor3ub(30,72,230);
    glBegin(GL_QUADS);
    glVertex2i(526,408);
    glVertex2i(600,408);
    glVertex2i(600,423);
    glVertex2i(526,423);
    glEnd();
    glPopMatrix();
    glColor3ub(23,60,43);  // side circle
    drawCircle(475.0f,310.0f,18.0f);
    drawCircle(475.0f,348.0f,18.0f);
    drawCircle(475.0f,383.0f,18.0f);
    int HotelBelowStripe1=430;
    for(int i=7;i>=0;i--)
    {
        HotelBelowStripe1+=24;
        HotelBelowWindow1(HotelBelowStripe1,267);
    }
    int HotelAboveStripe1=498;
    for(int i=3;i>=0;i--)
    {
        HotelAboveStripe1+=24;
        HotelAboveWindow1(HotelAboveStripe1,377);
    }
    int HotelAboveStripe2=498;
    for(int i=3;i>=0;i--)
    {
        HotelAboveStripe2+=24;
        HotelAboveWindow1(HotelAboveStripe2,350);
    }
    int HotelAboveStripe3=498;
    for(int i=3;i>=0;i--)
    {
        HotelAboveStripe3+=24;
        HotelAboveWindow1(HotelAboveStripe3,323);
    }
    int HotelAboveStripe4=498;
    for(int i=3;i>=0;i--)
    {
        HotelAboveStripe4+=24;
        HotelAboveWindow1(HotelAboveStripe4,295);
    }
}
void Door()
{
    glColor3ub(8,32,19);
    drawCircle(547.0f,282.0f,22.0f);

    glPushMatrix();     // door
    glColor3ub(119,81,70);
    glBegin(GL_QUADS);
    glVertex2i(524,258);
    glVertex2i(570,258);
    glVertex2i(570,281);
    glVertex2i(524,281);
    glEnd();
    glPopMatrix();

    glPushMatrix();     // door middle
    glColor3ub(70,113,106);
    glBegin(GL_QUADS);
    glVertex2i(528,280);
    glVertex2i(546,280);
    glVertex2i(546,257);
    glVertex2i(528,257);
    glEnd();
    glPopMatrix();

    glPushMatrix();     // door middle
    glColor3ub(70,113,106);
    glBegin(GL_QUADS);
    glVertex2i(548,257);
    glVertex2i(565,257);
    glVertex2i(565,280);
    glVertex2i(548,280);
    glEnd();
    glPopMatrix();
}
void SchoolWindow1(int x,int y)
{
    glPushMatrix();
        glColor3ub(190,202,200);
    if(dnr==0 && dng==50 && dnb==59)
        glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2i(x,y);
    glVertex2i(x+20,y);
    glVertex2i(x+20,y+17);
    glVertex2i(x,y+17);
    glEnd();
    glPopMatrix();
}
void School()
{
    glPushMatrix();
    glColor3ub(214,130,5);
    glBegin(GL_QUADS);
    glVertex2i(643,257);
    glVertex2i(884,257);
    glVertex2i(884,351);
    glVertex2i(643,351);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(73,3,5);
    glBegin(GL_QUADS);
    glVertex2i(640,351);
    glVertex2i(887,351);
    glVertex2i(887,358);
    glVertex2i(640,358);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(80,149,146);
    glBegin(GL_QUADS);
    glVertex2i(648,265);
    glVertex2i(719,265);
    glVertex2i(719,275);
    glVertex2i(648,275);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(80,149,146);
    glBegin(GL_QUADS);
    glVertex2i(808,265);
    glVertex2i(879,265);
    glVertex2i(879,275);
    glVertex2i(808,275);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(217,132,3);
    glBegin(GL_POLYGON);
    glVertex2i(713,358);
    glVertex2i(813,358);
    glVertex2i(813,381);
    glVertex2i(763,402);
    glVertex2i(713,381);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(75,3,4);
    glBegin(GL_TRIANGLES);
    glVertex2i(707,381);
    glVertex2i(819,381);
    glVertex2i(763,409);
    glEnd();
    glPopMatrix();
    glColor3ub(200,200,240);
    drawCircle(762.0f,369.0f,10.0f);
    int SchoolStripe1=623;
    for(int i=2;i>=0;i--)
    {
        SchoolStripe1+=25;
        SchoolWindow1(SchoolStripe1,328);
    }
     int SchoolStripe2=623;
    for(int i=2;i>=0;i--)
    {
        SchoolStripe2+=25;
        SchoolWindow1(SchoolStripe2,304);
    }
    int SchoolStripe3=623;
    for(int i=2;i>=0;i--)
    {
        SchoolStripe3+=25;
        SchoolWindow1(SchoolStripe3,281);
    }
    int SchoolStripe4=783;
    for(int i=2;i>=0;i--)
    {
        SchoolStripe4+=25;
        SchoolWindow1(SchoolStripe4,328);
    }
    int SchoolStripe5=783;
    for(int i=2;i>=0;i--)
    {
        SchoolStripe5+=25;
        SchoolWindow1(SchoolStripe5,304);
    }
    int SchoolStripe6=783;
    for(int i=2;i>=0;i--)
    {
        SchoolStripe6+=25;
        SchoolWindow1(SchoolStripe6,282);
    }
}
void SchoolDoor()
{
    glPushMatrix();
    glColor3ub(72,2,4);
    glBegin(GL_QUADS);
    glVertex2i(728,257);
    glVertex2i(797,257);
    glVertex2i(797,321);
    glVertex2i(728,321);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(75,3,4);
    glBegin(GL_TRIANGLES);
    glVertex2i(722,321);
    glVertex2i(803,321);
    glVertex2i(763,347);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(100,150,100);
    glBegin(GL_QUADS);
    glVertex2i(733,304);
    glVertex2i(792,304);
    glVertex2i(792,321);
    glVertex2i(733,321);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(89,107,121);
    glBegin(GL_QUADS);
    glVertex2i(743,257);
    glVertex2i(782,257);
    glVertex2i(782,295);
    glVertex2i(743,295);
    glEnd();
    glPopMatrix();
}
void HouseFrontTree()
{
     for(float i=0; i<7*132;i+=280)
     {
        glPushMatrix();
        glColor3ub(156,112,63);
        glBegin(GL_QUADS);
        glVertex2i(140+i,256);
        glVertex2i(148+i,256);
        glVertex2i(148+i,285);
        glVertex2i(140+i,285);
        glEnd();
        glPopMatrix();

        glColor3ub(37,90,27);
        drawCircle(144.0f+i,288.0f,10.0f);
        drawCircle(150.0f+i,281.0f,9.0f);
        drawCircle(157.0f+i,286.0f,7.0f);
        drawCircle(146.0f+i,232.0f,12.0f);
        drawCircle(134.0f+i,291.0f,12.0f);
        drawCircle(138.0f+i,300.0f,13.0f);
        drawCircle(144.0f+i,299.0f,7.0f);
        drawCircle(150.0f+i,299.0f,10.0f);
     }
}
float cdxp1=0.0,cdxp2=0.0,cdxp3=0.0;
void Cloud()
{
    glPushMatrix();
    glTranslatef(c1xp+cdxp1,-130,0);
    glColor3ub(230,234,237);
    if(dnr==0 && dng==50 && dnb==59)
        glColor3ub(0,50,59);
    drawCircle(594.0f,586.0f,20.0f);
    drawCircle(572.0f,595.0f,28.0f);
    drawCircle(539.0f,595.0f,35.0f);
    drawCircle(513.0f,575.0f,20.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(c1xp+cdxp2,-120,0);
    drawCircle(393.0f,577.0f,20.0f);
    drawCircle(370.0f,585.0f,28.0f);
    drawCircle(339.0f,583.0f,35.0f);
    drawCircle(311.0f,565.0f,20.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(c1xp+cdxp3,0,0);
    drawCircle(193.0f,607.0f,20.0f);
    drawCircle(170.0f,615.0f,28.0f);
    drawCircle(139.0f,613.0f,35.0f);
    drawCircle(111.0f,595.0f,20.0f);
    glPopMatrix();
    //glutPostRedisplay();
}
void Road()
{
    glPushMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(0,148);
    glVertex2i(1000,148);
    glVertex2i(1000,47);
    glVertex2i(0,47);
    glEnd();
    glPopMatrix();

    for(int i=0;i<120*10;i+=120)
    {
        glPushMatrix();
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2i(0+i,95);
        glVertex2i(35+i,95);
        glVertex2i(35+i,100);
        glVertex2i(0+i,100);
        glEnd();
        glPopMatrix();
    }
}
void RoadCorner1()
{
    for(int i=0;i<16*62;i+=30)
    {
        glPushMatrix();
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2i(0+i,148);
        glVertex2i(16+i,148);
        glVertex2i(16+i,157);
        glVertex2i(0+i,157);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(16+i,148);
        glVertex2i(39+i,148);
        glVertex2i(39+i,157);
        glVertex2i(16+i,157);
        glEnd();
        glPopMatrix();
    }
}
void RoadCorner2()
{
    for(int i=0;i<16*62;i+=30)
    {
        glPushMatrix();
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2i(0+i,148-100);
        glVertex2i(16+i,148-100);
        glVertex2i(16+i,157-100);
        glVertex2i(0+i,157-100);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(16+i,148-100);
        glVertex2i(39+i,148-100);
        glVertex2i(39+i,157-100);
        glVertex2i(16+i,157-100);
        glEnd();
        glPopMatrix();
    }
}
void RoadGrass()
{
    glPushMatrix();
    glColor3ub(100,171,55);
    if(dnr==0 && dng==50 && dnb==59)
      glColor3ub(29,96,17);
    glBegin(GL_QUADS);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(1000.0,0.0,0.0);
    glVertex3f(1000.0,47.0,0.0);
    glVertex3f(0.0,47.0,0.0);
    glEnd();
    glPopMatrix();
}
void BetweenRoadAndBuldings()
{
    glPushMatrix();
    if(dnr==103 && dng==155 && dnb==176)
        glColor3ub(100,171,55);
    else if(dnr==0 && dng==50 && dnb==59)
      glColor3ub(29,96,17);
    glBegin(GL_QUADS);
    glVertex3f(0.0,157.0,0.0);
    glVertex3f(1000.0,157.0,0.0);
    glVertex3f(1000.0,258.0,0.0);
    glVertex3f(0.0,258.0,0.0);
    glEnd();
    glPopMatrix();
}

void Tree()
{
    for(int i=0; i<7*131;i+=130)
    {
        glPushMatrix();
        glColor3ub(37,90,27);
        glBegin(GL_TRIANGLES);
        glVertex2i(24+i,46);
        glVertex2i(67+i,46);
        glVertex2i(46+i,78);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(37,90,27);
        glBegin(GL_TRIANGLES);
        glVertex2i(24+i,40);
        glVertex2i(67+i,40);
        glVertex2i(46+i,72);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(161,89,61);
        glBegin(GL_QUADS);
        glVertex2i(39+i,40);
        glVertex2i(52+i,40);
        glVertex2i(52+i,0);
        glVertex2i(39+i,0);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(37,90,27);
        glBegin(GL_TRIANGLES);
        glVertex2i(24+i,32);
        glVertex2i(67+i,32);
        glVertex2i(46+i,64);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(37,90,27);
        glBegin(GL_TRIANGLES);
        glVertex2i(24+i,24);
        glVertex2i(67+i,24);
        glVertex2i(46+i,56);
        glEnd();
        glPopMatrix();
    }
}
void LampPost()
{
    for(int i=0;i<8*116;i+=115)
    {
        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(34+i,158);
        glVertex2i(51+i,158);
        glVertex2i(51+i,160);
        glVertex2i(34+i,160);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(37+i,160);
        glVertex2i(48+i,160);
        glVertex2i(48+i,162);
        glVertex2i(37+i,162);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(40+i,162);
        glVertex2i(45+i,162);
        glVertex2i(45+i,206);
        glVertex2i(40+i,206);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(38+i,206);
        glVertex2i(48+i,206);
        glVertex2i(48+i,209);
        glVertex2i(38+i,209);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(255,255,255);
        if(dnr==0 && dng==50 && dnb==59)
            glColor3ub(255,244,78);
        drawCircle(43+i,218,9);
        glPopMatrix();
        if(dnr==0 && dng==50 && dnb==59)
        {
            glPushMatrix();
            glColor3ub(255,244,78);
            glBegin(GL_LINES);
            glVertex2i(43+i,218);
            glVertex2i(70+i,225);
            glEnd();

            glColor3ub(255,244,78);
            glBegin(GL_LINES);
            glVertex2i(43+i,218);
            glVertex2i(60+i,245);
            glEnd();

            glColor3ub(255,244,78);
            glBegin(GL_LINES);
            glVertex2i(43+i,218);
            glVertex2i(40+i,245);
            glEnd();

            glColor3ub(255,244,78);
            glBegin(GL_LINES);
            glVertex2i(43+i,218);
            glVertex2i(20+i,240);
            glEnd();

            glColor3ub(255,244,78);
            glBegin(GL_LINES);
            glVertex2i(43+i,218);
            glVertex2i(10+i,225);
            glEnd();

            glColor3ub(255,244,78);
            glBegin(GL_TRIANGLE_FAN);
            glVertex2i(48+i,209);
            glVertex2i(38+i,209);
            glVertex2i(0+i,150);
            glVertex2i(80+i,150);
            glEnd();
            glPopMatrix();
        }
    }
}
void Car1()
{
    glPushMatrix();
    glColor3ub(34,160,160);

    glBegin(GL_QUADS);
    glVertex2i(311-150,112+100);
    glVertex2i(414-150,112+100);
    glVertex2i(414-150,174+100);
    glVertex2i(311-150,174+100);
    glEnd();

    glColor3ub(45,194,198);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(414-150,162+100);
    glVertex2i(445-150,162+100);
    glVertex2i(473-150,134+100);
    glVertex2i(473-150,112+100);
    glVertex2i(414-150,112+100);
    glEnd();

    glColor3ub(75,89,89);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(417-150,158+100);
    glVertex2i(444-150,158+100);
    glVertex2i(463-150,139+100);
    glVertex2i(463-150,134+100);
    glVertex2i(417-150,134+100);
    glEnd();

    glColor3ub(255,0,0);
    glBegin(GL_QUADS);
    glVertex2i(464-150,128+100);
    glVertex2i(472-150,128+100);
    glVertex2i(472-150,113+100);
    glVertex2i(464-150,113+100);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(419-150,126+100);
    glVertex2i(431-150,126+100);
    glVertex2i(431-150,129+100);
    glVertex2i(419-150,129+100);
    glEnd();

    glColor3ub(48,48,46);

    drawCircle(342-150,116+100,15);
    glColor3ub(255,255,255);
    drawCircle(342-150,116+100,10);
    glColor3ub(0,0,0);
    drawCircle(342-150,116+100,8);

    glColor3ub(48,48,46);
    drawCircle(434-150,116+100,15);
    glColor3ub(255,255,255);
    drawCircle(434-150,116+100,10);
    glColor3ub(0,0,0);
    drawCircle(434-150,116+100,8);
}
void Car2()
{
    glPushMatrix();
    glColor3ub(34,160,160);
    glTranslatef(-231,-102,0);
    glTranslatef(c1xp,c1yp,c1zp);
    Car1();
    glPopMatrix();
}
void Car3()
{
    glPushMatrix();
    glTranslatef(c2xp,c2yp,c2zp);
    glColor3ub(234,56,78);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(459+500,154-70);
    glVertex2i(466+500,160-70);
    glVertex2i(491+500,160-70);
    glVertex2i(510+500,179-70);
    glVertex2i(568+500,179-70);
    glVertex2i(579+500,162-70);
    glVertex2i(579+500,141-70);
    glVertex2i(459+500,141-70);
    glEnd();

    glColor3ub(155,186,189);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(503+500,169-70);
    glVertex2i(512+500,177-70);
    glVertex2i(525+500,177-70);
    glVertex2i(521+500,163-70);
    glVertex2i(503+500,163-70);
    glEnd();

    glColor3ub(155,186,189);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(526+500,163-70);
    glVertex2i(530+500,177-70);
    glVertex2i(547+500,177-70);
    glVertex2i(547+500,163-70);
    glEnd();

    glColor3ub(155,186,189);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(552+500,163-70);
    glVertex2i(551+500,177-70);
    glVertex2i(561+500,177-70);
    glVertex2i(570+500,163-70);
    glEnd();

    glColor3ub(51,53,50);
    glPushMatrix();
    glRotatef(360,474+500,142-70,10);

    drawCircle(474+500,142-70,10);
    glColor3ub(255,0,0);
    drawCircle(474+500,142-70,8);
    glColor3ub(0,0,0);
    drawCircle(474+500,142-70,7);
    glColor3f(1,1,1);

    glColor3ub(51,53,50);
    drawCircle(551+500,142-70,10);
    glColor3ub(255,0,0);
    drawCircle(551+500,142-70,8);
    glColor3ub(0,0,0);
    drawCircle(551+500,142-70,7);
    glPopMatrix();
    glPopMatrix();
}
void line()
{
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(c2xp,c2yp,c2zp);
    glLineWidth(0.5);
    if(j==0)
    {
    glBegin(GL_LINES);
    glVertex2f(474+505,142-75);
    glVertex2f(474+495,142-65);

    glEnd();
    }
    else{
    glBegin(GL_LINES);
    glVertex2f(474+505,142-65);
    glVertex2f(474+495,142-75);

    glEnd();
    }
    if(j==0)
        j=1;
    else if(j==1)
        j=0;
        glPopMatrix();

}
void Plane1()
{
    glPushMatrix();
    glTranslatef(p1xp,p1yp,p1zp);
    glScalef(x-p1sxp,x-p1syp,0.0-p1szp);
    glColor3ub(222,231,255);
    glBegin(GL_QUADS);
    glVertex2i(937,440);
    glVertex2i(1010,420);
    glVertex2i(1025,437);
    glVertex2i(956,458);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(1000,407);
    glVertex2i(979,407);
    glVertex2i(966,436);
    glVertex2i(979,433);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(1007,443);
    glVertex2i(1028,469);
    glVertex2i(1032,468);
    glVertex2i(1019,439);
    glEnd();
    int y=0;
    for(int i=0;i<4*15;i+=15)
    {
        glColor3ub(120,55,96);
        drawCircle(960+i,445+y,3);
        y-=4;
    }
    glPopMatrix();
}
void Plane2()
{
    glPushMatrix();
    glTranslatef(c1xp,0.0,0.0);
    glColor3ub(0,78,168);
    glBegin(GL_QUADS);
    glVertex2i(7-200,307+150);
    glVertex2i(76-200,318+150);
    glVertex2i(95-200,312+150);
    glVertex2i(22-200,290+150);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(13-200,305+150);
    glVertex2i(0-200,338+150);
    glVertex2i(4-200,339+150);
    glVertex2i(25-200,313+150);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(32-200,277+150);
    glVertex2i(49-200,301+150);
    glVertex2i(64-200,306+150);
    glVertex2i(37-200,279+150);
    glEnd();
    int j=0;
    for(int i=0;i<5*10;i+=10)
    {
        glColor3ub(249,190-j,0);
        drawCircle(73-i-200,312.5-j+350,2);
        j+=2;
    }
    glPopMatrix();
}
void CarTranslate(int value)
{
    width+=1.0;
    width2-=1.0;
    if(width<10093)
    {
        line();
        cdxp1+=0.09;
        cdxp2+=0.1;
        cdxp3+=0.0001; //CloudsT variable
        c1xp+=0.1;
        if(width>10091)
        {
            width=-940;
            c1xp=0.0;
        }
        if(width==1295)
        {
            cdxp1=0.0;
        }
        cout << "Width: " << width << endl;
    }
    if(width2>-1614)
    {
        c2xp-=0.5;
        p1xp-=0.001;
        p1yp+=0.6;
        if(width2==-1613)
        {
            width2=600;
            c2xp=0;

            p1xp=0;
            p1yp=0;
            p1sxp=0;
            p1syp=0;
            x=1.0;
            glutPostRedisplay();
        }
        if(width2<1200)
        {
            p1sxp+=0.001;
            p1syp+=0.001;
            glutPostRedisplay();
        }
        cout << "Width2: " << p1xp << endl;
    }
    glutTimerFunc(0,CarTranslate,25);
}
void night()
{
       if(dnr==103 && dng==155 && dnb==176)
        Sun();
    else if(dnr==0 && dng==50 && dnb==59)
        Moon();
}
void daynight(){
     if(dnr==103 && dng==155 && dnb==176)
        {
            dnr=0;
            dng=50;
            dnb=59;
        }else if(dnr==0 && dng==50 && dnb==59)
        {
            dnr=103;
            dng=155;
            dnb=176;
        }
}
void earlystage(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
	glColor3f(0.0, 0.204, 1.0);
	Sky();
	night();
    Hill_Small_two();
    Hill_Small_four();
    Hill_Small_three();
    Hill_Big_four();
    Hill_Big_One();
    Hill_Big_five();
    Hill_Big_three();
    Hill_Small_One();
    cloud_one();
    Hill_Big_Two();
    field1();
    forest_1();
    print(30,450,n);
    print(30,430,e);
    glPopMatrix();
    glFlush();
    glutSwapBuffers();
}
void city(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    Sky();
    Home();
    night();
    glColor3ub(252,222,66);
    drawCircle(300.0f,400.0f,40.0f);
    plus1();
    Hospital();
    Hotel();
    Door();
    School();
    SchoolDoor();
    HouseFrontTree();
    Cloud();
    BetweenRoadAndBuldings();
    Road();
    Car1();
    LampPost();
    RoadCorner1();
    RoadCorner2();
    RoadGrass();
    Car2();
    Car3();
    line();
    Plane1();
    Tree();
    print(738,306,"School");
    print(540,410,"Hotel");
    print(276,300,"Hospital");
    print(30,450,b);
    print(30,430,n);
    print(30,410,e);
    Plane2();
    glPopMatrix();
    glFlush ();
    glutSwapBuffers();
}
void displayvillage(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glColor3f(0.0, 0.204, 1.0);
	Sky();
    Hill_Small_two();
    Hill_Small_three();
    Hill_Big_One();
    Hill_Small_One();
    Hill_Big_three();
    night();
    Tree_Two();
    Tree_Four();
    Tree_Five();
    Tree_Six();
    Tree_Seven();
    Tree_Eight();
    Tree_Nine();
    Tree_Ten();
    Tilla_One();
    Tree_Eleven();
    Tree_Twelve();
    Tilla_Two();
    Hill_Big_Two();
    Tilla_Three();
    Tilla_Four();
    house_one();
    cloud_one();
    Tree_One();
    Tree_Three();
    field();
     if(dnr==103 && dng==155 && dnb==176){
    human1();
    human2();
    human3();
    human4();
    sheep1();
    sheep2();}
     print(30,450,n);
    print(30,430,e);
    glPopMatrix();
    glFlush();
    glutSwapBuffers();
}
/**void rotate1()
{
    glPushMatrix();
    for(int r=0;r<=360;r++)
    {

      glRotatef(r,0,1,0);
      Sun();
    }
    glPopMatrix();
}*/
void keyboard(unsigned char key, int x, int y)
{
    if(key=='m')
    {
        CarTranslate(0);
        //rotate1();
        glutPostRedisplay();
    }
    if(key=='s')
        exit(0);
    if(key=='n')
       daynight();
    if(key=='v')
        glutDisplayFunc(displayvillage);
    if(key=='e')
        glutDisplayFunc(earlystage);
    if(key=='c')
        glutDisplayFunc(city);
    glutPostRedisplay();
}
void mouse(int btn,int state,int x,int y)
{
    if(btn==GLUT_RIGHT_BUTTON&&state==GLUT_DOWN)
        daynight();
     glutPostRedisplay();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(1900, 1900);
	glutCreateWindow("URBANIZATION");
	init();
    glutDisplayFunc(frontscreen);
    glutMouseFunc(mouse);
    glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}
