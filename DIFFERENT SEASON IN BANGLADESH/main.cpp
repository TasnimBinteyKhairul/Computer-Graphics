 ///WINTER-195
///RIVER-197
///GROUND-208
///SKY-252
///STARS-265
///SNOW-305
///HILL-1443
///TREE-1612
///LEAF-1637
///FENCE-1689
///HOUSE-1750
///BOAT-2053
///MOON-2157
///CLOUD-2176
///HIGHGWAY-2453
///CAR-2542

///RAINY-2640///
///RIVER-2645
///SHIP-2654
///GROUND-2761
///SKY-2803
///HILL-2816
///TREE-2985
///LEAF-3013
///FENCE-3065
///HOUSE-3126
///GRASS-3430
///WALKING ROAD-3511
///BOAT-3546
///SUN-3654
///CLOUD-3670
///BIRD-3999
///HIGHWAY-4059
///CAR-4147
///RAIN-4241

///SUMMER-5352///
///RIVER-5357
///SHIP-5366
///GROUND-5473
///SKY-5514
///HILL-5527
///TREE-5696
///LEAF-5721
///FENCE-5775
///HOUSE-5836
///GRASS-6139
///BOAT-6254
///SUN-6360
///CLOUD-6376
///BIRD-6707
///HIGHWAY-6772
///CAR-6861
///SOUND-6959<sound-press d,sound03-press r,sound02-press w>
///main function-7008

#include<cstdio>
#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat i = 0.0f;
GLfloat j = 0.0f;
GLfloat k = 0.0f;
GLfloat l = 0.0f;
GLfloat position = 0.0f;
GLfloat speed = 0.1f;
void update(int value) {
    if(position >4.0)
        position =-0.0f;
    position += speed;
    glutPostRedisplay();
    glutTimerFunc(200, update, 0);
}
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.1f;
void update1(int value) {
    if(position1 <-4.0)
        position1 =0.0f;
    position1 -= speed1;
    glutPostRedisplay();
    glutTimerFunc(200, update1, 0);
}
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.07f;
void update2(int value) {
    if(position2 >4.0)
        position2 =-0.0f;
    position2 += speed2;
    glutPostRedisplay();
    glutTimerFunc(200, update2, 0);
}
GLfloat position3 = 0.0f;
GLfloat speed3 = 0.01f;
void update3(int value) {
    if(position3 >0.5)
        position3 =-0.0f;
    position3 += speed3;
    glutPostRedisplay();
    glutTimerFunc(200, update3, 0);
}
GLfloat position4 = 0.0f;
GLfloat speed4 = 0.1f;
void update4(int value) {
    if(position4 >4.0)
        position4 =-0.0f;
    position4 += speed4;
    glutPostRedisplay();
    glutTimerFunc(200, update4, 0);
}
GLfloat position5 = 0.0f;
GLfloat speed5 = 0.1f;
void update5(int value) {
    if(position5 >4.0)
        position5 =-0.0f;
    position5 += speed5;
    glutPostRedisplay();
    glutTimerFunc(200, update5, 0);
}

GLfloat position6 = 0.0f;
GLfloat speed6 = 0.03f;
void update6(int value) {
    if(position6 <-3.0)
        position6 =0.0f;

    position6 -= speed6;
    glutPostRedisplay();
    glutTimerFunc(200, update6, 0);
}
GLfloat position7 = 0.0f;
GLfloat speed7 = 0.03f;
void update7(int value) {
    if(position7 <-3.70)
        position7 =0.0f;
    position7 -= speed5;
    glutPostRedisplay();
    glutTimerFunc(200, update7, 0);
}

GLfloat position8 = 0.8f;
GLfloat speed8 = 0.1f;
void update8(int value) {
    if(position8 >0.3)
        position8 =-0.0f;
    position8 += speed8;
    glutPostRedisplay();
    glutTimerFunc(200, update8, 0);
}

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void Idle1()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void Idle2()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void Idle3()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void Idle4()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void Idle5()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void Idle6()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void Idle7()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void Idle8()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void initGL() {

    glClearColor(0.0f, 0.0f, 0.0f, 0.01f);
}

///***WINTER///***
void display5()
{
///River///
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3ub(51, 102, 255);

    glBegin(GL_QUADS);
    glVertex2f(-2.0f, 0.80f);
    glVertex2f(2.0f, 0.80f);
    glVertex2f(2.0f, -2.0f);
    glVertex2f(-2.0f, -2.0f);
    glEnd();

///GROUND01///
    glBegin(GL_POLYGON);
	glColor3f(255, 255, 255);

	glVertex2f(-0.7f,  -0.0f);
	glVertex2f(-2.0f,  -0.0f);
    glVertex2f(-2.0f,  -2.0f);
    glVertex2f(-0.7f,  -2.0f);
    glVertex2f(-0.5f,  -2.0f);
    glVertex2f(-0.28f,  -1.8f);
    glVertex2f(-0.7f,  -1.6f);
    glVertex2f(-0.7f,  -1.75f);
    glVertex2f(-0.3f,  -1.4f);
    glVertex2f(-0.3f,  -1.18f);
    glVertex2f(-0.7f,  -1.0f);
    glVertex2f(-0.7f,  -1.17f);
    glVertex2f(-0.24f,  -0.97f);
    glVertex2f(-0.7f,  -0.6f);
    glVertex2f(-0.7f,  -0.8f);
    glVertex2f(-0.38f,  -0.65f);
    glVertex2f(-0.7f,  -0.44f);
    glVertex2f(-0.7f,  -0.6f);
    glVertex2f(-0.3f,  -0.4f);
    glEnd();

///GROUND02///
    glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);

	glVertex2f(1.0f,  -0.6f);
	glVertex2f(2.0f,  -0.6f);
    glVertex2f(2.0f,  -2.0f);
    glVertex2f(1.0f,  -2.0f);
    glVertex2f(0.7f,  -2.0f);
    glVertex2f(0.7f,  -1.68f);
    glVertex2f(1.0f,  -1.9f);
    glVertex2f(1.0f,  -1.52f);
    glVertex2f(0.75f,  -1.3f);
    glVertex2f(1.0f,  -1.0f);
    glVertex2f(1.0f,  -1.1f);
    glVertex2f(0.7f,  -0.93f);
    glVertex2f(0.7f,  -0.8f);
    glEnd();

///SKY////
    glBegin(GL_POLYGON);
	glColor3ub(26, 26, 26);
	glVertex2f(0.0f, 0.8f);
	glVertex2f(2.0f,  0.8f);
	glVertex2f(2.0f,  2.0f);
	glVertex2f(0.0f, 2.0f);
    glVertex2f(-0.0f, 0.8f);
	glVertex2f(-2.0f,  0.8f);
	glVertex2f(-2.0f,  2.0f);
	glVertex2f(-0.0f, 2.0f);
    glEnd();

///STARS///
	glPointSize(3);
    glBegin(GL_POINTS);
	glColor3ub(255,255,255);
    glVertex2f(-1.7f, 1.8f);
    glVertex2f(-1.8f, 1.7f);
    glVertex2f(-1.9f, 1.9f);
    glVertex2f(-1.6f, 1.8f);
    glVertex2f(-1.5f, 1.9f);
    glVertex2f(-1.2f, 1.8f);
    glVertex2f(-1.3f, 1.6f);
    glVertex2f(-1.1f, 1.9f);
    glVertex2f(-1.0f, 1.8f);
    glVertex2f(1.1f,  1.8f);
    glVertex2f(1.2,   1.8f);
    glVertex2f(1.3f, 1.5f);
    glVertex2f(1.4f, 1.9f);
    glVertex2f(1.5f, 1.0f);
    glVertex2f(1.6f, 1.9f);
    glVertex2f(1.7f, 1.9f);
    glVertex2f(1.8f, 1.8f);
    glVertex2f(-0.7f, 1.8f);
    glVertex2f(-0.8f, 1.7f);
    glVertex2f(-0.9f, 1.9f);
    glVertex2f(-0.6f, 1.8f);
    glVertex2f(-0.5f, 1.9f);
    glVertex2f(-0.2f, 1.8f);
    glVertex2f(-0.3f, 1.6f);
    glVertex2f(-0.1f, 1.9f);
    glVertex2f(-0.0f, 1.8f);
    glVertex2f(0.1f,  1.8f);
    glVertex2f(0.2,   1.8f);
    glVertex2f(0.3f, 1.5f);
    glVertex2f(0.4f, 1.9f);
    glVertex2f(0.5f, 1.0f);
    glVertex2f(0.6f, 1.9f);
    glVertex2f(0.7f, 1.9f);
    glVertex2f(0.8f, 1.8f);
    glEnd();

///SNOW
     glPushMatrix();
    glTranslatef(0.0,position8,0.0);
    glPointSize(3);
    glBegin(GL_POINTS);
	glColor3ub(255,255,255);
	glVertex2f(-.0,1.9);
	glVertex2f(-.0,1.85);
	//glVertex2f(-.0,1.65);
	glVertex2f(-.0,1.60);
	glVertex2f(-.0,1.35);
	//glVertex2f(-.0,1.30);
	glVertex2f(-.0, 10);
	glVertex2f(-.0,.95);
	//glVertex2f(-.0,.70);
	glVertex2f(-.0,.65);
	glVertex2f(-.0,.45);
	//glVertex2f(-.0,.40);
	glVertex2f(-.0,.10);
	glVertex2f(-.0,.05);
	//glVertex2f(-.1,2.0);
	glVertex2f(-.1,1.95);
	glVertex2f(-.1,1.70);
	//glVertex2f(-.1,1.65);
	glVertex2f(-.1,1.40);
	glVertex2f(-.1,1.35);
	//glVertex2f(-.1,1.15);
	glVertex2f(-.1, 10);
	glVertex2f(-.1,.80);
	//glVertex2f(-.1,.75);
	glVertex2f(-.1,.50);
	glVertex2f(-.1,.45);
	//glVertex2f(-.1,.20);
	glVertex2f(-.1,.15);
    glVertex2f(-.2,1.90);
	//glVertex2f(-.2,1.85);
	glVertex2f(-.2,1.60);
	glVertex2f(-.2,1.55);
	//glVertex2f(-.2,1.35);
	glVertex2f(-.2,1.30);
	glVertex2f(-.2, 1.0);
	//glVertex2f(-.2,.95);
	glVertex2f(-.2,.70);
	glVertex2f(-.2,.65);
	//glVertex2f(-.2,.40);
	glVertex2f(-.2,.35);
	glVertex2f(-.2,.10);
	//glVertex2f(-.2,.05);
    glVertex2f(-.3,2.0);
	glVertex2f(-.3,1.95);
	//glVertex2f(-.3,1.70);
	glVertex2f(-.3,1.65);
	glVertex2f(-.3,1.40);
	//glVertex2f(-.3,1.35);
	glVertex2f(-.3,1.05);
	glVertex2f(-.3, 1.0);
	//glVertex2f(-.3,.80);
	glVertex2f(-.3,.75);
	glVertex2f(-.3,.50);
	//glVertex2f(-.3,.45);
	glVertex2f(-.3,.20);
	glVertex2f(-.3,.15);
    //glVertex2f(-.4,1.95);
	glVertex2f(-.4,1.90);
	glVertex2f(-.4,1.60);
	//glVertex2f(-.4,1.55);
	glVertex2f(-.4,1.30);
	glVertex2f(-.4,1.25);
	//glVertex2f(-.4, 1.0);
	glVertex2f(-.4,.95);
	glVertex2f(-.4,.70);
	//glVertex2f(-.4,.65);
	glVertex2f(-.4,.40);
	glVertex2f(-.4,.35);
	//glVertex2f(-.4,.10);
	glVertex2f(-.4,.05);
    glVertex2f(-.5,2);
	//glVertex2f(-.5,1.95);
	glVertex2f(-.5,1.90);
	glVertex2f(-.5,1.60);
	//glVertex2f(-.5,1.55);
	glVertex2f(-.5,1.30);
	glVertex2f(-.5,1.25);
	//glVertex2f(-.5, 1.0);
	glVertex2f(-.5,.95);
	glVertex2f(-.5,.70);
	//glVertex2f(-.5,.65);
	glVertex2f(-.5,.40);
	glVertex2f(-.5,.35);
	//glVertex2f(-.5,.10);
	glVertex2f(-.5,.05);
    glVertex2f(-.6,2);
	//glVertex2f(-.6,1.95);
	glVertex2f(-.6,1.90);
	glVertex2f(-.6,1.60);
	//glVertex2f(-.6,1.55);
	glVertex2f(-.6,1.30);
	glVertex2f(-.6,1.25);
	//glVertex2f(-.6, 1.0);
	glVertex2f(-.6,.95);
	glVertex2f(-.6,.70);
	//glVertex2f(-.6,.65);
	glVertex2f(-.6,.40);
	glVertex2f(-.6,.35);
	//glVertex2f(-.6,.10);
	glVertex2f(-.6,.05);
    glVertex2f(-.7,2);
	//glVertex2f(-.7,1.95);
	glVertex2f(-.7,1.90);
	glVertex2f(-.7,1.60);
	//glVertex2f(-.7,1.55);
	glVertex2f(-.7,1.30);
	glVertex2f(-.7,1.25);
	//glVertex2f(-.7, 1.0);
	glVertex2f(-.7,.95);
	glVertex2f(-.7,.70);
	//glVertex2f(-.7,.65);
	glVertex2f(-.7,.40);
	glVertex2f(-.7,.35);
	//glVertex2f(-.7,.10);
	glVertex2f(-.7,.05);
    glVertex2f(-.8,2);
	//glVertex2f(-.8,1.95);
	glVertex2f(-.8,1.90);
	glVertex2f(-.8,1.60);
	//glVertex2f(-.8,1.55);
	glVertex2f(-.8,1.30);
	glVertex2f(-.8,1.25);
	//glVertex2f(-.8, 1.0);
	glVertex2f(-.8,.95);
	glVertex2f(-.8,.70);
	//glVertex2f(-.8,.65);
	glVertex2f(-.8,.40);
	glVertex2f(-.8,.35);
	//glVertex2f(-.8,.10);
	glVertex2f(-.8,.05);
    glVertex2f(-.5,2);
	//glVertex2f(-.9,1.95);
	glVertex2f(-.9,1.90);
	glVertex2f(-.9,1.60);
	//glVertex2f(-.9,1.55);
	glVertex2f(-.9,1.30);
	glVertex2f(-.9,1.25);
	//glVertex2f(-.9, 1.0);
	glVertex2f(-.9,.95);
	glVertex2f(-.9,.70);
	glVertex2f(-.9,.65);
	//glVertex2f(-.9,.40);
	glVertex2f(-.9,.35);
	glVertex2f(-.9,.10);
	//glVertex2f(-.9,.05);
    glVertex2f(-1,2);
	glVertex2f(-1,1.95);
	//glVertex2f(-1,1.90);
	glVertex2f(-1,1.60);
	glVertex2f(-1,1.55);
	//glVertex2f(-1,1.30);
	glVertex2f(-1,1.25);
	glVertex2f(-1, 1.0);
	//glVertex2f(-1,.95);
	glVertex2f(-1,.70);
	glVertex2f(-1,.65);
	//glVertex2f(-1,.40);
	glVertex2f(-1,.35);
	glVertex2f(-1,.10);
	//glVertex2f(-1,.05);
    glVertex2f(-.5,2);
	glVertex2f(-1.1,1.95);
	//glVertex2f(-1.1,1.90);
	glVertex2f(-1.1,1.60);
	glVertex2f(-1.1,1.55);
	//glVertex2f(-1.1,1.30);
	glVertex2f(-1.1,1.25);
	glVertex2f(-1.1, 1.0);
	//glVertex2f(-1.1,.95);
	glVertex2f(-1.1,.70);
	glVertex2f(-1.1,.65);
	//glVertex2f(-1.1,.40);
	glVertex2f(-1.1,.35);
	glVertex2f(-1.1,.10);
	//glVertex2f(-1.1,.05);
    glVertex2f(-1.2,2);
	glVertex2f(-1.2,1.95);
	//glVertex2f(-1.2,1.90);
	glVertex2f(-1.2,1.60);
	glVertex2f(-1.2,1.55);
	//glVertex2f(-1.2,1.30);
	glVertex2f(-1.2,1.25);
	glVertex2f(-1.2, 1.0);
	//glVertex2f(-1.2,.95);
	glVertex2f(-1.2,.70);
	glVertex2f(-1.2,.65);
	//glVertex2f(-1.2,.40);
	glVertex2f(-1.2,.35);
	glVertex2f(-1.2,.10);
	//glVertex2f(-1.2,.05);
    glVertex2f(-1.3,2);
	glVertex2f(-1.3,1.95);
	//glVertex2f(-1.3,1.90);
	glVertex2f(-1.3,1.60);
	glVertex2f(-1.3,1.55);
	//glVertex2f(-1.3,1.30);
	glVertex2f(-1.3,1.25);
	glVertex2f(-1.3, 1.0);
	//glVertex2f(-1.3,.95);
	glVertex2f(-1.3,.70);
	glVertex2f(-1.3,.65);
	//glVertex2f(-1.3,.40);
	glVertex2f(-1.3,.35);
	glVertex2f(-1.3,.10);
	//glVertex2f(-1.3,.05);
    glVertex2f(-1.4,2);
	glVertex2f(-1.4,1.95);
	//glVertex2f(-1.4,1.90);
	glVertex2f(-1.4,1.60);
	glVertex2f(-1.4,1.55);
	//glVertex2f(-1.4,1.30);
	glVertex2f(-1.4,1.25);
	glVertex2f(-1.4, 1.0);
	//glVertex2f(-1.4,.95);
	glVertex2f(-1.4,.70);
	glVertex2f(-1.4,.65);
	//glVertex2f(-1.4,.40);
	glVertex2f(-1.4,.35);
	glVertex2f(-1.4,.10);
	//glVertex2f(-1.4,.05);
    glVertex2f(-1.5,2);
	glVertex2f(-1.5,1.95);
	//glVertex2f(-1.5,1.90);
	glVertex2f(-1.5,1.60);
	glVertex2f(-1.5,1.55);
	//glVertex2f(-1.5,1.30);
	glVertex2f(-1.5,1.25);
	glVertex2f(-1.5, 1.0);
	//glVertex2f(-1.5,.95);
	glVertex2f(-1.5,.70);
	glVertex2f(-1.5,.65);
	//glVertex2f(-1.5,.40);
	glVertex2f(-1.5,.35);
	glVertex2f(-1.5,.10);
	//glVertex2f(-1.5,.05);
    glVertex2f(-1.6,2);
	glVertex2f(-1.6,1.95);
	//glVertex2f(-1.6,1.90);
	glVertex2f(-1.6,1.60);
	glVertex2f(-1.6,1.55);
	//glVertex2f(-1.6,1.30);
	glVertex2f(-1.6,1.25);
	glVertex2f(-1.6, 1.0);
	//glVertex2f(-1.6,.95);
	glVertex2f(-1.6,.70);
	glVertex2f(-1.6,.65);
	//glVertex2f(-1.6,.40);
	glVertex2f(-1.6,.35);
	glVertex2f(-1.6,.10);
	//glVertex2f(-1.6,.05);
    glVertex2f(-1.7,2);
	glVertex2f(-1.7,1.95);
	//glVertex2f(-1.7,1.90);
	glVertex2f(-1.7,1.60);
	glVertex2f(-1.7,1.55);
	//glVertex2f(-1.7,1.30);
	glVertex2f(-1.7,1.25);
	glVertex2f(-1.7, 1.0);
	//glVertex2f(-1.7,.95);
	glVertex2f(-1.7,.70);
	glVertex2f(-1.7,.65);
	//glVertex2f(-1.7,.40);
	glVertex2f(-1.7,.35);
	glVertex2f(-1.7,.10);
	//glVertex2f(-1.7,.05);
    glVertex2f(-1.8,2);
	glVertex2f(-1.8,1.95);
	//glVertex2f(-1.8,1.90);
	glVertex2f(-1.8,1.60);
	glVertex2f(-1.8,1.55);
	//glVertex2f(-1.8,1.30);
	glVertex2f(-1.8,1.25);
	glVertex2f(-1.8, 1.0);
	//glVertex2f(-1.8,.95);
	glVertex2f(-1.8,.70);
	glVertex2f(-1.8,.65);
	//glVertex2f(-1.8,.40);
	glVertex2f(-1.8,.35);
	glVertex2f(-1.8,.10);
	//glVertex2f(-1.8,.05);
    glVertex2f(-1.9,2);
	glVertex2f(-1.9,1.95);
	//glVertex2f(-1.9,1.90);
	glVertex2f(-1.9,1.60);
	glVertex2f(-1.9,1.55);
	//glVertex2f(-1.9,1.30);
	glVertex2f(-1.9,1.25);
	glVertex2f(-1.9, 1.0);
	//glVertex2f(-1.9,.95);
	glVertex2f(-1.9,.70);
	glVertex2f(-1.9,.65);
	//glVertex2f(-1.9,.40);
	glVertex2f(-1.9,.35);
	glVertex2f(-1.9,.10);
	//glVertex2f(-1.9,.05);
    glVertex2f(.1,2);
	glVertex2f(.1,1.95);
	//glVertex2f(.1,1.90);
	glVertex2f(.1,1.60);
	glVertex2f(.1,1.55);
	//glVertex2f(.1,1.30);
	glVertex2f(.1,1.25);
	glVertex2f(.1, 1.0);
	//glVertex2f(.1,.95);
	glVertex2f(.1,.70);
	glVertex2f(.1,.65);
	//glVertex2f(.1,.40);
	glVertex2f(.1,.35);
	glVertex2f(.1,.10);
	//glVertex2f(.1,.05);
    glVertex2f(.2,2);
	glVertex2f(.2,1.95);
	//glVertex2f(.2,1.90);
	glVertex2f(.2,1.60);
	glVertex2f(.2,1.55);
	//glVertex2f(.2,1.30);
	glVertex2f(.2,1.25);
	glVertex2f(.2, 1.0);
	//glVertex2f(.2,.95);
	glVertex2f(.2,.70);
	glVertex2f(.2,.65);
	//glVertex2f(.2,.40);
	glVertex2f(.2,.35);
	glVertex2f(.2,.10);
	//glVertex2f(.2,.05);
    glVertex2f(.3,2);
	glVertex2f(.3,1.95);
	//glVertex2f(.3,1.90);
	glVertex2f(.3,1.60);
	glVertex2f(.3,1.55);
	//glVertex2f(.3,1.30);
	glVertex2f(.3,1.25);
	glVertex2f(.3, 1.0);
	//glVertex2f(.3,.95);
	glVertex2f(.3,.70);
	glVertex2f(.3,.65);
	//glVertex2f(.3,.40);
	glVertex2f(.3,.35);
	glVertex2f(.3,.10);
	//glVertex2f(.3,.05);
    glVertex2f(.4,2);
	glVertex2f(.4,1.95);
	//glVertex2f(.4,1.90);
	glVertex2f(.4,1.60);
	glVertex2f(.4,1.55);
	//glVertex2f(.4,1.30);
	glVertex2f(.4,1.25);
	glVertex2f(.4, 1.0);
	//glVertex2f(.4,.95);
	glVertex2f(.4,.70);
	glVertex2f(.4,.65);
	//glVertex2f(.4,.40);
	glVertex2f(.4,.35);
	glVertex2f(.4,.10);
	//glVertex2f(.4,.05);
    glVertex2f(.5,2);
	glVertex2f(.5,1.95);
	//glVertex2f(.5,1.90);
	glVertex2f(.5,1.60);
	glVertex2f(.5,1.55);
	//glVertex2f(.5,1.30);
	glVertex2f(.5,1.25);
	glVertex2f(.5, 1.0);
	//glVertex2f(.5,.95);
	glVertex2f(.5,.70);
	glVertex2f(.5,.65);
    //glVertex2f(.5,.40);
	glVertex2f(.5,.35);
	glVertex2f(.5,.10);
	//glVertex2f(.5,.05);
    glVertex2f(.6,2);
	glVertex2f(.6,1.95);
	//glVertex2f(.6,1.90);
	glVertex2f(.6,1.60);
	glVertex2f(.6,1.55);
	//glVertex2f(.6,1.30);
	glVertex2f(.6,1.25);
	glVertex2f(.6, 1.0);
	//glVertex2f(.6,.95);
	glVertex2f(.6,.70);
	glVertex2f(.6,.65);
	//glVertex2f(.6,.40);
	glVertex2f(.6,.35);
	glVertex2f(.6,.10);
	//glVertex2f(.6,.05);
     glVertex2f(.7,2);
	glVertex2f(.7,1.95);
	//glVertex2f(.7,1.90);
	glVertex2f(.7,1.60);
	glVertex2f(.7,1.55);
	//glVertex2f(.7,1.30);
	glVertex2f(.7,1.25);
	glVertex2f(.7, 1.0);
	//glVertex2f(.7,.95);
	glVertex2f(.7,.70);
	glVertex2f(.7,.65);
	//glVertex2f(.7,.40);
	glVertex2f(.7,.35);
	glVertex2f(.7,.10);
	//glVertex2f(.7,.05);
    glVertex2f(.8,2);
	glVertex2f(.8,1.95);
	//glVertex2f(.8,1.90);
	glVertex2f(.8,1.60);
	glVertex2f(.8,1.55);
	//glVertex2f(.8,1.30);
	glVertex2f(.8,1.25);
	glVertex2f(.8, 1.0);
	//glVertex2f(.8,.95);
	glVertex2f(.8,.70);
	glVertex2f(.8,.65);
	//glVertex2f(.8,.40);
	glVertex2f(.8,.35);
	glVertex2f(.8,.10);
	//glVertex2f(.8,.05);
    glVertex2f(.9,2);
	glVertex2f(.9,1.95);
	//glVertex2f(.9,1.90);
	glVertex2f(.9,1.60);
	glVertex2f(.9,1.55);
	//glVertex2f(.9,1.30);
	glVertex2f(.9,1.25);
	glVertex2f(.9, 1.0);
	//glVertex2f(.9,.95);
	glVertex2f(.9,.70);
	glVertex2f(.9,.65);
	//glVertex2f(.9,.40);
	glVertex2f(.9,.35);
	glVertex2f(.9,.10);
	//glVertex2f(.9,.05);
    glVertex2f(1.0,2);
	glVertex2f(1.0,1.95);
	//glVertex2f(1.0,1.90);
	glVertex2f(1.0,1.60);
	glVertex2f(1.0,1.55);
	//glVertex2f(1.0,1.30);
	glVertex2f(1.0,1.25);
	glVertex2f(1.0, 1.0);
	//glVertex2f(1.0,.95);
	glVertex2f(1.0,.70);
	glVertex2f(1.0,.65);
	//glVertex2f(1.0,.40);
	glVertex2f(1.0,.35);
	glVertex2f(1.0,.10);
	//glVertex2f(1.0,.05);
   glVertex2f(1.1,2);
	glVertex2f(1.1,1.95);
	//glVertex2f(1.1,1.90);
	glVertex2f(1.1,1.60);
	glVertex2f(1.1,1.55);
	//glVertex2f(1.1,1.30);
	glVertex2f(1.1,1.25);
	glVertex2f(1.1, 1.0);
	//glVertex2f(1.1,.95);
	glVertex2f(1.1,.70);
	glVertex2f(1.1,.65);
	//glVertex2f(1.1,.40);
	glVertex2f(1.1,.35);
	glVertex2f(1.1,.10);
	//glVertex2f(1.1,.05);
    glVertex2f(1.2,2);
	glVertex2f(1.2,1.95);
	//glVertex2f(1.2,1.90);
	glVertex2f(1.2,1.60);
	glVertex2f(1.2,1.55);
	//glVertex2f(1.2,1.30);
	glVertex2f(1.2,1.25);
	glVertex2f(1.2, 1.0);
	//glVertex2f(1.2,.95);
	glVertex2f(1.2,.70);
	glVertex2f(1.2,.65);
	//glVertex2f(1.2,.40);
	glVertex2f(1.2,.35);
	glVertex2f(1.2,.10);
	//glVertex2f(1.2,.05);
    glVertex2f(1.3,2);
	glVertex2f(1.3,1.95);
	//glVertex2f(1.3,1.90);
	glVertex2f(1.3,1.60);
	glVertex2f(1.3,1.55);
	//glVertex2f(1.3,1.30);
	glVertex2f(1.3,1.25);
	glVertex2f(1.3, 1.0);
	//glVertex2f(1.3,.95);
	glVertex2f(1.3,.70);
	glVertex2f(1.3,.65);
	//glVertex2f(1.3,.40);
	glVertex2f(1.3,.35);
	glVertex2f(1.3,.10);
	//glVertex2f(1.3,.05);
	glVertex2f(1.4,2);
	glVertex2f(1.4,1.95);
	//glVertex2f(1.4,1.90);
	glVertex2f(1.4,1.60);
	glVertex2f(1.4,1.55);
	//glVertex2f(1.4,1.30);
	glVertex2f(1.4,1.25);
	glVertex2f(1.4, 1.0);
	//glVertex2f(1.4,.95);
	glVertex2f(1.4,.70);
	glVertex2f(1.4,.65);
	//glVertex2f(1.4,.40);
	glVertex2f(1.4,.35);
	glVertex2f(1.4,.10);
	//glVertex2f(1.4,.05);
    glVertex2f(1.5,2);
	glVertex2f(1.5,1.95);
  //glVertex2f(1.5,1.90);
	glVertex2f(1.5,1.60);
	glVertex2f(1.5,1.55);
	//glVertex2f(1.5,1.30);
	glVertex2f(1.5,1.25);
	glVertex2f(1.5, 1.0);
	//glVertex2f(1.5,.95);
	glVertex2f(1.5,.70);
	glVertex2f(1.5,.65);
	//glVertex2f(1.5,.40);
	glVertex2f(1.5,.35);
	glVertex2f(1.5,.10);
	//glVertex2f(1.5,.05);
    glVertex2f(1.6,2);
	glVertex2f(1.6,1.95);
	//glVertex2f(1.6,1.90);
	glVertex2f(1.6,1.60);
	glVertex2f(1.6,1.55);
	//glVertex2f(1.6,1.30);
	glVertex2f(1.6,1.25);
	glVertex2f(1.6, 1.0);
	//glVertex2f(1.6,.95);
	glVertex2f(1.6,.70);
	glVertex2f(1.6,.65);
	//glVertex2f(1.6,.40);
	glVertex2f(1.6,.35);
	glVertex2f(1.6,.10);
	//glVertex2f(1.6,.05);
    glVertex2f(1.7,2);
	glVertex2f(1.7,1.95);
	//glVertex2f(1.7,1.90);
	glVertex2f(1.7,1.60);
	//glVertex2f(1.7,1.55);
	glVertex2f(1.7,1.30);
	//glVertex2f(1.7,1.25);
	glVertex2f(1.7, 1.0);
	glVertex2f(1.7,.95);
	//glVertex2f(1.7,.70);
	glVertex2f(1.7,.65);
	//glVertex2f(1.7,.40);
	glVertex2f(1.7,.35);
	//glVertex2f(1.7,.10);
	glVertex2f(1.7,.05);
    glVertex2f(1.8,2);
	//glVertex2f(1.8,1.95);
	glVertex2f(1.8,1.90);
	glVertex2f(1.8,1.60);
	//glVertex2f(1.8,1.55);
	glVertex2f(1.8,1.30);
	glVertex2f(1.8,1.25);
	//glVertex2f(1.8, 1.0);
	glVertex2f(1.8,.95);
	//glVertex2f(1.8,.70);
	glVertex2f(1.8,.65);
	//glVertex2f(1.8,.40);
	glVertex2f(1.8,.35);
	//glVertex2f(1.8,.10);
	glVertex2f(1.8,.05);
    glVertex2f(1.9,2);
	//glVertex2f(1.9,1.95);
	glVertex2f(1.9,1.90);
	glVertex2f(1.9,1.60);
	//glVertex2f(1.9,1.55);
	glVertex2f(1.9,1.30);
	glVertex2f(1.9,1.25);
	//glVertex2f(1.9, 1.0);
	glVertex2f(1.9,.95);
	//glVertex2f(1.9,.70);
	glVertex2f(1.9,.65);
	//glVertex2f(1.9,.40);
	glVertex2f(1.9,.35);
	glVertex2f(1.9,.10);
	//glVertex2f(1.9,.05);
    glVertex2f(-.0,-2);
    //glVertex2f(-.0,-1.9);
	glVertex2f(-.0,-1.8);
	//glVertex2f(-.0,-1.6);
	glVertex2f(-.0,-1.5);
	glVertex2f(-.0,-1.3);
	//glVertex2f(-.0,-1.2);
	glVertex2f(-.0, -1);
	//glVertex2f(-.0,-.9);
	glVertex2f(-.0,-.7);
	//glVertex2f(-.0,-.6);
	glVertex2f(-.0,-.4);
	//glVertex2f(-.0,-.3);
	glVertex2f(-.0,-.1);
    //glVertex2f(-.1,-1.9);
	glVertex2f(-.1,-1.7);
	//glVertex2f(-.1,-1.6);
	glVertex2f(-.1,-1.4);
	//glVertex2f(-.1,-1.3);
	glVertex2f(-.1,-1.1);
	//glVertex2f(-.1, -1);
	//glVertex2f(-.1,-.8);
	glVertex2f(-.1,-.7);
	//glVertex2f(-.1,-.5);
	glVertex2f(-.1,-.4);
	//glVertex2f(-.1,-.2);
	glVertex2f(-.1,-.1);
	//glVertex2f(-.1,-.0);
    glVertex2f(-.2,-2);
	glVertex2f(-.2,-1.9);
	//glVertex2f(-.2,-1.8);
	glVertex2f(-.2,-1.6);
	//glVertex2f(-.2,-1.5);
	glVertex2f(-.2,-1.3);
	//glVertex2f(-.2,-1.2);
	glVertex2f(-.2, -1);
	//glVertex2f(-.2,-.9);
	glVertex2f(-.2,-.7);
	//glVertex2f(-.2,-.6);
	glVertex2f(-.2,-.4);
	glVertex2f(-.2,-.3);
	//glVertex2f(-.2,-.1);
    glVertex2f(-.3,-1.9);
	glVertex2f(-.3,-1.7);
	//glVertex2f(-.3,-1.6);
	glVertex2f(-.3,-1.4);
	glVertex2f(-.3,-1.3);
	//glVertex2f(-.3,-1.1);
	glVertex2f(-.3, -1);
	glVertex2f(-.3,-.8);
	//glVertex2f(-.3,-.7);
	glVertex2f(-.3,-.5);
	glVertex2f(-.3,-.4);
	//glVertex2f(-.3,-.2);
	glVertex2f(-.3,-.1);
	glVertex2f(-.3,-.0);
    glVertex2f(-.4,-2);
	//glVertex2f(-.4,-1.9);
	glVertex2f(-.4,-1.8);
	glVertex2f(-.4,-1.6);
	//glVertex2f(-.4,-1.5);
	glVertex2f(-.4,-1.3);
	glVertex2f(-.4,-1.2);
	//glVertex2f(-.4, -1);
	glVertex2f(-.4,-.9);
	glVertex2f(-.4,-.7);
	//glVertex2f(-.4,-.6);
	glVertex2f(-.4,-.4);
	glVertex2f(-.4,-.3);
	//glVertex2f(-.4,-.1);
    glVertex2f(-.5,-1.9);
	glVertex2f(-.5,-1.7);
	//glVertex2f(-.5,-1.6);
	glVertex2f(-.5,-1.4);
	//glVertex2f(-.5,-1.3);
	glVertex2f(-.5,-1.1);
	//glVertex2f(-.5, -1);
	glVertex2f(-.5,-.8);
	//glVertex2f(-.5,-.7);
	glVertex2f(-.5,-.5);
	//glVertex2f(-.5,-.4);
	glVertex2f(-.5,-.2);
	//glVertex2f(-.5,-.1);
	glVertex2f(-.5,-.0);
    //glVertex2f(-.6,-2);
	glVertex2f(-.6,-1.9);
	//glVertex2f(-.6,-1.8);
	glVertex2f(-.6,-1.6);
	//glVertex2f(-.6,-1.5);
	glVertex2f(-.6,-1.3);
	//glVertex2f(-.6,-1.2);
	glVertex2f(-.6, -1);
	//glVertex2f(-.6,-.9);
	glVertex2f(-.6,-.7);
	glVertex2f(-.6,-.6);
	//glVertex2f(-.6,-.4);
	glVertex2f(-.6,-.3);
	//glVertex2f(-.6,-.1);
    glVertex2f(-.7,-1.9);
	//glVertex2f(-.7,-1.7);
	glVertex2f(-.7,-1.6);
	//glVertex2f(-.7,-1.4);
	glVertex2f(-.7,-1.3);
	glVertex2f(-.7,-1.1);
	//glVertex2f(-.7, -1);
	glVertex2f(-.7,-.8);
	//glVertex2f(-.7,-.7);
	glVertex2f(-.7,-.5);
	//glVertex2f(-.7,-.4);
	glVertex2f(-.7,-.2);
	//glVertex2f(-.7,-.1);
    glVertex2f(-.7,-.0);
    //glVertex2f(-.8,-2);
	glVertex2f(-.8,-1.9);
	//glVertex2f(-.8,-1.8);
	glVertex2f(-.8,-1.6);
	//glVertex2f(-.8,-1.5);
	glVertex2f(-.8,-1.3);
	glVertex2f(-.8,-1.2);
	//glVertex2f(-.8, -1);
	glVertex2f(-.8,-.9);
	glVertex2f(-.8,-.7);
	//glVertex2f(-.8,-.6);
	glVertex2f(-.8,-.4);
	glVertex2f(-.8,-.3);
	//glVertex2f(-.8,-.1);
	glVertex2f(-.9,-1.9);
	//glVertex2f(-.9,-1.7);
	glVertex2f(-.9,-1.6);
	//glVertex2f(-.9,-1.4);
	glVertex2f(-.9,-1.3);
	glVertex2f(-.9,-1.1);
	//glVertex2f(-.9, -1);
	glVertex2f(-.9,-.8);
	//glVertex2f(-.9,-.7);
	glVertex2f(-.9,-.5);
	//glVertex2f(-.9,-.4);
	glVertex2f(-.9,-.2);
	//glVertex2f(-.9,-.1);
	glVertex2f(-.9,-.0);
    //glVertex2f(-1,-2);
	glVertex2f(-1,-1.9);
	//glVertex2f(-1,-1.7);
	glVertex2f(-1,-1.6);
	//glVertex2f(-1,-1.4);
	glVertex2f(-1,-1.3);
	//glVertex2f(-1,-1.1);
	glVertex2f(-1, -1);
	//glVertex2f(-1,-.8);
	glVertex2f(-1,-.7);
	//glVertex2f(-1,-.5);
	glVertex2f(-1,-.4);
	//glVertex2f(-1,-.2);
	glVertex2f(-1,-.1);
    //glVertex2f(-1.1,-1.9);
	glVertex2f(-1.1,-1.7);
	//glVertex2f(-1.1,-1.6);
	glVertex2f(-1.1,-1.4);
	//glVertex2f(-1.1,-1.3);
	glVertex2f(-1.1,-1.1);
	//glVertex2f(-1.1, -1);
	glVertex2f(-1.1,-.8);
	//glVertex2f(-1.1,-.7);
	glVertex2f(-1.1,-.5);
	glVertex2f(-1.1,-.4);
	//glVertex2f(-1.1,-.2);
	glVertex2f(-1.1,-.1);
	//glVertex2f(-1.1,-.0);
    glVertex2f(-1.2,-2);
    //glVertex2f(-1.2,-1.9);
	glVertex2f(-1.2,-1.8);
	//glVertex2f(-1.2,-1.6);
	glVertex2f(-1.2,-1.5);
	//glVertex2f(-1.2,-1.3);
	glVertex2f(-1.2,-1.2);
	//glVertex2f(-1.2, -1);
	glVertex2f(-1.2,-.9);
	//glVertex2f(-1.2,-.7);
	glVertex2f(-1.2,-.6);
	//glVertex2f(-1.2,-.4);
	glVertex2f(-1.2,-.3);
	//glVertex2f(-1.2,-.1);
    glVertex2f(-1.3,-1.9);
	glVertex2f(-1.3,-1.7);
	//glVertex2f(-1.3,-1.6);
	glVertex2f(-1.3,-1.4);
	//glVertex2f(-1.3,-1.3);
	glVertex2f(-1.3,-1.1);
	//glVertex2f(-1.3, -1);
	glVertex2f(-1.3,-.8);
	//glVertex2f(-1.3,-.7);
	glVertex2f(-1.3,-.5);
	//glVertex2f(-1.3,-.4);
	glVertex2f(-1.3,-.2);
	//glVertex2f(-1.3,-.1);
    glVertex2f(-1.3,-.0);
    //glVertex2f(-1.4,-2);
    glVertex2f(-1.4,-1.9);
	glVertex2f(-1.4,-1.8);
	//glVertex2f(-1.4,-1.6);
	glVertex2f(-1.4,-1.5);
	//glVertex2f(-1.4,-1.3);
	glVertex2f(-1.4,-1.2);
	//glVertex2f(-1.4, -1);
	glVertex2f(-1.4,-.9);
	glVertex2f(-1.4,-.7);
	//glVertex2f(-1.4,-.6);
	glVertex2f(-1.4,-.4);
	glVertex2f(-1.4,-.3);
	//glVertex2f(-1.4,-.1);
    glVertex2f(-1.5,-1.9);
	//glVertex2f(-1.5,-1.7);
	glVertex2f(-1.5,-1.6);
	//glVertex2f(-1.5,-1.4);
	glVertex2f(-1.5,-1.3);
	glVertex2f(-1.5,-1.1);
	//glVertex2f(-1.5, -1);
	glVertex2f(-1.5,-.8);
	//glVertex2f(-1.5,-.7);
	glVertex2f(-1.5,-.5);
	//glVertex2f(-1.5,-.4);
	glVertex2f(-1.5,-.2);
	//glVertex2f(-1.5,-.1);
	glVertex2f(-1.5,-.0);
    //glVertex2f(-1.6,-2);
    glVertex2f(-1.6,-1.9);
	//glVertex2f(-1.6,-1.8);
	glVertex2f(-1.6,-1.6);
	//glVertex2f(-1.6,-1.5);
	glVertex2f(-1.6,-1.3);
	//glVertex2f(-1.6,-1.2);
	glVertex2f(-1.6, -1);
	//glVertex2f(-1.6,-.9);
	glVertex2f(-1.6,-.7);
	//glVertex2f(-1.6,-.6);
	glVertex2f(-1.6,-.4);
	//glVertex2f(-1.6,-.3);
	glVertex2f(-1.6,-.1);
    //glVertex2f(-1.7,-1.9);
	glVertex2f(-1.7,-1.7);
	//glVertex2f(-1.7,-1.6);
	glVertex2f(-1.7,-1.4);
	//glVertex2f(-1.7,-1.3);
	glVertex2f(-1.7,-1.1);
	//glVertex2f(-1.7, -1);
	glVertex2f(-1.7,-.8);
	//glVertex2f(-1.7,-.7);
	//glVertex2f(-1.7,-.5);
	glVertex2f(-1.7,-.4);
	//glVertex2f(-1.7,-.2);
	glVertex2f(-1.7,-.1);
	glVertex2f(-1.7,-.0);
    //glVertex2f(-1.8,-2);
    glVertex2f(-1.8,-1.9);
	//glVertex2f(-1.8,-1.8);
	glVertex2f(-1.8,-1.6);
	glVertex2f(-1.8,-1.5);
	//glVertex2f(-1.8,-1.3);
	glVertex2f(-1.8,-1.2);
	//glVertex2f(-1.8, -1);
	glVertex2f(-1.8,-.9);
	//glVertex2f(-1.8,-.7);
	glVertex2f(-1.8,-.6);
	//glVertex2f(-1.8,-.4);
	glVertex2f(-1.8,-.3);
	//glVertex2f(-1.8,-.1);
    glVertex2f(-1.9,-1.9);
	//glVertex2f(-1.9,-1.7);
	glVertex2f(-1.9,-1.6);
	//glVertex2f(-1.9,-1.4);
	glVertex2f(-1.9,-1.3);
	//glVertex2f(-1.9,-1.1);
	glVertex2f(-1.9, -1);
	//glVertex2f(-1.9,-.8);
	glVertex2f(-1.9,-.7);
	glVertex2f(-1.9,-.5);
	glVertex2f(-1.9,-.4);
	//glVertex2f(-1.9,-.2);
	glVertex2f(-1.9,-.1);
	//glVertex2f(-1.9,-.0);
    glVertex2f(.1,-2);
	//glVertex2f(.1,-1.9);
	glVertex2f(.1,-1.7);
	//glVertex2f(.1,-1.6);
	glVertex2f(.1,-1.4);
	//glVertex2f(.1,-1.3);
	glVertex2f(.1,-1.1);
	glVertex2f(.1, -1);
	//glVertex2f(.1,-.8);
	glVertex2f(.1,-.7);
	//glVertex2f(.1,-.5);
	glVertex2f(.1,-.4);
	//glVertex2f(.1,-.2);
	glVertex2f(.1,-.1);
    //glVertex2f(.2,-1.9);
	glVertex2f(.2,-1.8);
	glVertex2f(.2,-1.6);
	//glVertex2f(.2,-1.5);
	glVertex2f(.2,-1.3);
	//glVertex2f(.2,-1.2);
	glVertex2f(.2, -1);
	glVertex2f(.2,-.9);
	//glVertex2f(.2,-.7);
	glVertex2f(.2,-.6);
	//glVertex2f(.2,-.4);
	glVertex2f(.2,-.3);
	//glVertex2f(.2,-.1);
	glVertex2f(.2,-.0);
    //glVertex2f(.3,-2);
	glVertex2f(.3,-1.9);
	//glVertex2f(.3,-1.7);
	glVertex2f(.3,-1.6);
	//glVertex2f(.3,-1.4);
	glVertex2f(.3,-1.3);
	//glVertex2f(.3,-1.1);
	//glVertex2f(.3, -1);
	glVertex2f(.3,-.8);
	//glVertex2f(.3,-.7);
	glVertex2f(.3,-.5);
	glVertex2f(.3,-.4);
	//glVertex2f(.3,-.2);
	glVertex2f(.3,-.1);
    glVertex2f(.4,-1.9);
	//glVertex2f(.4,-1.8);
	glVertex2f(.4,-1.6);
	glVertex2f(.4,-1.5);
	//glVertex2f(.4,-1.3);
	glVertex2f(.4,-1.2);
	//glVertex2f(.4, -1);
	glVertex2f(.4,-.9);
	//glVertex2f(.4,-.7);
	glVertex2f(.4,-.6);
	//glVertex2f(.4,-.4);
	glVertex2f(.4,-.3);
	//glVertex2f(.4,-.1);
	glVertex2f(.4,-.0);
    glVertex2f(.5,-2);
	//glVertex2f(.5,-1.9);
	glVertex2f(.5,-1.7);
	//glVertex2f(.5,-1.6);
	glVertex2f(.5,-1.4);
	//glVertex2f(.5,-1.3);
	glVertex2f(.5,-1.1);
	glVertex2f(.5, -1);
	//glVertex2f(.5,-.8);
	glVertex2f(.5,-.7);
	//glVertex2f(.5,-.5);
	glVertex2f(.5,-.4);
	//glVertex2f(.5,-.2);
	glVertex2f(.5,-.1);
    //glVertex2f(.6,-1.9);
	glVertex2f(.6,-1.8);
	//glVertex2f(.6,-1.6);
	glVertex2f(.6,-1.5);
	//glVertex2f(.6,-1.3);
	glVertex2f(.6,-1.2);
	//glVertex2f(.6, -1);
	glVertex2f(.6,-.9);
	glVertex2f(.6,-.7);
	//glVertex2f(.6,-.6);
	glVertex2f(.6,-.4);
	//glVertex2f(.6,-.3);
	glVertex2f(.6,-.1);
	//glVertex2f(.6,-.0);
    glVertex2f(.7,-2);
	//glVertex2f(.7,-1.9);
	glVertex2f(.7,-1.7);
	//glVertex2f(.7,-1.6);
	glVertex2f(.7,-1.4);
	//glVertex2f(.7,-1.3);
	glVertex2f(.7,-1.1);
	glVertex2f(.7, -1);
	//glVertex2f(.7,-.8);
	glVertex2f(.7,-.7);
	//glVertex2f(.7,-.5);
	glVertex2f(.7,-.4);
	//glVertex2f(.7,-.2);
	glVertex2f(.7,-.1);
    //glVertex2f(.8,-1.9);
	glVertex2f(.8,-1.8);
	glVertex2f(.8,-1.6);
	//glVertex2f(.8,-1.5);
	glVertex2f(.8,-1.3);
	glVertex2f(.8,-1.2);
	//glVertex2f(.8, -1);
	glVertex2f(.8,-.9);
	//glVertex2f(.8,-.7);
	glVertex2f(.8,-.6);
	//glVertex2f(.8,-.4);
	glVertex2f(.8,-.3);
	glVertex2f(.8,-.1);
	//glVertex2f(.8,-.0);
    glVertex2f(.9,-2);
	//glVertex2f(.9,-1.9);
	//glVertex2f(.9,-1.7);
	glVertex2f(.9,-1.6);
	//glVertex2f(.9,-1.4);
	glVertex2f(.9,-1.3);
	glVertex2f(.9,-1.1);
	//glVertex2f(.9, -1);
	glVertex2f(.9,-.8);
	glVertex2f(.9,-.7);
	//glVertex2f(.9,-.5);
	glVertex2f(.9,-.4);
	//glVertex2f(.9,-.2);
	glVertex2f(.9,-.1);
    //glVertex2f(1.0,-1.9);
	//glVertex2f(1.0,-1.7);
	glVertex2f(1.0,-1.6);
	//glVertex2f(1.0,-1.4);
	glVertex2f(1.0,-1.3);
	//glVertex2f(1.0,-1.1);
	//glVertex2f(1.0, -1);
	glVertex2f(1.0,-.8);
	//glVertex2f(1.0,-.7);
	glVertex2f(1.0,-.5);
	//glVertex2f(1.0,-.4);
	glVertex2f(1.0,-.2);
	glVertex2f(1.0,-.1);
	//glVertex2f(1.0,- .0);
    glVertex2f(1.1,-2);
	//glVertex2f(1.1,-1.9);
	glVertex2f(1.1,-1.7);
	//glVertex2f(1.1,-1.6);
	//glVertex2f(1.1,-1.4);
	glVertex2f(1.1,-1.3);
	glVertex2f(1.1,-1.1);
	//glVertex2f(1.1, -1);
	glVertex2f(1.1,-.8);
	glVertex2f(1.1,-.7);
	//glVertex2f(1.1,-.5);
	glVertex2f(1.1,-.4);
	//glVertex2f(1.1,-.2);
	glVertex2f(1.1,-.1);
    glVertex2f(1.2,-1.9);
	//glVertex2f(1.2,-1.8);
	glVertex2f(1.2,-1.6);
	//glVertex2f(1.2,-1.5);
	glVertex2f(1.2,-1.3);
	//glVertex2f(1.2,-1.2);
	glVertex2f(1.2, -1);
	//glVertex2f(1.2,-.9);
	glVertex2f(1.2,-.7);
	//glVertex2f(1.2,-.6);
	glVertex2f(1.2,-.4);
	//glVertex2f(1.2,-.3);
	glVertex2f(1.2,-.1);
    //glVertex2f(1.2,-.0);
    glVertex2f(1.3,-2);
	glVertex2f(1.3,-1.9);
	//glVertex2f(1.3,-1.7);
	glVertex2f(1.3,-1.6);
	//glVertex2f(1.3,-1.4);
	glVertex2f(1.3,-1.3);
	//glVertex2f(1.3,-1.1);
	glVertex2f(1.3, -1);
	glVertex2f(1.3,-.8);
	//glVertex2f(1.3,-.7);
	glVertex2f(1.3,-.5);
	//glVertex2f(1.3,-.4);
	glVertex2f(1.3,-.2);
	glVertex2f(1.3,-.1);
    //glVertex2f(1.4,-1.9);
	glVertex2f(1.4,-1.8);
	//glVertex2f(1.4,-1.6);
	glVertex2f(1.4,-1.5);
	glVertex2f(1.4,-1.3);
	//glVertex2f(1.4,-1.2);
	glVertex2f(1.4, -1);
	//glVertex2f(1.4,-.9);
	glVertex2f(1.4,-.7);
	glVertex2f(1.4,-.6);
	//glVertex2f(1.4,.4);
	glVertex2f(1.4,-.3);
	//glVertex2f(1.4,-.1);
	glVertex2f(1.4,-.0);
    //glVertex2f(1.5,-2);
	glVertex2f(1.5,-1.9);
	glVertex2f(1.5,-1.7);
	//glVertex2f(1.5,-1.6);
	glVertex2f(1.5,-1.4);
	glVertex2f(1.5,-1.3);
	//glVertex2f(1.5,-1.1);
	glVertex2f(1.5, -1);
	//glVertex2f(1.5,-.8);
	glVertex2f(1.5,-.7);
	//glVertex2f(1.5,-.5);
	glVertex2f(1.5,-.4);
	//glVertex2f(1.5,-.2);
	glVertex2f(1.5,-.1);
    glVertex2f(1.6,-1.9);
	//glVertex2f(1.6,-1.8);
	glVertex2f(1.6,-1.6);
	//glVertex2f(1.6,-1.5);
	glVertex2f(1.6,-1.3);
	//glVertex2f(1.6,-1.2);
	glVertex2f(1.6, -1);
	//glVertex2f(1.6,-.9);
	glVertex2f(1.6,-.7);
	//glVertex2f(1.6,-.6);
	glVertex2f(1.6,-.4);
	//glVertex2f(1.6,-.3);
	glVertex2f(1.6,-.1);
	glVertex2f(1.6,-.0);
    //glVertex2f(1.7,-2);
	glVertex2f(1.7,-1.9);
	glVertex2f(1.7,-1.7);
	//glVertex2f(1.7,-1.6);
	glVertex2f(1.7,-1.4);
	//glVertex2f(1.7,-1.3);
	glVertex2f(1.7,-1.1);
	glVertex2f(1.7, -1);
	//glVertex2f(1.7,-.8);
	glVertex2f(1.7,-.7);
	glVertex2f(1.7,-.5);
	//glVertex2f(1.7,-.4);
	glVertex2f(1.7,-.2);
	//glVertex2f(1.7,-.1);
    glVertex2f(1.8,-1.9);
	//glVertex2f(1.8,-1.8);
	//glVertex2f(1.8,-1.6);
	glVertex2f(1.8,-1.5);
	//glVertex2f(1.8,-1.3);
	glVertex2f(1.8,-1.2);
	//glVertex2f(1.8,- 1);
	//glVertex2f(1.8,-.9);
	glVertex2f(1.8,-.7);
	//glVertex2f(1.8,-.6);
	glVertex2f(1.8,-.4);
	//glVertex2f(1.8,-.3);
	glVertex2f(1.8,-.1);
	//glVertex2f(1.8,-.0);
    glVertex2f(1.9,-2);
	glVertex2f(1.9,-1.9);
	//glVertex2f(1.9,-1.7);
	glVertex2f(1.9,-1.6);
	glVertex2f(1.9,-1.4);
	//glVertex2f(1.9,-1.3);
	glVertex2f(1.9,-1.1);
	glVertex2f(1.9, -1);
	//glVertex2f(1.9,-.8);
	glVertex2f(1.9,-.7);
	glVertex2f(1.9,-.5);
	//glVertex2f(1.9,-.4);
	glVertex2f(1.9,-.2);
	glVertex2f(1.9,-.1);

    glEnd();
    //glEnd();
    glPopMatrix();


///HILL01///
    glBegin(GL_POLYGON);
	glColor3ub(64, 191, 64);
	glVertex2f(-1.5f,  0.8f);
	glVertex2f(-2.0f,  0.8f);
    glVertex2f(-1.97f, 0.90f);
    glVertex2f(-1.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(64, 191, 64);
    glVertex2f(-1.53f, 0.90f);
    glVertex2f(-1.97f, 0.90f);
    glVertex2f(-1.85f, 1.05f);
    glVertex2f(-1.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(64, 191, 64);
    glVertex2f(-1.65f, 1.05f);
    glVertex2f(-1.85f, 1.05f);
    glVertex2f(-1.75f, 1.10f);
    glEnd();
///HILL02///
    glBegin(GL_POLYGON);
	glColor3ub(64, 191, 64);
	glVertex2f(-1.0f,  0.8f);
	glVertex2f(-1.5f,  0.8f);
    glVertex2f(-1.47f, 0.90f);
    glVertex2f(-1.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(64, 191, 64);
    glVertex2f(-1.03f, 0.90f);
    glVertex2f(-1.47f, 0.90f);
    glVertex2f(-1.35f, 1.05f);
    glVertex2f(-1.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(64, 191, 64);
    glVertex2f(-1.15f, 1.05f);
    glVertex2f(-1.35f,1.05f);
    glVertex2f(-1.25f,1.10f);
    glEnd();
///HILL03///
    glBegin(GL_POLYGON);
	glColor3ub(64, 191, 64);
	glVertex2f(-0.5f,  0.8f);
	glVertex2f(-1.0f,  0.8f);
    glVertex2f(-0.97f, 0.90f);
    glVertex2f(-0.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(64, 191, 64);
    glVertex2f(-0.53f, 0.90f);
    glVertex2f(-0.97f, 0.90f);
    glVertex2f(-0.85f, 1.05f);
    glVertex2f(-0.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(64, 191, 64);
    glVertex2f(-0.65f, 1.05f);
    glVertex2f(-0.85f, 1.05f);
    glVertex2f(-0.75f, 1.10f);
    glEnd();
///HILL04///
    glBegin(GL_POLYGON);
	glColor3ub(64, 191, 64);
	glVertex2f(-0.0f,  0.8f);
	glVertex2f(-0.5f,  0.8f);
    glVertex2f(-0.47f, 0.90f);
    glVertex2f(-0.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(64, 191, 64);
    glVertex2f(-0.03f, 0.90f);
    glVertex2f(-0.47f, 0.90f);
    glVertex2f(-0.35f, 1.05f);
    glVertex2f(-0.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(64, 191, 64);
    glVertex2f(-0.15f, 1.05f);
    glVertex2f(-0.35f,1.05f);
    glVertex2f(-0.25f,1.10f);
    glEnd();
///HILL05///
    glBegin(GL_POLYGON);
	glColor3ub(64, 191, 64);
	glVertex2f(1.5f,  0.8f);
	glVertex2f(2.0f,  0.8f);
    glVertex2f(1.97f, 0.90f);
    glVertex2f(1.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(64, 191, 64);
    glVertex2f(1.53f, 0.90f);
    glVertex2f(1.97f, 0.90f);
    glVertex2f(1.85f, 1.05f);
    glVertex2f(1.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(64, 191, 64);
    glVertex2f(1.65f, 1.05f);
    glVertex2f(1.85f, 1.05f);
    glVertex2f(1.75f, 1.10f);
    glEnd();
///HILL06///
    glBegin(GL_POLYGON);
	glColor3ub(64, 191, 64);
	glVertex2f(1.0f,  0.8f);
	glVertex2f(1.5f,  0.8f);
    glVertex2f(1.47f, 0.90f);
    glVertex2f(1.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(64, 191, 64);
    glVertex2f(1.03f, 0.90f);
    glVertex2f(1.47f, 0.90f);
    glVertex2f(1.35f, 1.05f);
    glVertex2f(1.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(64, 191, 64);
    glVertex2f(1.15f, 1.05f);
    glVertex2f(1.35f,1.05f);
    glVertex2f(1.25f,1.10f);
    glEnd();
///HILL07///
    glBegin(GL_POLYGON);
	glColor3ub(64, 191, 64);
	glVertex2f(0.5f,  0.8f);
	glVertex2f(1.0f,  0.8f);
    glVertex2f(0.97f, 0.90f);
    glVertex2f(0.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(64, 191, 64);
    glVertex2f(0.53f, 0.90f);
    glVertex2f(0.97f, 0.90f);
    glVertex2f(0.85f, 1.05f);
    glVertex2f(0.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(64, 191, 64);
    glVertex2f(0.65f, 1.05f);
    glVertex2f(0.85f, 1.05f);
    glVertex2f(0.75f, 1.10f);
    glEnd();
///HILL08///
    glBegin(GL_POLYGON);
	glColor3ub(64, 191, 64);
	glVertex2f(0.0f,  0.8f);
	glVertex2f(0.5f,  0.8f);
    glVertex2f(0.47f, 0.90f);
    glVertex2f(0.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(64, 191, 64);
    glVertex2f(0.03f, 0.90f);
    glVertex2f(0.47f, 0.90f);
    glVertex2f(0.35f, 1.05f);
    glVertex2f(0.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(64, 191, 64);
    glVertex2f(0.15f, 1.05f);
    glVertex2f(0.35f,1.05f);
    glVertex2f(0.25f,1.10f);
    glEnd();

///TREE01///
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(0.91f, -0.1f);
    glVertex2f(0.91f, -0.7f);
    glVertex2f(0.94f, -0.7f);
    glVertex2f(0.94f, -0.1f);
    glEnd();
///TREE02///
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(1.14f, -0.0f);
    glVertex2f(1.14f, -0.7f);
    glVertex2f(1.17f, -0.7f);
    glVertex2f(1.17f, -0.0f);
    glEnd();
///TREE03///
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(1.81f, -0.0f);
    glVertex2f(1.81f, -0.7f);
    glVertex2f(1.84f, -0.7f);
    glVertex2f(1.84f, -0.0f);
    glEnd();

///LEAF01///
    glBegin(GL_POLYGON);
    glColor3ub(204, 204, 0 );
    glVertex2f(0.80f, -0.1f);//height
    glVertex2f(1.05f, -0.1f);
    glVertex2f(0.925f, 0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(204, 204, 0 );
    glVertex2f(0.85f, 0.1f);//height
    glVertex2f(1.00f, 0.1f);
    glVertex2f(0.925f, 0.4f);
    glEnd();
///LEAF02///
    glBegin(GL_POLYGON);
    glColor3ub(204, 204, 0 );
    glVertex2f(1.03f, -0.0f);//height
    glVertex2f(1.28f, -0.0f);
    glVertex2f(1.155f, 0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(204, 204, 0 );
    glVertex2f(1.06f, 0.1f);//height
    glVertex2f(1.25f, 0.1f);
    glVertex2f(1.155f, 0.4f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(204, 204, 0 );
	glVertex2f(1.08f, 0.2f);
	glVertex2f(1.23f, 0.2f);
	glVertex2f(1.155f, 0.5f);
	glEnd();
///LEAF03///
     glBegin(GL_POLYGON);
    glColor3ub(204, 204, 0 );
    glVertex2f(1.70f, -0.0f);//height
    glVertex2f(1.95f, -0.0f);
    glVertex2f(1.825f, 0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(204, 204, 0 );
    glVertex2f(1.74f, 0.1f);//height
    glVertex2f(1.91f, 0.1f);
    glVertex2f(1.825f, 0.4f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(204, 204, 0 );
	glVertex2f(1.76f, 0.2f);
	glVertex2f(1.89f, 0.2f);
	glVertex2f(1.825f, 0.5f);
	glEnd();

///FENCE01///
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 102);
    glVertex2f(1.7f, -0.6f);//width
    glVertex2f(2.0f, -0.60f);
    glVertex2f(2.0f, -0.60f);
    glVertex2f(1.7f, -0.6f);
    glVertex2f(1.7f, -0.5f);//width
    glVertex2f(2.0f, -0.50f);
    glVertex2f(2.0f, -0.50f);
    glVertex2f(1.7f, -0.5f);
    glVertex2f(1.7f, -0.7f);//width
    glVertex2f(2.0f, -0.70f);
    glVertex2f(2.0f, -0.70f);
    glVertex2f(1.7f, -0.7f);

    glVertex2f(1.76f, -0.5f);//height
    glVertex2f(1.76f, -0.7f);
    glVertex2f(1.78f, -0.7f);
    glVertex2f(1.78f, -0.5f);
    glVertex2f(1.86f, -0.5f);//height
    glVertex2f(1.86f, -0.7f);
    glVertex2f(1.88f, -0.7f);
    glVertex2f(1.88f, -0.5f);
    glVertex2f(1.96f, -0.5f);//height
    glVertex2f(1.96f, -0.7f);
    glVertex2f(1.98f, -0.7f);
    glVertex2f(1.98f, -0.5f);
    glEnd();
///FENCE02///
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 102);
    glVertex2f(0.9f, -0.6f);//width
    glVertex2f(1.2f, -0.60f);
    glVertex2f(1.2f, -0.60f);
    glVertex2f(0.9f, -0.6f);
    glVertex2f(0.9f, -0.5f);//width
    glVertex2f(1.2f, -0.50f);
    glVertex2f(1.2f, -0.50f);
    glVertex2f(0.9f, -0.5f);
    glVertex2f(0.9f, -0.7f);//width
    glVertex2f(1.2f, -0.70f);
    glVertex2f(1.2f, -0.70f);
    glVertex2f(0.9f, -0.7f);

    glVertex2f(0.96f, -0.5f);//height
    glVertex2f(0.96f, -0.7f);
    glVertex2f(0.98f, -0.7f);
    glVertex2f(0.98f, -0.5f);
    glVertex2f(1.06f, -0.5f);//height
    glVertex2f(1.06f, -0.7f);
    glVertex2f(1.08f, -0.7f);
    glVertex2f(1.08f, -0.5f);
    glVertex2f(1.16f, -0.5f);//height
    glVertex2f(1.16f, -0.7f);
    glVertex2f(1.18f, -0.7f);
    glVertex2f(1.18f, -0.5f);
    glEnd();

///HOUSE///
    glBegin(GL_QUADS);
    glColor3ub(255, 204, 255);///house body01
    glVertex2f(-0.9f, 0.1f);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-1.3f, -0.3f);
    glVertex2f(-1.3f, 0.1f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(204, 0, 0);///house upper part01
    glVertex2f(-1.0f, 0.4f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-1.5f, 0.1f);
    glVertex2f(-1.3f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);///house door01
    glVertex2f(-1.0f, -0.0f);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.1f, -0.3f);
    glVertex2f(-1.1f, -0.0f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0); ///house window01
    glVertex2f(-1.15f, -0.1f);
    glVertex2f(-1.15f, -0.20f);
    glVertex2f(-1.25f, -0.20f);
    glVertex2f(-1.25f, -0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-0.9f, 0.1f);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-1.3f, -0.3f);
    glVertex2f(-1.3f, 0.1f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-1.3f, -0.3f);
    glVertex2f(-1.3f, 0.1f);
    glVertex2f(-0.9f, 0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.0f, 0.4f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-1.5f, 0.1f);
    glVertex2f(-1.3f, 0.4f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-1.5f, 0.1f);
    glVertex2f(-1.3f, 0.4f);
    glVertex2f(-1.0f, 0.4f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.0f, -0.0f);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.1f, -0.3f);
    glVertex2f(-1.1f, -0.0f);
    glVertex2f(-1.05f, -0.0f);
    glVertex2f(-1.05f, -0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.1f, -0.3f);
    glVertex2f(-1.1f, -0.0f);
    glVertex2f(-1.0f, -0.0f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.15f, -0.1f);
    glVertex2f(-1.15f, -0.20f);
    glVertex2f(-1.25f, -0.20f);
    glVertex2f(-1.25f, -0.1f);
    glVertex2f(-1.20f, -0.1f);
    glVertex2f(-1.20f, -0.20f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.15f, -0.20f);
    glVertex2f(-1.25f, -0.20f);
    glVertex2f(-1.25f, -0.1f);
    glVertex2f(-1.15f, -0.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 102, 0); ///house body02
    glVertex2f(-1.3f, -0.0f);
    glVertex2f(-1.8f, -0.0f);
    glVertex2f(-1.8f, -0.5f);
    glVertex2f(-1.3f, -0.5f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 68, 0); ///house door02
    glVertex2f(-1.6f, -0.1f);
    glVertex2f(-1.7f, -0.1f);
    glVertex2f(-1.7f, -0.5f);
    glVertex2f(-1.6f, -0.5f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 68, 0); ///house window02
    glVertex2f(-1.4f, -0.2f);
    glVertex2f(-1.5f, -0.2f);
    glVertex2f(-1.5f, -0.3f);
    glVertex2f(-1.4f, -0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///house upper part02
    glVertex2f(-1.2f, 0.0f);
    glVertex2f(-1.9f, 0.0f);
    glVertex2f(-1.7f, 0.3f);
    glVertex2f(-1.4f, 0.3f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.3f,-0.0f);
    glVertex2f(-1.8f,-0.0f);
    glVertex2f(-1.8f, -0.5f);
    glVertex2f(-1.3f, -0.5f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.8f,-0.0f);
    glVertex2f(-1.8f,-0.5f);
    glVertex2f(-1.3f,-0.5f);
    glVertex2f(-1.3f,-0.0f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.2f,0.0f);
    glVertex2f(-1.9f,0.0f);
    glVertex2f(-1.7f,0.3f);
    glVertex2f(-1.4f,0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.9f,0.0f);
    glVertex2f(-1.7f,0.3f);
    glVertex2f(-1.4f,0.3f);
    glVertex2f(-1.2f,0.0f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.6f,-0.1f);
    glVertex2f(-1.70f,-0.1f);
    glVertex2f(-1.70f,-0.5f);
    glVertex2f(-1.6f,-0.5f);
    glVertex2f(-1.65f,-0.1f);
    glVertex2f(-1.65f,-0.5f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.70f,-0.1f);
    glVertex2f(-1.70f,-0.5f);
    glVertex2f(-1.6f,-0.5f);
    glVertex2f(-1.6f,-0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.4f,-0.2f);
    glVertex2f(-1.5f,-0.2f);
    glVertex2f(-1.5f,-0.3f);
    glVertex2f(-1.4f,-0.3f);
    glVertex2f(-1.45f,-0.2f);
    glVertex2f(-1.45f,-0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.5f,-0.2f);
    glVertex2f(-1.5f,-0.3f);
    glVertex2f(-1.4f,-0.3f);
    glVertex2f(-1.4f,-0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);///house body03
    glVertex2f(1.2f, -0.3f);
    glVertex2f(1.2f, -0.8f);
    glVertex2f(1.7f, -0.8f);
    glVertex2f(1.7f, -0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2f(1.2f, -0.3f);
    glVertex2f(1.2f, -0.8f);
    glVertex2f(1.7f, -0.8f);
    glVertex2f(1.7f, -0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2f(1.2f, -0.8f);
    glVertex2f(1.7f, -0.8f);
    glVertex2f(1.7f, -0.3f);
    glVertex2f(1.2f, -0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 102);///house upper part03
    glVertex2f(1.3f, -0.1f);
    glVertex2f(1.1f, -0.4f);
    glVertex2f(1.8f, -0.4f);
    glVertex2f(1.6f, -0.1f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);///house window03
    glVertex2f(1.3f, -0.6f);
    glVertex2f(1.3f, -0.7f);
    glVertex2f(1.4f, -0.7f);
    glVertex2f(1.4f, -0.6f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);///house door03
    glVertex2f(1.5f, -0.5f);
    glVertex2f(1.5f, -0.8f);
    glVertex2f(1.6f, -0.8f);
    glVertex2f(1.6f, -0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.3f, -0.1f);
    glVertex2f(1.1f, -0.4f);
    glVertex2f(1.8f, -0.4f);
    glVertex2f(1.6f, -0.1f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.1f, -0.4f);
    glVertex2f(1.8f, -0.4f);
    glVertex2f(1.6f, -0.1f);
    glVertex2f(1.3f, -0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.3f, -0.6f);
    glVertex2f(1.3f, -0.7f);
    glVertex2f(1.4f, -0.7f);
    glVertex2f(1.4f, -0.6f);
    glVertex2f(1.35f, -0.6f);
    glVertex2f(1.35f, -0.7f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.3f, -0.7f);
    glVertex2f(1.4f, -0.7f);
    glVertex2f(1.4f, -0.6f);
    glVertex2f(1.3f, -0.6f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.5f, -0.5f);
    glVertex2f(1.5f, -0.8f);
    glVertex2f(1.6f, -0.8f);
    glVertex2f(1.6f, -0.5f);
    glVertex2f(1.55f, -0.5f);
    glVertex2f(1.55f, -0.8f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.5f, -0.8f);
    glVertex2f(1.6f, -0.8f);
    glVertex2f(1.6f, -0.5f);
    glVertex2f(1.5f, -0.5f);
    glEnd();

///BOAT01///
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f,  -1.01f);
    glVertex2f(-0.2f, -1.01f);
    glVertex2f(-0.2f, -1.08f);
    glVertex2f(0.1f,  -1.08f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(122, 122, 82);
    glVertex2f(0.2f, -0.93f);
    glVertex2f(0.1f, -1.01f);
    glVertex2f(-0.2f, -1.01f);
    glVertex2f(-0.3f, -0.93f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(0.1f, -0.91f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);///boat01///
    glVertex2f(0.1f, -1.01f);
    glVertex2f(0.2f, -0.93f);
    glVertex2f(0.1f, -1.08f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);///boat01///
    glVertex2f(-0.2f, -1.01f);
    glVertex2f(-0.3f, -0.93f);
    glVertex2f(-0.2f, -1.08f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f, -0.91f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(0.1f, -0.91f);
    glVertex2f(0.2f, -0.93f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(-0.3f, -0.93f);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f, -0.91f);
    glVertex2f(0.1f, -1.01f);
    glVertex2f(0.0f, -0.91f);
    glVertex2f(0.0f, -1.01f);
    glVertex2f(-0.1f, -0.91f);
    glVertex2f(-0.1f, -1.01f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(-0.2f, -1.01f);
    glEnd();

///BOAT02///
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(-0.2f,-0.75f);
    glVertex2f(-0.2f,-0.82f);
    glVertex2f(0.1f, -0.82f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(122, 122, 82);
    glVertex2f(0.2f, -0.67f);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(-0.2f,-0.75f);
    glVertex2f(-0.3f,-0.67f);
    glVertex2f(-0.2f,-0.65f);
    glVertex2f(0.1f, -0.65f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);///boat02///
    glVertex2f(0.1f, -0.75f);
    glVertex2f(0.2f, -0.67f);
    glVertex2f(0.1f, -0.82f);
    glEnd();
    glBegin(GL_POLYGON);
     glColor3ub(0, 0, 0);///boat02///
    glVertex2f(-0.2f, -0.75f);
    glVertex2f(-0.3f, -0.67f);
    glVertex2f(-0.2f, -0.82f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f,  -0.65f);
    glVertex2f(-0.2f, -0.65f);
    glVertex2f(0.1f,  -0.65f);
    glVertex2f(0.2f,  -0.67f);
    glVertex2f(-0.2f, -0.65f);
    glVertex2f(-0.3f, -0.67f);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f, - 0.65f);
    glVertex2f(0.1f, - 0.75f);
    glVertex2f(0.0f, - 0.65f);
    glVertex2f(0.0f,  -0.75f);
    glVertex2f(-0.1f, -0.65f);
    glVertex2f(-0.1f, -0.75f);
    glVertex2f(-0.2f, -0.65f);
    glVertex2f(-0.2f, -0.75f);
    glEnd();

///MOON///
        int m;
        GLfloat x4=1.66f; GLfloat y4=1.8f; GLfloat radius4 =.12f;
    int triangleAmount4 = 20;
    GLfloat twicePi4 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 51, 204);
    glColor3ub(242, 242, 242);
    glColor3f(1.0f, 1.0f, 0.0f);
     glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(x4, y4);
        for(m = 0; m <= triangleAmount4;m++) {
            glVertex2f(
                    x4 + (radius4 * cos(m *  twicePi4 / triangleAmount4)),
                y4 + (radius4 * sin(m * twicePi4 / triangleAmount4))
            );
        }
   glEnd();

///CLOUD01///
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(-0.45f, 1.65f);
    glVertex2f(-0.45f, 1.80f);
    glVertex2f(-1.0f, 1.80f);
    glVertex2f(-1.0f, 1.65f);
    glEnd();
    int n;
        GLfloat x5=-0.45f; GLfloat y5=1.73f; GLfloat radius5 =.09f;
    int triangleAmount5 = 20;
    GLfloat twicePi5 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(242, 242, 242);
        glVertex2f(x5, y5);
        for(n = 0; n <= triangleAmount5;n++) {
            glVertex2f(
                    x5 + (radius5 * cos(n *  twicePi5 / triangleAmount5)),
                y5 + (radius5 * sin(n * twicePi5 / triangleAmount5))
            );
        }

    glEnd();

    int o;
        GLfloat x6=-1.0f; GLfloat y6=1.73f; GLfloat radius6 =.15f;
    int triangleAmount6 = 20;
    GLfloat twicePi6 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(242, 242, 242);
        glVertex2f(x6, y6);
        for(o = 0; o <= triangleAmount6;o++) {
            glVertex2f(
                    x6 + (radius6 * cos(o *  twicePi6 / triangleAmount6)),
                y6 + (radius6 * sin(o * twicePi6 / triangleAmount6))
            );
        }
  glEnd();

  int p;
        GLfloat x7=-0.55f; GLfloat y7=1.79f; GLfloat radius7 =.07f;
    int triangleAmount7 = 20;
    GLfloat twicePi7 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(242, 242, 242);
        glVertex2f(x7, y7);
        for(p = 0; p <= triangleAmount6;p++) {
            glVertex2f(
                    x7 + (radius7 * cos(p *  twicePi7 / triangleAmount7)),
                y7 + (radius7 * sin(p * twicePi7 / triangleAmount7))
            );
        }
  glEnd();

  int q;
        GLfloat x8=-0.7f; GLfloat y8=1.80f; GLfloat radius8 =.12f;
    int triangleAmount8 = 20;
    GLfloat twicePi8 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(242, 242, 242);
        glVertex2f(x8, y8);
        for(q = 0; q <= triangleAmount6;q++) {
            glVertex2f(
                    x8 + (radius8 * cos(q *  twicePi8 / triangleAmount8)),
                y8 + (radius8 * sin(q * twicePi8 / triangleAmount8))
            );
        }
  glEnd();

   int r;
        GLfloat x9=-0.85f; GLfloat y9=1.73f; GLfloat radius9 =.10f;
    int triangleAmount9 = 20;
    GLfloat twicePi9 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(242, 242, 242);
        glVertex2f(x9, y9);
        for(r = 0; r <= triangleAmount6;r++) {
            glVertex2f(
                    x9 + (radius9 * cos(r *  twicePi9 / triangleAmount9)),
                y9 + (radius9 * sin(r * twicePi9 / triangleAmount9))
            );
        }
  glEnd();

   int s;
        GLfloat x10=-0.69f; GLfloat y10=1.69f; GLfloat radius10 =.14f;
    int triangleAmount10 = 20;
    GLfloat twicePi10 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(242, 242, 242);
        glVertex2f(x10, y10);
        for(s = 0; s <= triangleAmount6;s++) {
            glVertex2f(
                    x10 + (radius10 * cos(s *  twicePi10 / triangleAmount10)),
                y10 + (radius10 * sin(s * twicePi10 / triangleAmount10))
            );
        }
  glEnd();

   int t;
        GLfloat x11=-0.53f; GLfloat y11=1.69f; GLfloat radius11 =.12f;
    int triangleAmount11 = 20;
    GLfloat twicePi11 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(242, 242, 242);
        glVertex2f(x11, y11);
        for(t = 0; t <= triangleAmount6;t++) {
            glVertex2f(
                    x11 + (radius11 * cos(t *  twicePi11 / triangleAmount11)),
                y11 + (radius11 * sin(t * twicePi11 / triangleAmount11))
            );
        }
  glEnd();

///CLOUD02///
    glPushMatrix();
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(224, 224, 209);
    glVertex2f(0.45f, 1.65f);
    glVertex2f(0.45f, 1.80f);
    glVertex2f(1.0f, 1.80f);
    glVertex2f(1.0f, 1.65f);
    glEnd();
   int n1;
        GLfloat x51=0.45f; GLfloat y51=1.73f; GLfloat radius51 =.09f;
    int triangleAmount51= 20;
    GLfloat twicePi51 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(224, 224, 209);
        glVertex2f(x51, y51);
        for(n1 = 0; n1 <= triangleAmount5;n1++) {
            glVertex2f(
                    x51 + (radius51 * cos(n1 *  twicePi51 / triangleAmount51)),
                y51 + (radius51 * sin(n1 * twicePi51 / triangleAmount51))
            );
        }
   glEnd();

    int o1;
        GLfloat x61=1.0f; GLfloat y61=1.73f; GLfloat radius61 =.15f;
    int triangleAmount61 = 20;
    GLfloat twicePi61 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(224, 224, 209);
        glVertex2f(x61, y61);
        for(o1 = 0; o1 <= triangleAmount61;o1++) {
            glVertex2f(
                    x61 + (radius61 * cos(o1 *  twicePi61 / triangleAmount61)),
                y61 + (radius61 * sin(o1 * twicePi61 / triangleAmount61))
            );
        }
  glEnd();

  int p1;
        GLfloat x71=0.55f; GLfloat y71=1.79f; GLfloat radius71 =.07f;
    int triangleAmount71 = 20;
    GLfloat twicePi71 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(224, 224, 209);
        glVertex2f(x71, y71);
        for(p1 = 0; p1 <= triangleAmount61;p1++) {
            glVertex2f(
                    x71 + (radius71 * cos(p1 *  twicePi71 / triangleAmount71)),
                y71 + (radius71 * sin(p1 * twicePi71 / triangleAmount71))
            );
        }
  glEnd();

  int q1;
        GLfloat x81=0.7f; GLfloat y81=1.80f; GLfloat radius81 =.12f;
    int triangleAmount81 = 20;
    GLfloat twicePi81 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(224, 224, 209);
        glVertex2f(x81, y81);
        for(q1 = 0; q1 <= triangleAmount61;q1++) {
            glVertex2f(
                    x81 + (radius81 * cos(q1 *  twicePi81 / triangleAmount81)),
                y81 + (radius81 * sin(q1 * twicePi81 / triangleAmount81))
            );
        }
  glEnd();

   int r1;
        GLfloat x91=0.85f; GLfloat y91=1.73f; GLfloat radius91 =.10f;
    int triangleAmount91 = 20;
    GLfloat twicePi91 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(224, 224, 209);
        glVertex2f(x91, y91);
        for(r1 = 0; r1 <= triangleAmount61;r1++) {
            glVertex2f(
                    x91 + (radius91 * cos(r1 *  twicePi91 / triangleAmount91)),
                y91 + (radius91 * sin(r1 * twicePi91 / triangleAmount91))
            );
        }
  glEnd();

   int s1;
        GLfloat x101=0.69f; GLfloat y101=1.69f; GLfloat radius101 =.14f;
    int triangleAmount101 = 20;
    GLfloat twicePi101 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(224, 224, 209);
        glVertex2f(x101, y101);
        for(s1 = 0; s1 <= triangleAmount6;s1++) {
            glVertex2f(
                    x101 + (radius101 * cos(s1 *  twicePi101 / triangleAmount101)),
                y101 + (radius101 * sin(s1 * twicePi101 / triangleAmount101))
            );
        }
  glEnd();

   int t1;
        GLfloat x111=0.53f; GLfloat y111=1.69f; GLfloat radius111 =.12f;
    int triangleAmount111 = 20;
    GLfloat twicePi111 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(224, 224, 209);
        glVertex2f(x111, y111);
        for(t1 = 0; t1 <= triangleAmount6;t1++) {
            glVertex2f(
                    x111 + (radius111 * cos(t1 *  twicePi111 / triangleAmount111)),
                y111 + (radius111 * sin(t1 * twicePi111 / triangleAmount111))
            );
        }
  glEnd();
  glPopMatrix();

///CLOUD03///
      int u;
        GLfloat x12=-0.1f; GLfloat y12=1.33f; GLfloat radius12 =.09f;
    int triangleAmount12 = 20;
    GLfloat twicePi12 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(224, 224, 209);
        glVertex2f(x12, y12);
        for(u = 0; u <= triangleAmount5;u++) {
            glVertex2f(
                    x12 + (radius12 * cos(u *  twicePi12 / triangleAmount12)),
                y12 + (radius12 * sin(u * twicePi12 / triangleAmount12))
            );
        }

    glEnd();

    int v;
        GLfloat x13=-0.2f; GLfloat y13=1.27f; GLfloat radius13 =.12f;
    int triangleAmount13 = 20;
    GLfloat twicePi13 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(224, 224, 209);
        glVertex2f(x13, y13);
        for(v = 0; v <= triangleAmount6;v++) {
            glVertex2f(
                    x13 + (radius13 * cos(v *  twicePi13 / triangleAmount11)),
                y13 + (radius13 * sin(v * twicePi13 / triangleAmount13))
            );
        }
  glEnd();

  int w;
        GLfloat x14=-0.33f; GLfloat y14=1.29f; GLfloat radius14 =.09f;
    int triangleAmount14 = 20;
    GLfloat twicePi14 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(224, 224, 209);
        glVertex2f(x14, y14);
        for(w = 0; w <= triangleAmount6;w++) {
            glVertex2f(
                    x14 + (radius14 * cos(w *  twicePi14 / triangleAmount14)),
                y14 + (radius14 * sin(w * twicePi14 / triangleAmount14))
            );
        }
  glEnd();

///HIGHWAYROAD///
    glBegin(GL_QUADS);
    glColor3ub(64, 64, 64);
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(2.0f, -2.0f);
    glVertex2f(2.0f, -1.25f);
    glVertex2f(-2.0f, -1.25f);
    glEnd();
 glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);///LINES///
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(2.0f, -2.0f);
    glVertex2f(2.0f, -1.25f);
    glVertex2f(-2.0f, -1.25f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(0.2f, -1.60f);
    glVertex2f(0.4f, -1.60f);
    glVertex2f(0.4f, -1.64f);
    glVertex2f(0.2f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(0.6f, -1.60f);
    glVertex2f(0.8f, -1.60f);
    glVertex2f(0.8f, -1.64f);
    glVertex2f(0.6f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
   glColor3ub(255, 255, 255);///DESH///
    glVertex2f(1.0f, -1.60f);
    glVertex2f(1.2f, -1.60f);
    glVertex2f(1.2f, -1.64f);
    glVertex2f(1.0f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
   glColor3ub(255, 255, 255);///DESH///
    glVertex2f(1.4f, -1.60f);
    glVertex2f(1.6f, -1.60f);
    glVertex2f(1.6f, -1.64f);
    glVertex2f(1.4f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(1.8f, -1.60f);
    glVertex2f(2.0f, -1.60f);
    glVertex2f(2.0f, -1.64f);
    glVertex2f(1.8f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-0.0f, -1.60f);
    glVertex2f(-0.2f, -1.60f);
    glVertex2f(-0.2f, -1.64f);
    glVertex2f(-0.0f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-0.4f, -1.60f);
    glVertex2f(-0.6f, -1.60f);
    glVertex2f(-0.6f, -1.64f);
    glVertex2f(-0.4f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-0.8f, -1.60f);
    glVertex2f(-1.0f, -1.60f);
    glVertex2f(-1.0f, -1.64f);
    glVertex2f(-0.8f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-1.2f, -1.60f);
    glVertex2f(-1.4f, -1.60f);
    glVertex2f(-1.4f, -1.64f);
    glVertex2f(-1.2f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-1.6f, -1.60f);
    glVertex2f(-1.8f, -1.60f);
    glVertex2f(-1.8f, -1.64f);
    glVertex2f(-1.6f, -1.64f);
    glEnd();
    glPushMatrix();

///CAR01///
    glTranslatef(position1,0.0f, 0.0f);
    glRotatef(k,position,0.0,0.1);
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 153);
    glVertex2f(1.7f, -1.91f);
    glVertex2f(1.8f, -1.91f);
    glVertex2f(2.0f, -1.91f);
    glVertex2f(2.0f, -1.78f);
    glVertex2f(1.8f, -1.78f);
    glVertex2f(1.7f, -1.86f);
    glEnd();
  int k;
        GLfloat x2=1.92f; GLfloat y2=-1.91f; GLfloat radius2 =.03f;
    int triangleAmount2 = 20;
    GLfloat twicePi2 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(0,0,0);
        glVertex2f(x2, y2);
        for(k = 0; k <= triangleAmount2;k++) {
            glVertex2f(
                    x2 + (radius2 * cos(k *  twicePi2 / triangleAmount2)),
                y2 + (radius2 * sin(k * twicePi2 / triangleAmount2))
            );
        }
    glEnd();


         int l;
        GLfloat x3=1.78f; GLfloat y3=-1.91f; GLfloat radius3 =.03f;
    int triangleAmount3 = 20;
    GLfloat twicePi3 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(0,0,0);
        glVertex2f(x3, y3);
        for(l = 0; l <= triangleAmount3;l++) {
            glVertex2f(
                    x3 + (radius3 * cos(l *  twicePi3 / triangleAmount3)),
                y3 + (radius3 * sin(l * twicePi3 / triangleAmount3))
            );
        }
   glEnd();
   glPopMatrix();
   k-=0.02f;
   l-=0.02f;

///CAR02///
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glRotatef(i,position,0.0,0.1);
    glBegin(GL_POLYGON);
    glColor3ub(255, 204, 153);
    glVertex2f(-1.7f, -1.45f);
    glVertex2f(-1.8f, -1.45f);
    glVertex2f(-2.0f, -1.45f);
    glVertex2f(-2.0f, -1.3f);
    glVertex2f(-1.8f, -1.3f);
    glVertex2f(-1.7f, -1.35f);
    glEnd();
    int i;
        GLfloat x=-1.92f; GLfloat y=-1.45f; GLfloat radius =.03f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(0,0,0);
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

     int j;
        GLfloat x1=-1.78f; GLfloat y1=-1.45f; GLfloat radius1 =.03f;
    int triangleAmount1 = 20;
    GLfloat twicePi1 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(0,0,0);
        glVertex2f(x1, y1);
        for(j = 0; j <= triangleAmount1;j++) {
            glVertex2f(
                    x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
                y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
            );
        }
    glEnd();
    glPopMatrix();
    i-=0.02f;
    j-=0.02f;
    glFlush();
}
void display4(int val)
{
glutDisplayFunc(display5);
}

///***RAINY///***
void display3()
{
glClear(GL_COLOR_BUFFER_BIT);

///RIVER///
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(-2.0f, 0.80f);
    glVertex2f(2.0f, 0.80f);
    glVertex2f(2.0f, -2.0f);
    glVertex2f(-2.0f, -2.0f);
    glEnd();

///SHIP///
   glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.8f, 0.19f);
    glVertex2f(-1.2f, 0.19f);
    glVertex2f(-1.077f, 0.47f);
    glVertex2f(-1.19f, 0.29f);
    glVertex2f(-1.9f, 0.29f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(102, 255, 255);
    glVertex2f(-1.85f, 0.29f);
    glVertex2f(-1.25f, 0.29f);
    glVertex2f(-1.25f, 0.47f);
    glVertex2f(-1.85f, 0.47f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(71, 107, 107);
    glVertex2f(-1.8f, 0.47f);
    glVertex2f(-1.35f, 0.47f);
    glVertex2f(-1.35f, 0.61f);
    glVertex2f(-1.8f, 0.61f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(153, 102, 51);
    glVertex2f(-1.5f, 0.61f);
    glVertex2f(-1.6f, 0.61f);
    glVertex2f(-1.6f, 0.66f);
    glVertex2f(-1.5f, 0.66f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2f(-1.55f, 0.66f);
    glVertex2f(-1.55f, 0.72f);
    glVertex2f(-1.75f, 0.72f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(-1.8f, 0.44f);
    glVertex2f(-1.72f, 0.44f);
    glVertex2f(-1.72f, 0.35f);
    glVertex2f(-1.8f, 0.35f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(-1.62f, 0.44f);
    glVertex2f(-1.56f, 0.44f);
    glVertex2f(-1.56f, 0.35f);
    glVertex2f(-1.62f, 0.35f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(-1.40f, 0.44f);
    glVertex2f(-1.32f, 0.44f);
    glVertex2f(-1.32f, 0.35f);
    glVertex2f(-1.40f, 0.35f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(-1.7f, 0.48f);
    glVertex2f(-1.62f, 0.48f);
    glVertex2f(-1.62f, 0.58f);
    glVertex2f(-1.7f, 0.58f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(255, 255, 0);
    glVertex2f(-1.5f, 0.48f);
    glVertex2f(-1.42f, 0.48f);
    glVertex2f(-1.42f, 0.58f);
    glVertex2f(-1.5f, 0.58f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-1.85f, 0.29f);
    glVertex2f(-1.25f, 0.29f);
    glVertex2f(-1.25f, 0.47f);
    glVertex2f(-1.85f, 0.47f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(-1.25f, 0.29f);
    glVertex2f(-1.25f, 0.47f);
    glVertex2f(-1.85f, 0.47f);
    glVertex2f(-1.85f, 0.29f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-1.8f, 0.47f);
    glVertex2f(-1.35f, 0.47f);
    glVertex2f(-1.35f, 0.61f);
    glVertex2f(-1.8f, 0.61f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-1.35f, 0.47f);
    glVertex2f(-1.35f, 0.61f);
    glVertex2f(-1.8f, 0.61f);
    glVertex2f(-1.8f, 0.47f);
    glEnd();
    glPopMatrix();

///GROUND01///
    glBegin(GL_POLYGON);
	glColor3ub(0, 102, 0);
    glVertex2f(-0.7f,  -0.0f);
	glVertex2f(-2.0f,  -0.0f);
    glVertex2f(-2.0f,  -2.0f);
    glVertex2f(-0.7f,  -2.0f);
    glVertex2f(-0.5f,  -2.0f);
    glVertex2f(-0.28f,  -1.8f);
    glVertex2f(-0.7f,  -1.6f);
    glVertex2f(-0.7f,  -1.75f);
    glVertex2f(-0.3f,  -1.4f);
    glVertex2f(-0.3f,  -1.18f);
    glVertex2f(-0.7f,  -1.0f);
    glVertex2f(-0.7f,  -1.17f);
    glVertex2f(-0.24f,  -0.97f);
    glVertex2f(-0.7f,  -0.6f);
    glVertex2f(-0.7f,  -0.8f);
    glVertex2f(-0.38f,  -0.65f);
    glVertex2f(-0.7f,  -0.44f);
    glVertex2f(-0.7f,  -0.6f);
    glVertex2f(-0.3f,  -0.4f);
    glEnd();

///GROUND02///
    glBegin(GL_POLYGON);
	glColor3ub(0, 102, 0);
    glVertex2f(1.0f,  -0.6f);
	glVertex2f(2.0f,  -0.6f);
    glVertex2f(2.0f,  -2.0f);
    glVertex2f(1.0f,  -2.0f);
    glVertex2f(0.7f,  -2.0f);
    glVertex2f(0.7f,  -1.68f);
    glVertex2f(1.0f,  -1.9f);
    glVertex2f(1.0f,  -1.52f);
    glVertex2f(0.75f,  -1.3f);
    glVertex2f(1.0f,  -1.0f);
    glVertex2f(1.0f,  -1.1f);
    glVertex2f(0.7f,  -0.93f);
    glVertex2f(0.7f,  -0.8f);
    glEnd();

///SKY////
    glBegin(GL_POLYGON);
	glColor3ub(25, 102, 102);
	glVertex2f(0.0f, 0.8f);
	glVertex2f(2.0f,  0.8f);
	glVertex2f(2.0f,  2.0f);
	glVertex2f(0.0f, 2.0f);
    glVertex2f(-0.0f, 0.8f);
	glVertex2f(-2.0f,  0.8f);
	glVertex2f(-2.0f,  2.0f);
	glVertex2f(-0.0f, 2.0f);
    glEnd();

///HILL01///
    glBegin(GL_POLYGON);
	glColor3ub(0, 153, 0);
	glVertex2f(-1.5f,  0.8f);
	glVertex2f(-2.0f,  0.8f);
    glVertex2f(-1.97f, 0.90f);
    glVertex2f(-1.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0);
    glVertex2f(-1.53f, 0.90f);
    glVertex2f(-1.97f, 0.90f);
    glVertex2f(-1.85f, 1.05f);
    glVertex2f(-1.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(0, 153, 0);
    glVertex2f(-1.65f, 1.05f);
    glVertex2f(-1.85f, 1.05f);
    glVertex2f(-1.75f, 1.10f);
    glEnd();
///HILL02///
    glBegin(GL_POLYGON);
	glColor3ub(0, 153, 0);
	glVertex2f(-1.0f,  0.8f);
	glVertex2f(-1.5f,  0.8f);
    glVertex2f(-1.47f, 0.90f);
    glVertex2f(-1.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0);
    glVertex2f(-1.03f, 0.90f);
    glVertex2f(-1.47f, 0.90f);
    glVertex2f(-1.35f, 1.05f);
    glVertex2f(-1.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(0, 153, 0);
    glVertex2f(-1.15f, 1.05f);
    glVertex2f(-1.35f,1.05f);
    glVertex2f(-1.25f,1.10f);
    glEnd();
///HILL03//
    glBegin(GL_POLYGON);
	glColor3ub(0, 153, 0);
	glVertex2f(-0.5f,  0.8f);
	glVertex2f(-1.0f,  0.8f);
    glVertex2f(-0.97f, 0.90f);
    glVertex2f(-0.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.53f, 0.90f);
    glVertex2f(-0.97f, 0.90f);
    glVertex2f(-0.85f, 1.05f);
    glVertex2f(-0.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(0, 153, 0);
    glVertex2f(-0.65f, 1.05f);
    glVertex2f(-0.85f, 1.05f);
    glVertex2f(-0.75f, 1.10f);
    glEnd();
///HILL04///
    glBegin(GL_POLYGON);
	glColor3ub(0, 153, 0);
	glVertex2f(-0.0f,  0.8f);
	glVertex2f(-0.5f,  0.8f);
    glVertex2f(-0.47f, 0.90f);
    glVertex2f(-0.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.03f, 0.90f);
    glVertex2f(-0.47f, 0.90f);
    glVertex2f(-0.35f, 1.05f);
    glVertex2f(-0.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(0, 153, 0);
    glVertex2f(-0.15f, 1.05f);
    glVertex2f(-0.35f,1.05f);
    glVertex2f(-0.25f,1.10f);
    glEnd();
///HILL05//
    glBegin(GL_POLYGON);
	glColor3ub(0, 153, 0);
	glVertex2f(1.5f,  0.8f);
	glVertex2f(2.0f,  0.8f);
    glVertex2f(1.97f, 0.90f);
    glVertex2f(1.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0);
    glVertex2f(1.53f, 0.90f);
    glVertex2f(1.97f, 0.90f);
    glVertex2f(1.85f, 1.05f);
    glVertex2f(1.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(0, 153, 0);
    glVertex2f(1.65f, 1.05f);
    glVertex2f(1.85f, 1.05f);
    glVertex2f(1.75f, 1.10f);
    glEnd();
///HILL06//
    glBegin(GL_POLYGON);
	glColor3ub(0, 153, 0);
	glVertex2f(1.0f,  0.8f);
	glVertex2f(1.5f,  0.8f);
    glVertex2f(1.47f, 0.90f);
    glVertex2f(1.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0);
    glVertex2f(1.03f, 0.90f);
    glVertex2f(1.47f, 0.90f);
    glVertex2f(1.35f, 1.05f);
    glVertex2f(1.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(0, 153, 0);
    glVertex2f(1.15f, 1.05f);
    glVertex2f(1.35f,1.05f);
    glVertex2f(1.25f,1.10f);
    glEnd();
///HILL07//
    glBegin(GL_POLYGON);
	glColor3ub(0, 153, 0);
	glVertex2f(0.5f,  0.8f);
	glVertex2f(1.0f,  0.8f);
    glVertex2f(0.97f, 0.90f);
    glVertex2f(0.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0);
    glVertex2f(0.53f, 0.90f);
    glVertex2f(0.97f, 0.90f);
    glVertex2f(0.85f, 1.05f);
    glVertex2f(0.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(0, 153, 0);
    glVertex2f(0.65f, 1.05f);
    glVertex2f(0.85f, 1.05f);
    glVertex2f(0.75f, 1.10f);
    glEnd();
///HILL08//
    glBegin(GL_POLYGON);
	glColor3ub(0, 153, 0);
	glVertex2f(0.0f,  0.8f);
	glVertex2f(0.5f,  0.8f);
    glVertex2f(0.47f, 0.90f);
    glVertex2f(0.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0);
    glVertex2f(0.03f, 0.90f);
    glVertex2f(0.47f, 0.90f);
    glVertex2f(0.35f, 1.05f);
    glVertex2f(0.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(0, 153, 0);
    glVertex2f(0.15f, 1.05f);
    glVertex2f(0.35f,1.05f);
    glVertex2f(0.25f,1.10f);
    glEnd();

///TREE01///
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(0.91f, -0.1f);//height
    glVertex2f(0.91f, -0.7f);
    glVertex2f(0.94f, -0.7f);//height
    glVertex2f(0.94f, -0.1f);
    glEnd();

///TREE02///
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(1.14f, -0.0f);//height
    glVertex2f(1.14f, -0.7f);
    glVertex2f(1.17f, -0.7f);//height
    glVertex2f(1.17f, -0.0f);
    glEnd();

///TREE03///
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(1.81f, -0.0f);//height
    glVertex2f(1.81f, -0.7f);
    glVertex2f(1.84f, -0.7f);//height
    glVertex2f(1.84f, -0.0f);
    glEnd();


///LEAF01///
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0 );
    glVertex2f(0.80f, -0.1f);//height
    glVertex2f(1.05f, -0.1f);
    glVertex2f(0.925f, 0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0 );
    glVertex2f(0.85f, 0.1f);//height
    glVertex2f(1.00f, 0.1f);
    glVertex2f(0.925f, 0.4f);
    glEnd();
///LEAF02///
    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51 );
    glVertex2f(1.03f, -0.0f);//height
    glVertex2f(1.28f, -0.0f);
    glVertex2f(1.155f, 0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51 );
    glVertex2f(1.06f, 0.1f);//height
    glVertex2f(1.25f, 0.1f);
    glVertex2f(1.155f, 0.4f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51 );
	glVertex2f(1.08f, 0.2f);
	glVertex2f(1.23f, 0.2f);
	glVertex2f(1.155f, 0.5f);
	glEnd();
///LEAF03///
     glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0 );
    glVertex2f(1.70f, -0.0f);//height
    glVertex2f(1.95f, -0.0f);
    glVertex2f(1.825f, 0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0 );
    glVertex2f(1.74f, 0.1f);//height
    glVertex2f(1.91f, 0.1f);
    glVertex2f(1.825f, 0.4f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0 );
	glVertex2f(1.76f, 0.2f);
	glVertex2f(1.89f, 0.2f);
	glVertex2f(1.825f, 0.5f);
	glEnd();

///FENCE01///
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 102);
    glVertex2f(1.7f, -0.6f);//width
    glVertex2f(2.0f, -0.60f);
    glVertex2f(2.0f, -0.60f);
    glVertex2f(1.7f, -0.6f);
    glVertex2f(1.7f, -0.5f);//width
    glVertex2f(2.0f, -0.50f);
    glVertex2f(2.0f, -0.50f);
    glVertex2f(1.7f, -0.5f);
    glVertex2f(1.7f, -0.7f);//width
    glVertex2f(2.0f, -0.70f);
    glVertex2f(2.0f, -0.70f);
    glVertex2f(1.7f, -0.7f);

    glVertex2f(1.76f, -0.5f);//height
    glVertex2f(1.76f, -0.7f);
    glVertex2f(1.78f, -0.7f);
    glVertex2f(1.78f, -0.5f);
    glVertex2f(1.86f, -0.5f);//height
    glVertex2f(1.86f, -0.7f);
    glVertex2f(1.88f, -0.7f);
    glVertex2f(1.88f, -0.5f);
    glVertex2f(1.96f, -0.5f);//height
    glVertex2f(1.96f, -0.7f);
    glVertex2f(1.98f, -0.7f);
    glVertex2f(1.98f, -0.5f);
    glEnd();
///FENCE02///
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 102);
    glVertex2f(0.9f, -0.6f);//width
    glVertex2f(1.2f, -0.60f);
    glVertex2f(1.2f, -0.60f);
    glVertex2f(0.9f, -0.6f);
    glVertex2f(0.9f, -0.5f);//width
    glVertex2f(1.2f, -0.50f);
    glVertex2f(1.2f, -0.50f);
    glVertex2f(0.9f, -0.5f);
    glVertex2f(0.9f, -0.7f);//width
    glVertex2f(1.2f, -0.70f);
    glVertex2f(1.2f, -0.70f);
    glVertex2f(0.9f, -0.7f);

    glVertex2f(0.96f, -0.5f);//height
    glVertex2f(0.96f, -0.7f);
    glVertex2f(0.98f, -0.7f);
    glVertex2f(0.98f, -0.5f);
    glVertex2f(1.06f, -0.5f);//height
    glVertex2f(1.06f, -0.7f);
    glVertex2f(1.08f, -0.7f);
    glVertex2f(1.08f, -0.5f);
    glVertex2f(1.16f, -0.5f);//height
    glVertex2f(1.16f, -0.7f);
    glVertex2f(1.18f, -0.7f);
    glVertex2f(1.18f, -0.5f);
    glEnd();

///HOUSE///
    glBegin(GL_QUADS);
    glColor3ub(255, 204, 255);///house body01
    glVertex2f(-0.9f, 0.1f);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-1.3f, -0.3f);
    glVertex2f(-1.3f, 0.1f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(204, 0, 0);///house upper part01
    glVertex2f(-1.0f, 0.4f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-1.5f, 0.1f);
    glVertex2f(-1.3f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0); ///house door01
    glVertex2f(-1.0f, -0.0f);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.1f, -0.3f);
    glVertex2f(-1.1f, -0.0f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);///house window01
    glVertex2f(-1.15f, -0.1f);
    glVertex2f(-1.15f, -0.20f);
    glVertex2f(-1.25f, -0.20f);
    glVertex2f(-1.25f, -0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-0.9f, 0.1f);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-1.3f, -0.3f);
    glVertex2f(-1.3f, 0.1f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
     glColor3ub(144,238,144);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-1.3f, -0.3f);
    glVertex2f(-1.3f, 0.1f);
    glVertex2f(-0.9f, 0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.0f, 0.4f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-1.5f, 0.1f);
    glVertex2f(-1.3f, 0.4f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-1.5f, 0.1f);
    glVertex2f(-1.3f, 0.4f);
    glVertex2f(-1.0f, 0.4f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.0f, -0.0f);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.1f, -0.3f);
    glVertex2f(-1.1f, -0.0f);
    glVertex2f(-1.05f, -0.0f);
    glVertex2f(-1.05f, -0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.1f, -0.3f);
    glVertex2f(-1.1f, -0.0f);
    glVertex2f(-1.0f, -0.0f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.15f, -0.1f);
    glVertex2f(-1.15f, -0.20f);
    glVertex2f(-1.25f, -0.20f);
    glVertex2f(-1.25f, -0.1f);
    glVertex2f(-1.20f, -0.1f);
    glVertex2f(-1.20f, -0.20f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.15f, -0.20f);
    glVertex2f(-1.25f, -0.20f);
    glVertex2f(-1.25f, -0.1f);
    glVertex2f(-1.15f, -0.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 102, 0);///house body02
    glVertex2f(-1.3f, -0.0f);
    glVertex2f(-1.8f, -0.0f);
    glVertex2f(-1.8f, -0.5f);
    glVertex2f(-1.3f, -0.5f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 68, 0);///house door02
    glVertex2f(-1.6f, -0.1f);
    glVertex2f(-1.7f, -0.1f);
    glVertex2f(-1.7f, -0.5f);
    glVertex2f(-1.6f, -0.5f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 68, 0);///house window02
    glVertex2f(-1.4f, -0.2f);
    glVertex2f(-1.5f, -0.2f);
    glVertex2f(-1.5f, -0.3f);
    glVertex2f(-1.4f, -0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 204);/// house upper part02
    glVertex2f(-1.2f, 0.0f);
    glVertex2f(-1.9f, 0.0f);
    glVertex2f(-1.7f, 0.3f);
    glVertex2f(-1.4f, 0.3f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.3f,-0.0f);
    glVertex2f(-1.8f,-0.0f);
    glVertex2f(-1.8f, -0.5f);
    glVertex2f(-1.3f, -0.5f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.8f,-0.0f);
    glVertex2f(-1.8f,-0.5f);
    glVertex2f(-1.3f,-0.5f);
    glVertex2f(-1.3f,-0.0f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.2f,0.0f);
    glVertex2f(-1.9f,0.0f);
    glVertex2f(-1.7f,0.3f);
    glVertex2f(-1.4f,0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.9f,0.0f);
    glVertex2f(-1.7f,0.3f);
    glVertex2f(-1.4f,0.3f);
    glVertex2f(-1.2f,0.0f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.6f,-0.1f);
    glVertex2f(-1.70f,-0.1f);
    glVertex2f(-1.70f,-0.5f);
    glVertex2f(-1.6f,-0.5f);
    glVertex2f(-1.65f,-0.1f);
    glVertex2f(-1.65f,-0.5f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.70f,-0.1f);
    glVertex2f(-1.70f,-0.5f);
    glVertex2f(-1.6f,-0.5f);
    glVertex2f(-1.6f,-0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.4f,-0.2f);
    glVertex2f(-1.5f,-0.2f);
    glVertex2f(-1.5f,-0.3f);
    glVertex2f(-1.4f,-0.3f);
    glVertex2f(-1.45f,-0.2f);
    glVertex2f(-1.45f,-0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.5f,-0.2f);
    glVertex2f(-1.5f,-0.3f);
    glVertex2f(-1.4f,-0.3f);
    glVertex2f(-1.4f,-0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);///house body03
    glVertex2f(1.2f, -0.3f);
    glVertex2f(1.2f, -0.8f);
    glVertex2f(1.7f, -0.8f);
    glVertex2f(1.7f, -0.3f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.2f, -0.3f);
    glVertex2f(1.2f, -0.8f);
    glVertex2f(1.7f, -0.8f);
    glVertex2f(1.7f, -0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.2f, -0.8f);
    glVertex2f(1.7f, -0.8f);
    glVertex2f(1.7f, -0.3f);
    glVertex2f(1.2f, -0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 102);///house upper part03
    glVertex2f(1.3f, -0.1f);
    glVertex2f(1.1f, -0.4f);
    glVertex2f(1.8f, -0.4f);
    glVertex2f(1.6f, -0.1f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);///house window03
    glVertex2f(1.3f, -0.6f);
    glVertex2f(1.3f, -0.7f);
    glVertex2f(1.4f, -0.7f);
    glVertex2f(1.4f, -0.6f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);///house door03
    glVertex2f(1.5f, -0.5f);
    glVertex2f(1.5f, -0.8f);
    glVertex2f(1.6f, -0.8f);
    glVertex2f(1.6f, -0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.3f, -0.1f);
    glVertex2f(1.1f, -0.4f);
    glVertex2f(1.8f, -0.4f);
    glVertex2f(1.6f, -0.1f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.1f, -0.4f);
    glVertex2f(1.8f, -0.4f);
    glVertex2f(1.6f, -0.1f);
    glVertex2f(1.3f, -0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.3f, -0.6f);
    glVertex2f(1.3f, -0.7f);
    glVertex2f(1.4f, -0.7f);
    glVertex2f(1.4f, -0.6f);
    glVertex2f(1.35f, -0.6f);
    glVertex2f(1.35f, -0.7f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.3f, -0.7f);
    glVertex2f(1.4f, -0.7f);
    glVertex2f(1.4f, -0.6f);
    glVertex2f(1.3f, -0.6f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.5f, -0.5f);
    glVertex2f(1.5f, -0.8f);
    glVertex2f(1.6f, -0.8f);
    glVertex2f(1.6f, -0.5f);
    glVertex2f(1.55f, -0.5f);
    glVertex2f(1.55f, -0.8f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.5f, -0.8f);
    glVertex2f(1.6f, -0.8f);
    glVertex2f(1.6f, -0.5f);
    glVertex2f(1.5f, -0.5f);
    glEnd();

///GRASS01///
    glBegin(GL_POLYGON);
    glColor3ub(0, 204, 0);
    glVertex2f(-1.89f, -0.5f);
	glVertex2f(-1.86f, -0.450f);
	glVertex2f(-1.84f, -0.150f);
	glVertex2f(-1.87f, -0.350f);
	glVertex2f(-1.89f, -0.5f);
	glVertex2f(-1.92f, -0.450f);
	glVertex2f(-1.94f, -0.150f);
	glVertex2f(-1.91f, -0.350f);
    glVertex2f(-1.89f, -0.5f);
	glVertex2f(-1.88f, -0.350f);
	glVertex2f(-1.89f, -0.150f);
	glVertex2f(-1.90f, -0.350f);
    glEnd();
///GRASS02///
    glBegin(GL_POLYGON);
    glColor3ub(102, 153, 0);
    glVertex2f(-0.90f, -0.6f);
	glVertex2f(-0.87f, -0.550f);
	glVertex2f(-0.85f, -0.250f);
	glVertex2f(-0.88f, -0.450f);
	glVertex2f(-0.90f, -0.6f);
	glVertex2f(-0.89f, -0.550f);
	glVertex2f(-0.90f, -0.250f);
	glVertex2f(-0.91f, -0.450f);
	glVertex2f(-0.90f, -0.6f);
	glVertex2f(-0.93f, -0.550f);
	glVertex2f(-0.95f, -0.250f);
	glVertex2f(-0.92f, -0.450f);
	glEnd();
///GRASS03///
    glBegin(GL_POLYGON);
    glColor3ub(0, 204, 0);
    glVertex2f(-0.60f, -0.5f);
	glVertex2f(-0.57f, -0.450f);
	glVertex2f(-0.55f, -0.150f);
	glVertex2f(-0.58f, -0.350f);
	glVertex2f(-0.60f, -0.5f);
	glVertex2f(-0.59f, -0.450f);
	glVertex2f(-0.60f, -0.150f);
	glVertex2f(-0.61f, -0.350f);
	glVertex2f(-0.60f, -0.5f);
	glVertex2f(-0.63f, -0.450f);
	glVertex2f(-0.65f, -0.150f);
	glVertex2f(-0.62f, -0.350f);
	glEnd();
///GRASS04///
	glBegin(GL_POLYGON);
    glColor3ub(102, 153, 0);
    glVertex2f(-0.79f, -0.57f);
	glVertex2f(-0.76f, -0.450f);
	glVertex2f(-0.74f, -0.150f);
	glVertex2f(-0.78f, -0.350f);
	glVertex2f(-0.79f, -0.57f);
	glVertex2f(-0.78f, -0.450f);
	glVertex2f(-0.79f, -0.150f);
	glVertex2f(-0.80f, -0.350f);
	glVertex2f(-0.79f, -0.57f);
	glVertex2f(-0.82f, -0.450f);
	glVertex2f(-0.84f, -0.150f);
	glVertex2f(-0.81f, -0.350f);
	glEnd();
///GRASS05///
	glBegin(GL_POLYGON);
    glColor3ub(0, 204, 0);
    glVertex2f(-0.69f, -0.53f);
	glVertex2f(-0.66f, -0.450f);
	glVertex2f(-0.64f, -0.150f);
	glVertex2f(-0.68f, -0.350f);
	glVertex2f(-0.69f, -0.53f);
	glVertex2f(-0.68f, -0.450f);
	glVertex2f(-0.69f, -0.150f);
	glVertex2f(-0.70f, -0.350f);
	glVertex2f(-0.69f, -0.53f);
	glVertex2f(-0.72f, -0.450f);
	glVertex2f(-0.74f, -0.150f);
	glVertex2f(-0.71f, -0.350f);
	glEnd();

///WALKING ROAD///
    glBegin(GL_POLYGON);
	glColor3ub(153, 153, 102);
	glVertex2f(-1.73f, -0.5f);
	glVertex2f(-1.57f, -0.5f);
	glVertex2f(-1.45f, -1.3f);
	glVertex2f(-1.61f, -1.3f);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(-1.45f, -1.3f);
	glVertex2f(-1.61f, -1.3f);
	glVertex2f(-1.01f, -2.0f);
	glVertex2f(-1.18f, -2.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-1.45f, -1.3f);
	glVertex2f(-1.61f, -1.3f);
	glVertex2f(-1.01f, -2.0f);
	glVertex2f(-1.18f, -2.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(153, 153, 102);
	glVertex2f(-0.98f, -0.3f);
	glVertex2f(-1.14f, -0.3f);
	glVertex2f(-1.26f, -1.85f);
	glVertex2f(-1.1f, -1.85f);
	glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(153, 153, 102);
	glVertex2f(1.48f, -0.8f);
	glVertex2f(1.61f, -0.8f);
	glVertex2f(1.83f, -2.0f);
	glVertex2f(1.70f, -2.0f);
	glEnd();

///BOAT01///
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f,  -1.01f);
    glVertex2f(-0.2f, -1.01f);
    glVertex2f(-0.2f, -1.08f);
    glVertex2f(0.1f,  -1.08f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(122, 122, 82);
    glVertex2f(0.2f, -0.93f);
    glVertex2f(0.1f, -1.01f);
    glVertex2f(-0.2f, -1.01f);
    glVertex2f(-0.3f, -0.93f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(0.1f, -0.91f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);///boat01///
    glVertex2f(0.1f, -1.01f);
    glVertex2f(0.2f, -0.93f);
    glVertex2f(0.1f, -1.08f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);///boat01///
    glVertex2f(-0.2f, -1.01f);
    glVertex2f(-0.3f, -0.93f);
    glVertex2f(-0.2f, -1.08f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f, -0.91f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(0.1f, -0.91f);
    glVertex2f(0.2f, -0.93f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(-0.3f, -0.93f);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f, -0.91f);
    glVertex2f(0.1f, -1.01f);
    glVertex2f(0.0f, -0.91f);
    glVertex2f(0.0f, -1.01f);
    glVertex2f(-0.1f, -0.91f);
    glVertex2f(-0.1f, -1.01f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(-0.2f, -1.01f);
    glEnd();
    glPushMatrix();

///BOAT02///
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(-0.2f,-0.75f);
    glVertex2f(-0.2f,-0.82f);
    glVertex2f(0.1f, -0.82f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(122, 122, 82);
    glVertex2f(0.2f, -0.67f);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(-0.2f,-0.75f);
    glVertex2f(-0.3f,-0.67f);
    glVertex2f(-0.2f,-0.65f);
    glVertex2f(0.1f, -0.65f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);///boat02///
    glVertex2f(0.1f, -0.75f);
    glVertex2f(0.2f, -0.67f);
    glVertex2f(0.1f, -0.82f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);///boat2///
    glVertex2f(-0.2f, -0.75f);
    glVertex2f(-0.3f, -0.67f);
    glVertex2f(-0.2f, -0.82f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f,  -0.65f);
    glVertex2f(-0.2f, -0.65f);
    glVertex2f(0.1f,  -0.65f);
    glVertex2f(0.2f,  -0.67f);
    glVertex2f(-0.2f, -0.65f);
    glVertex2f(-0.3f, -0.67f);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f, - 0.65f);
    glVertex2f(0.1f, - 0.75f);
    glVertex2f(0.0f, - 0.65f);
    glVertex2f(0.0f,  -0.75f);
    glVertex2f(-0.1f, -0.65f);
    glVertex2f(-0.1f, -0.75f);
    glVertex2f(-0.2f, -0.65f);
    glVertex2f(-0.2f, -0.75f);
    glEnd();
    glPopMatrix();

///SUN///
        int m;
        GLfloat x4=-1.66f; GLfloat y4=1.8f; GLfloat radius4 =.12f;
    int triangleAmount4 = 20;
    GLfloat twicePi4 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 102);
        glVertex2f(x4, y4);
        for(m = 0; m <= triangleAmount4;m++) {
            glVertex2f(
                    x4 + (radius4 * cos(m *  twicePi4 / triangleAmount4)),
                y4 + (radius4 * sin(m * twicePi4 / triangleAmount4))
            );
        }
   glEnd();

///CLOUD01///
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(-0.45f, 1.65f);
    glVertex2f(-0.45f, 1.80f);
    glVertex2f(-1.0f, 1.80f);
    glVertex2f(-1.0f, 1.65f);
    glEnd();
    int n;
        GLfloat x5=-0.45f; GLfloat y5=1.73f; GLfloat radius5 =.09f;
    int triangleAmount5 = 20;
    GLfloat twicePi5 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 204, 204);
        glVertex2f(x5, y5);
        for(n = 0; n <= triangleAmount5;n++) {
            glVertex2f(
                    x5 + (radius5 * cos(n *  twicePi5 / triangleAmount5)),
                y5 + (radius5 * sin(n * twicePi5 / triangleAmount5))
            );
        }

    glEnd();

    int o;
        GLfloat x6=-1.0f; GLfloat y6=1.73f; GLfloat radius6 =.15f;
    int triangleAmount6 = 20;
    GLfloat twicePi6 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 204, 204);
        glVertex2f(x6, y6);
        for(o = 0; o <= triangleAmount6;o++) {
            glVertex2f(
                    x6 + (radius6 * cos(o *  twicePi6 / triangleAmount6)),
                y6 + (radius6 * sin(o * twicePi6 / triangleAmount6))
            );
        }
  glEnd();

  int p;
        GLfloat x7=-0.55f; GLfloat y7=1.79f; GLfloat radius7 =.07f;
    int triangleAmount7 = 20;
    GLfloat twicePi7 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 204, 204);
        glVertex2f(x7, y7);
        for(p = 0; p <= triangleAmount6;p++) {
            glVertex2f(
                    x7 + (radius7 * cos(p *  twicePi7 / triangleAmount7)),
                y7 + (radius7 * sin(p * twicePi7 / triangleAmount7))
            );
        }
  glEnd();

  int q;
        GLfloat x8=-0.7f; GLfloat y8=1.80f; GLfloat radius8 =.12f;
    int triangleAmount8 = 20;
    GLfloat twicePi8 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 204, 204);
        glVertex2f(x8, y8);
        for(q = 0; q <= triangleAmount6;q++) {
            glVertex2f(
                    x8 + (radius8 * cos(q *  twicePi8 / triangleAmount8)),
                y8 + (radius8 * sin(q * twicePi8 / triangleAmount8))
            );
        }
  glEnd();

   int r;
        GLfloat x9=-0.85f; GLfloat y9=1.73f; GLfloat radius9 =.10f;
    int triangleAmount9 = 20;
    GLfloat twicePi9 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 204, 204);
        glVertex2f(x9, y9);
        for(r = 0; r <= triangleAmount6;r++) {
            glVertex2f(
                    x9 + (radius9 * cos(r *  twicePi9 / triangleAmount9)),
                y9 + (radius9 * sin(r * twicePi9 / triangleAmount9))
            );
        }
  glEnd();

   int s;
        GLfloat x10=-0.69f; GLfloat y10=1.69f; GLfloat radius10 =.14f;
    int triangleAmount10 = 20;
    GLfloat twicePi10 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(204, 204, 204);
        glVertex2f(x10, y10);
        for(s = 0; s <= triangleAmount6;s++) {
            glVertex2f(
                    x10 + (radius10 * cos(s *  twicePi10 / triangleAmount10)),
                y10 + (radius10 * sin(s * twicePi10 / triangleAmount10))
            );
        }
  glEnd();

   int t;
        GLfloat x11=-0.53f; GLfloat y11=1.69f; GLfloat radius11 =.12f;
    int triangleAmount11 = 20;
    GLfloat twicePi11 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(204, 204, 204);
        glVertex2f(x11, y11);
        for(t = 0; t <= triangleAmount6;t++) {
            glVertex2f(
                    x11 + (radius11 * cos(t *  twicePi11 / triangleAmount11)),
                y11 + (radius11 * sin(t * twicePi11 / triangleAmount11))
            );
        }
  glEnd();

///CLOUD02///
    glPushMatrix();
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(0.45f, 1.65f);
    glVertex2f(0.45f, 1.80f);
    glVertex2f(1.0f, 1.80f);
    glVertex2f(1.0f, 1.65f);
    glEnd();
    int n1;
        GLfloat x51=0.45f; GLfloat y51=1.73f; GLfloat radius51 =.09f;
    int triangleAmount51= 20;
    GLfloat twicePi51 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(204, 204, 204);
        glVertex2f(x51, y51);
        for(n1 = 0; n1 <= triangleAmount5;n1++) {
            glVertex2f(
                    x51 + (radius51 * cos(n1 *  twicePi51 / triangleAmount51)),
                y51 + (radius51 * sin(n1 * twicePi51 / triangleAmount51))
            );
        }

    glEnd();

    int o1;
        GLfloat x61=1.0f; GLfloat y61=1.73f; GLfloat radius61 =.15f;
    int triangleAmount61 = 20;
    GLfloat twicePi61 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(204, 204, 204);
        glVertex2f(x61, y61);
        for(o1 = 0; o1 <= triangleAmount61;o1++) {
            glVertex2f(
                    x61 + (radius61 * cos(o1 *  twicePi61 / triangleAmount61)),
                y61 + (radius61 * sin(o1 * twicePi61 / triangleAmount61))
            );
        }
  glEnd();

  int p1;
        GLfloat x71=0.55f; GLfloat y71=1.79f; GLfloat radius71 =.07f;
    int triangleAmount71 = 20;
    GLfloat twicePi71 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(204, 204, 204);
        glVertex2f(x71, y71);
        for(p1 = 0; p1 <= triangleAmount61;p1++) {
            glVertex2f(
                    x71 + (radius71 * cos(p1 *  twicePi71 / triangleAmount71)),
                y71 + (radius71 * sin(p1 * twicePi71 / triangleAmount71))
            );
        }
  glEnd();

  int q1;
        GLfloat x81=0.7f; GLfloat y81=1.80f; GLfloat radius81 =.12f;
    int triangleAmount81 = 20;
    GLfloat twicePi81 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(204, 204, 204);
        glVertex2f(x81, y81);
        for(q1 = 0; q1 <= triangleAmount61;q1++) {
            glVertex2f(
                    x81 + (radius81 * cos(q1 *  twicePi81 / triangleAmount81)),
                y81 + (radius81 * sin(q1 * twicePi81 / triangleAmount81))
            );
        }
  glEnd();

   int r1;
        GLfloat x91=0.85f; GLfloat y91=1.73f; GLfloat radius91 =.10f;
    int triangleAmount91 = 20;
    GLfloat twicePi91 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(204, 204, 204);
        glVertex2f(x91, y91);
        for(r1 = 0; r1 <= triangleAmount61;r1++) {
            glVertex2f(
                    x91 + (radius91 * cos(r1 *  twicePi91 / triangleAmount91)),
                y91 + (radius91 * sin(r1 * twicePi91 / triangleAmount91))
            );
        }
  glEnd();

   int s1;
        GLfloat x101=0.69f; GLfloat y101=1.69f; GLfloat radius101 =.14f;
    int triangleAmount101 = 20;
    GLfloat twicePi101 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(204, 204, 204);
        glVertex2f(x101, y101);
        for(s1 = 0; s1 <= triangleAmount6;s1++) {
            glVertex2f(
                    x101 + (radius101 * cos(s1 *  twicePi101 / triangleAmount101)),
                y101 + (radius101 * sin(s1 * twicePi101 / triangleAmount101))
            );
        }
  glEnd();

   int t1;
        GLfloat x111=0.53f; GLfloat y111=1.69f; GLfloat radius111 =.12f;
    int triangleAmount111 = 20;
    GLfloat twicePi111 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(204, 204, 204);
        glVertex2f(x111, y111);
        for(t1 = 0; t1 <= triangleAmount6;t1++) {
            glVertex2f(
                    x111 + (radius111 * cos(t1 *  twicePi111 / triangleAmount111)),
                y111 + (radius111 * sin(t1 * twicePi111 / triangleAmount111))
            );
        }
  glEnd();

    glPopMatrix();

///CLOUD03///
    int u;
        GLfloat x12=-0.1f; GLfloat y12=1.33f; GLfloat radius12 =.09f;
    int triangleAmount12 = 20;
    GLfloat twicePi12 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(204, 204, 204);
        glVertex2f(x12, y12);
        for(u = 0; u <= triangleAmount5;u++) {
            glVertex2f(
                    x12 + (radius12 * cos(u *  twicePi12 / triangleAmount12)),
                y12 + (radius12 * sin(u * twicePi12 / triangleAmount12))
            );
        }

    glEnd();

    int v;
        GLfloat x13=-0.2f; GLfloat y13=1.27f; GLfloat radius13 =.12f;
    int triangleAmount13 = 20;
    GLfloat twicePi13 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(204, 204, 204);
        glVertex2f(x13, y13);
        for(v = 0; v <= triangleAmount6;v++) {
            glVertex2f(
                    x13 + (radius13 * cos(v *  twicePi13 / triangleAmount11)),
                y13 + (radius13 * sin(v * twicePi13 / triangleAmount13))
            );
        }
  glEnd();

  int w;
        GLfloat x14=-0.33f; GLfloat y14=1.29f; GLfloat radius14 =.09f;
    int triangleAmount14 = 20;
    GLfloat twicePi14 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(204, 204, 204);
        glVertex2f(x14, y14);
        for(w = 0; w <= triangleAmount6;w++) {
            glVertex2f(
                    x14 + (radius14 * cos(w *  twicePi14 / triangleAmount14)),
                y14 + (radius14 * sin(w * twicePi14 / triangleAmount14))
            );
        }
  glEnd();

///CLOUD04///
   glPushMatrix();
   glTranslatef(position7,0.0f, 0.0f);

  int d;
        GLfloat x153=1.8f; GLfloat y153=1.33f; GLfloat radius153 =.09f;
    int triangleAmount153 = 20;
    GLfloat twicePi153 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(214, 214, 194);
        glVertex2f(x153, y153);
        for(d = 0; d <= triangleAmount6;d++) {
            glVertex2f(
                    x153 + (radius153 * cos(d *  twicePi153 / triangleAmount153)),
                y153 + (radius153* sin(d * twicePi153 / triangleAmount153))
            );
        }
  glEnd();

   int e;
        GLfloat x16=1.7f; GLfloat y16=1.34f; GLfloat radius16 =.12f;
    int triangleAmount16 = 20;
    GLfloat twicePi16 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(214, 214, 194);
        glVertex2f(x16, y16);
        for(e = 0; e <= triangleAmount6;e++) {
            glVertex2f(
                    x16 + (radius16 * cos(e *  twicePi16 / triangleAmount16)),
                y16 + (radius16 * sin(e * twicePi16 / triangleAmount16))
            );
        }
  glEnd();

   int z;
        GLfloat x17=1.6f; GLfloat y17=1.33f; GLfloat radius17 =.09f;
    int triangleAmount17 = 20;
    GLfloat twicePi17 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(214, 214, 194);
        glVertex2f(x17, y17);
        for(z = 0; z <= triangleAmount6;z++) {
            glVertex2f(
                    x17 + (radius17 * cos(z *  twicePi17 / triangleAmount17)),
                y17 + (radius17 * sin(z * twicePi17 / triangleAmount17))
            );
        }
  glEnd();
  glPopMatrix();

///BIRD01///
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(204, 102, 0);
    glVertex2f(-1.8f,  1.55f);
    glVertex2f(-1.7f,  1.65f);
    glVertex2f(-1.95f, 1.63f);
    glVertex2f(-1.9f, 1.53f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-1.78f,1.641f);
    glVertex2f(-1.88f,1.8f);
    glVertex2f(-1.85f,1.639f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-1.78f,1.641f);
    glVertex2f(-1.91f,1.75f);
    glVertex2f(-1.87f,1.639f);
    glEnd();

    glPointSize( 2.5 );
    glBegin(GL_POINTS);
    glColor3ub(0,0,0);
    glVertex2f(-01.74f,1.635f);
    glEnd();
    glPopMatrix();
///BIRD02///
    glPushMatrix();
    glTranslatef(position5,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(230, 115, 0);
    glVertex2f(-1.5f,  1.35f);
    glVertex2f(-1.4f,  1.45f);
    glVertex2f(-1.65f, 1.43f);
    glVertex2f(-1.6f, 1.33f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-1.48f,1.441f);
    glVertex2f(-1.58f,1.6f);
    glVertex2f(-1.55f,1.439f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-1.48f,1.441f);
    glVertex2f(-1.61f,1.55f);
    glVertex2f(-1.57f,1.439f);
    glEnd();

    glPointSize( 2.5 );
    glBegin(GL_POINTS);
    glColor3ub(0,0,0);
    glVertex2f(-01.44f,1.435f);
    glEnd();
    glPopMatrix();

///HIGHWAY///
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(2.0f, -2.0f);
    glVertex2f(2.0f, -1.25f);
    glVertex2f(-2.0f, -1.25f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);///LINES///
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(2.0f, -2.0f);
    glVertex2f(2.0f, -1.25f);
    glVertex2f(-2.0f, -1.25f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(0.2f, -1.60f);
    glVertex2f(0.4f, -1.60f);
    glVertex2f(0.4f, -1.64f);
    glVertex2f(0.2f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(0.6f, -1.60f);
    glVertex2f(0.8f, -1.60f);
    glVertex2f(0.8f, -1.64f);
    glVertex2f(0.6f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(1.0f, -1.60f);
    glVertex2f(1.2f, -1.60f);
    glVertex2f(1.2f, -1.64f);
    glVertex2f(1.0f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(1.4f, -1.60f);
    glVertex2f(1.6f, -1.60f);
    glVertex2f(1.6f, -1.64f);
    glVertex2f(1.4f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(1.8f, -1.60f);
    glVertex2f(2.0f, -1.60f);
    glVertex2f(2.0f, -1.64f);
    glVertex2f(1.8f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-0.0f, -1.60f);
    glVertex2f(-0.2f, -1.60f);
    glVertex2f(-0.2f, -1.64f);
    glVertex2f(-0.0f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-0.4f, -1.60f);
    glVertex2f(-0.6f, -1.60f);
    glVertex2f(-0.6f, -1.64f);
    glVertex2f(-0.4f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-0.8f, -1.60f);
    glVertex2f(-1.0f, -1.60f);
    glVertex2f(-1.0f, -1.64f);
    glVertex2f(-0.8f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-1.2f, -1.60f);
    glVertex2f(-1.4f, -1.60f);
    glVertex2f(-1.4f, -1.64f);
    glVertex2f(-1.2f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-1.6f, -1.60f);
    glVertex2f(-1.8f, -1.60f);
    glVertex2f(-1.8f, -1.64f);
    glVertex2f(-1.6f, -1.64f);
    glEnd();

///CAR01///
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glRotatef(k,position,0.0,0.1);
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 153);
    glVertex2f(1.7f, -1.91f);
    glVertex2f(1.8f, -1.91f);
    glVertex2f(2.0f, -1.91f);
    glVertex2f(2.0f, -1.78f);
    glVertex2f(1.8f, -1.78f);
    glVertex2f(1.7f, -1.86f);
    glEnd();
  int k;
        GLfloat x2=1.92f; GLfloat y2=-1.91f; GLfloat radius2 =.03f;
    int triangleAmount2 = 20;
    GLfloat twicePi2 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(0, 0, 0);
        glVertex2f(x2, y2);
        for(k = 0; k <= triangleAmount2;k++) {
            glVertex2f(
                    x2 + (radius2 * cos(k *  twicePi2 / triangleAmount2)),
                y2 + (radius2 * sin(k * twicePi2 / triangleAmount2))
            );
        }
    glEnd();


         int l;
        GLfloat x3=1.78f; GLfloat y3=-1.91f; GLfloat radius3 =.03f;
    int triangleAmount3 = 20;
    GLfloat twicePi3 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(0,0,0);
        glVertex2f(x3, y3);
        for(l = 0; l <= triangleAmount3;l++) {
            glVertex2f(
                    x3 + (radius3 * cos(l *  twicePi3 / triangleAmount3)),
                y3 + (radius3 * sin(l * twicePi3 / triangleAmount3))
            );
        }
   glEnd();
   glPopMatrix();
   k-=0.02f;
   l-=0.02f;

///CAR02///
glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glRotatef(i,position,0.0,0.1);
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 204);
    glVertex2f(-1.7f, -1.45f);
    glVertex2f(-1.8f, -1.45f);
    glVertex2f(-2.0f, -1.45f);
    glVertex2f(-2.0f, -1.3f);
    glVertex2f(-1.8f, -1.3f);
    glVertex2f(-1.7f, -1.35f);
    glEnd();
    int i;
        GLfloat x=-1.92f; GLfloat y=-1.45f; GLfloat radius =.03f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(0,0,0);
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
 glEnd();

     int j;
        GLfloat x1=-1.78f; GLfloat y1=-1.45f; GLfloat radius1 =.03f;
    int triangleAmount1 = 20;
    GLfloat twicePi1 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(0,0,0);
        glVertex2f(x1, y1);
        for(j = 0; j <= triangleAmount1;j++) {
            glVertex2f(
                    x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
                y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
            );
        }
    glEnd();

    glPopMatrix();
    i-=0.02f;
    j-=0.02f;

 ///RAINS///
    glPushMatrix();
    glTranslatef(0.0,position8,0.0);
    glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glLoadIdentity();

    glVertex2f(-.0,1.9);
	glVertex2f(-.0,1.8);
	glVertex2f(-.0,1.6);
	glVertex2f(-.0,1.5);
	glVertex2f(-.0,1.3);
	glVertex2f(-.0,1.2);
	glVertex2f(-.0, 1);
	glVertex2f(-.0,.9);
	glVertex2f(-.0,.7);
	glVertex2f(-.0,.6);
	glVertex2f(-.0,.4);
	glVertex2f(-.0,.3);
	glVertex2f(-.0,.1);
	glVertex2f(-.0,.0);
	glVertex2f(-.1,2);
	glVertex2f(-.1,1.9);
	glVertex2f(-.1,1.7);
	glVertex2f(-.1,1.6);
	glVertex2f(-.1,1.4);
	glVertex2f(-.1,1.3);
	glVertex2f(-.1,1.1);
	glVertex2f(-.1, 1);
	glVertex2f(-.1,.8);
	glVertex2f(-.1,.7);
	glVertex2f(-.1,.5);
	glVertex2f(-.1,.4);
	glVertex2f(-.1,.2);
	glVertex2f(-.1,.1);
    glVertex2f(-.2,1.9);
	glVertex2f(-.2,1.8);
	glVertex2f(-.2,1.6);
	glVertex2f(-.2,1.5);
	glVertex2f(-.2,1.3);
	glVertex2f(-.2,1.2);
	glVertex2f(-.2, 1);
	glVertex2f(-.2,.9);
	glVertex2f(-.2,.7);
	glVertex2f(-.2,.6);
	glVertex2f(-.2,.4);
	glVertex2f(-.2,.3);
	glVertex2f(-.2,.1);
	glVertex2f(-.2,.0);
    glVertex2f(-.3,2);
	glVertex2f(-.3,1.9);
	glVertex2f(-.3,1.7);
	glVertex2f(-.3,1.6);
	glVertex2f(-.3,1.4);
	glVertex2f(-.3,1.3);
	glVertex2f(-.3,1.1);
	glVertex2f(-.3, 1);
	glVertex2f(-.3,.8);
	glVertex2f(-.3,.7);
	glVertex2f(-.3,.5);
	glVertex2f(-.3,.4);
	glVertex2f(-.3,.2);
	glVertex2f(-.3,.1);
    glVertex2f(-.4,1.9);
	glVertex2f(-.4,1.8);
	glVertex2f(-.4,1.6);
	glVertex2f(-.4,1.5);
	glVertex2f(-.4,1.3);
	glVertex2f(-.4,1.2);
	glVertex2f(-.4, 1);
	glVertex2f(-.4,.9);
	glVertex2f(-.4,.7);
	glVertex2f(-.4,.6);
	glVertex2f(-.4,.4);
	glVertex2f(-.4,.3);
	glVertex2f(-.4,.1);
	glVertex2f(-.4,.0);
    glVertex2f(-.5,2);
	glVertex2f(-.5,1.9);
	glVertex2f(-.5,1.7);
	glVertex2f(-.5,1.6);
	glVertex2f(-.5,1.4);
	glVertex2f(-.5,1.3);
	glVertex2f(-.5,1.1);
	glVertex2f(-.5, 1);
	glVertex2f(-.5,.8);
	glVertex2f(-.5,.7);
	glVertex2f(-.5,.5);
	glVertex2f(-.5,.4);
	glVertex2f(-.5,.2);
	glVertex2f(-.5,.1);
    glVertex2f(-.6,1.9);
	glVertex2f(-.6,1.8);
	glVertex2f(-.6,1.6);
	glVertex2f(-.6,1.5);
	glVertex2f(-.6,1.3);
	glVertex2f(-.6,1.2);
	glVertex2f(-.6, 1);
	glVertex2f(-.6,.9);
	glVertex2f(-.6,.7);
	glVertex2f(-.6,.6);
	glVertex2f(-.6,.4);
	glVertex2f(-.6,.3);
	glVertex2f(-.6,.1);
	glVertex2f(-.6,.0);
    glVertex2f(-.7,2);
	glVertex2f(-.7,1.9);
	glVertex2f(-.7,1.7);
	glVertex2f(-.7,1.6);
	glVertex2f(-.7,1.4);
	glVertex2f(-.7,1.3);
	glVertex2f(-.7,1.1);
	glVertex2f(-.7, 1);
	glVertex2f(-.7,.8);
	glVertex2f(-.7,.7);
	glVertex2f(-.7,.5);
	glVertex2f(-.7,.4);
	glVertex2f(-.7,.2);
	glVertex2f(-.7,.1);
    glVertex2f(-.8,1.9);
	glVertex2f(-.8,1.8);
	glVertex2f(-.8,1.6);
	glVertex2f(-.8,1.5);
	glVertex2f(-.8,1.3);
	glVertex2f(-.8,1.2);
	glVertex2f(-.8, 1);
	glVertex2f(-.8,.9);
	glVertex2f(-.8,.7);
	glVertex2f(-.8,.6);
	glVertex2f(-.8,.4);
	glVertex2f(-.8,.3);
	glVertex2f(-.8,.1);
	glVertex2f(-.8,.0);
    glVertex2f(-.9,2);
	glVertex2f(-.9,1.9);
	glVertex2f(-.9,1.7);
	glVertex2f(-.9,1.6);
	glVertex2f(-.9,1.4);
	glVertex2f(-.9,1.3);
	glVertex2f(-.9,1.1);
	glVertex2f(-.9, 1);
	glVertex2f(-.9,.8);
	glVertex2f(-.9,.7);
	glVertex2f(-.9,.5);
	glVertex2f(-.9,.4);
	glVertex2f(-.9,.2);
	glVertex2f(-.9,.1);
    glVertex2f(-1,1.9);
	glVertex2f(-1,1.7);
	glVertex2f(-1,1.6);
	glVertex2f(-1,1.4);
	glVertex2f(-1,1.3);
	glVertex2f(-1,1.1);
	glVertex2f(-1, 1);
	glVertex2f(-1,.8);
	glVertex2f(-1,.7);
	glVertex2f(-1,.5);
	glVertex2f(-1,.4);
	glVertex2f(-1,.2);
	glVertex2f(-1,.1);
	glVertex2f(-1,.0);
    glVertex2f(-1.1,2);
	glVertex2f(-1.1,1.9);
	glVertex2f(-1.1,1.7);
	glVertex2f(-1.1,1.6);
	glVertex2f(-1.1,1.4);
	glVertex2f(-1.1,1.3);
	glVertex2f(-1.1,1.1);
	glVertex2f(-1.1, 1);
	glVertex2f(-1.1,.8);
	glVertex2f(-1.1,.7);
	glVertex2f(-1.1,.5);
	glVertex2f(-1.1,.4);
	glVertex2f(-1.1,.2);
	glVertex2f(-1.1,.1);
    glVertex2f(-1.2,1.9);
	glVertex2f(-1.2,1.8);
	glVertex2f(-1.2,1.6);
	glVertex2f(-1.2,1.5);
	glVertex2f(-1.2,1.3);
	glVertex2f(-1.2,1.2);
	glVertex2f(-1.2, 1);
	glVertex2f(-1.2,.9);
	glVertex2f(-1.2,.7);
	glVertex2f(-1.2,.6);
	glVertex2f(-1.2,.4);
	glVertex2f(-1.2,.3);
	glVertex2f(-1.2,.1);
    glVertex2f(-1.2,.0);
    glVertex2f(-1.3,2);
	glVertex2f(-1.3,1.9);
	glVertex2f(-1.3,1.7);
	glVertex2f(-1.3,1.6);
	glVertex2f(-1.3,1.4);
	glVertex2f(-1.3,1.3);
	glVertex2f(-1.3,1.1);
	glVertex2f(-1.3, 1);
	glVertex2f(-1.3,.8);
	glVertex2f(-1.3,.7);
	glVertex2f(-1.3,.5);
	glVertex2f(-1.3,.4);
	glVertex2f(-1.3,.2);
	glVertex2f(-1.3,.1);
    glVertex2f(-1.4,1.9);
	glVertex2f(-1.4,1.8);
	glVertex2f(-1.4,1.6);
	glVertex2f(-1.4,1.5);
	glVertex2f(-1.4,1.3);
	glVertex2f(-1.4,1.2);
	glVertex2f(-1.4, 1);
	glVertex2f(-1.4,.9);
	glVertex2f(-1.4,.7);
	glVertex2f(-1.4,.6);
	glVertex2f(-1.4,.4);
	glVertex2f(-1.4,.3);
	glVertex2f(-1.4,.1);
	glVertex2f(-1.4,.0);
    glVertex2f(-1.5,2);
	glVertex2f(-1.5,1.9);
	glVertex2f(-1.5,1.7);
	glVertex2f(-1.5,1.6);
	glVertex2f(-1.5,1.4);
	glVertex2f(-1.5,1.3);
	glVertex2f(-1.5,1.1);
	glVertex2f(-1.5, 1);
	glVertex2f(-1.5,.8);
	glVertex2f(-1.5,.7);
	glVertex2f(-1.5,.5);
	glVertex2f(-1.5,.4);
	glVertex2f(-1.5,.2);
	glVertex2f(-1.5,.1);
    glVertex2f(-1.6,1.9);
	glVertex2f(-1.6,1.8);
	glVertex2f(-1.6,1.6);
	glVertex2f(-1.6,1.5);
	glVertex2f(-1.6,1.3);
	glVertex2f(-1.6,1.2);
	glVertex2f(-1.6, 1);
	glVertex2f(-1.6,.9);
	glVertex2f(-1.6,.7);
	glVertex2f(-1.6,.6);
	glVertex2f(-1.6,.4);
	glVertex2f(-1.6,.3);
	glVertex2f(-1.6,.1);
	glVertex2f(-1.6,.0);
    glVertex2f(-1.7,2);
	glVertex2f(-1.7,1.9);
	glVertex2f(-1.7,1.7);
	glVertex2f(-1.7,1.6);
	glVertex2f(-1.7,1.4);
	glVertex2f(-1.7,1.3);
	glVertex2f(-1.7,1.1);
	glVertex2f(-1.7, 1);
	glVertex2f(-1.7,.8);
	glVertex2f(-1.7,.7);
	glVertex2f(-1.7,.5);
	glVertex2f(-1.7,.4);
	glVertex2f(-1.7,.2);
	glVertex2f(-1.7,.1);
    glVertex2f(-1.8,1.9);
	glVertex2f(-1.8,1.8);
	glVertex2f(-1.8,1.6);
	glVertex2f(-1.8,1.5);
	glVertex2f(-1.8,1.3);
	glVertex2f(-1.8,1.2);
	glVertex2f(-1.8, 1);
	glVertex2f(-1.8,.9);
	glVertex2f(-1.8,.7);
	glVertex2f(-1.8,.6);
	glVertex2f(-1.8,.4);
	glVertex2f(-1.8,.3);
	glVertex2f(-1.8,.1);
	glVertex2f(-1.8,.0);
    glVertex2f(-1.9,2);
	glVertex2f(-1.9,1.9);
	glVertex2f(-1.9,1.7);
	glVertex2f(-1.9,1.6);
	glVertex2f(-1.9,1.4);
	glVertex2f(-1.9,1.3);
	glVertex2f(-1.9,1.1);
	glVertex2f(-1.9, 1);
	glVertex2f(-1.9,.8);
	glVertex2f(-1.9,.7);
	glVertex2f(-1.9,.5);
	glVertex2f(-1.9,.4);
	glVertex2f(-1.9,.2);
	glVertex2f(-1.9,.1);
    glVertex2f(.1,2);
	glVertex2f(.1,1.9);
	glVertex2f(.1,1.7);
	glVertex2f(.1,1.6);
	glVertex2f(.1,1.4);
	glVertex2f(.1,1.3);
	glVertex2f(.1,1.1);
	glVertex2f(.1, 1);
	glVertex2f(.1,.8);
	glVertex2f(.1,.7);
	glVertex2f(.1,.5);
	glVertex2f(.1,.4);
	glVertex2f(.1,.2);
	glVertex2f(.1,.1);
    glVertex2f(.2,1.9);
	glVertex2f(.2,1.8);
	glVertex2f(.2,1.6);
	glVertex2f(.2,1.5);
	glVertex2f(.2,1.3);
	glVertex2f(.2,1.2);
	glVertex2f(.2, 1);
	glVertex2f(.2,.9);
	glVertex2f(.2,.7);
	glVertex2f(.2,.6);
	glVertex2f(.2,.4);
	glVertex2f(.2,.3);
	glVertex2f(.2,.1);
	glVertex2f(.2,.0);
    glVertex2f(.3,2);
	glVertex2f(.3,1.9);
	glVertex2f(.3,1.7);
	glVertex2f(.3,1.6);
	glVertex2f(.3,1.4);
	glVertex2f(.3,1.3);
	glVertex2f(.3,1.1);
	glVertex2f(.3, 1);
	glVertex2f(.3,.8);
	glVertex2f(.3,.7);
	glVertex2f(.3,.5);
	glVertex2f(.3,.4);
	glVertex2f(.3,.2);
	glVertex2f(.3,.1);
    glVertex2f(.4,1.9);
	glVertex2f(.4,1.8);
	glVertex2f(.4,1.6);
	glVertex2f(.4,1.5);
	glVertex2f(.4,1.3);
	glVertex2f(.4,1.2);
	glVertex2f(.4, 1);
	glVertex2f(.4,.9);
	glVertex2f(.4,.7);
	glVertex2f(.4,.6);
	glVertex2f(.4,.4);
	glVertex2f(.4,.3);
	glVertex2f(.4,.1);
	glVertex2f(.4,.0);
    glVertex2f(.5,2);
	glVertex2f(.5,1.9);
	glVertex2f(.5,1.7);
	glVertex2f(.5,1.6);
	glVertex2f(.5,1.4);
	glVertex2f(.5,1.3);
	glVertex2f(.5,1.1);
	glVertex2f(.5, 1);
	glVertex2f(.5,.8);
	glVertex2f(.5,.7);
	glVertex2f(.5,.5);
	glVertex2f(.5,.4);
	glVertex2f(.5,.2);
	glVertex2f(.5,.1);
    glVertex2f(.6,1.9);
	glVertex2f(.6,1.8);
	glVertex2f(.6,1.6);
	glVertex2f(.6,1.5);
	glVertex2f(.6,1.3);
	glVertex2f(.6,1.2);
	glVertex2f(.6, 1);
	glVertex2f(.6,.9);
	glVertex2f(.6,.7);
	glVertex2f(.6,.6);
	glVertex2f(.6,.4);
	glVertex2f(.6,.3);
	glVertex2f(.6,.1);
	glVertex2f(.6,.0);
    glVertex2f(.7,2);
	glVertex2f(.7,1.9);
	glVertex2f(.7,1.7);
	glVertex2f(.7,1.6);
	glVertex2f(.7,1.4);
	glVertex2f(.7,1.3);
	glVertex2f(.7,1.1);
	glVertex2f(.7, 1);
	glVertex2f(.7,.8);
	glVertex2f(.7,.7);
	glVertex2f(.7,.5);
	glVertex2f(.7,.4);
	glVertex2f(.7,.2);
	glVertex2f(.7,.1);
    glVertex2f(.8,1.9);
	glVertex2f(.8,1.8);
	glVertex2f(.8,1.6);
	glVertex2f(.8,1.5);
	glVertex2f(.8,1.3);
	glVertex2f(.8,1.2);
	glVertex2f(.8, 1);
	glVertex2f(.8,.9);
	glVertex2f(.8,.7);
	glVertex2f(.8,.6);
	glVertex2f(.8,.4);
	glVertex2f(.8,.3);
	glVertex2f(.8,.1);
	glVertex2f(.8,.0);
    glVertex2f(.9,2);
	glVertex2f(.9,1.9);
	glVertex2f(.9,1.7);
	glVertex2f(.9,1.6);
	glVertex2f(.9,1.4);
	glVertex2f(.9,1.3);
	glVertex2f(.9,1.1);
	glVertex2f(.9, 1);
	glVertex2f(.9,.8);
	glVertex2f(.9,.7);
	glVertex2f(.9,.5);
	glVertex2f(.9,.4);
	glVertex2f(.9,.2);
	glVertex2f(.9,.1);
    glVertex2f(1.0,1.9);
	glVertex2f(1.0,1.7);
	glVertex2f(1.0,1.6);
	glVertex2f(1.0,1.4);
	glVertex2f(1.0,1.3);
	glVertex2f(1.0,1.1);
	glVertex2f(1.0, 1);
	glVertex2f(1.0,.8);
	glVertex2f(1.0,.7);
	glVertex2f(1.0,.5);
	glVertex2f(1.0,.4);
	glVertex2f(1.0,.2);
	glVertex2f(1.0,.1);
	glVertex2f(1.0, .0);
    glVertex2f(1.1,2);
	glVertex2f(1.1,1.9);
	glVertex2f(1.1,1.7);
	glVertex2f(1.1,1.6);
	glVertex2f(1.1,1.4);
	glVertex2f(1.1,1.3);
	glVertex2f(1.1,1.1);
	glVertex2f(1.1, 1);
	glVertex2f(1.1,.8);
	glVertex2f(1.1,.7);
	glVertex2f(1.1,.5);
	glVertex2f(1.1,.4);
	glVertex2f(1.1,.2);
	glVertex2f(1.1,.1);
    glVertex2f(1.2,1.9);
	glVertex2f(1.2,1.8);
	glVertex2f(1.2,1.6);
	glVertex2f(1.2,1.5);
	glVertex2f(1.2,1.3);
	glVertex2f(1.2,1.2);
	glVertex2f(1.2, 1);
	glVertex2f(1.2,.9);
	glVertex2f(1.2,.7);
	glVertex2f(1.2,.6);
	glVertex2f(1.2,.4);
	glVertex2f(1.2,.3);
	glVertex2f(1.2,.1);
    glVertex2f(1.2,.0);
    glVertex2f(1.3,2);
	glVertex2f(1.3,1.9);
	glVertex2f(1.3,1.7);
	glVertex2f(1.3,1.6);
	glVertex2f(1.3,1.4);
	glVertex2f(1.3,1.3);
	glVertex2f(1.3,1.1);
	glVertex2f(1.3, 1);
	glVertex2f(1.3,.8);
	glVertex2f(1.3,.7);
	glVertex2f(1.3,.5);
	glVertex2f(1.3,.4);
	glVertex2f(1.3,.2);
	glVertex2f(1.3,.1);
	glVertex2f(1.4,1.9);
	glVertex2f(1.4,1.8);
	glVertex2f(1.4,1.6);
	glVertex2f(1.4,1.5);
	glVertex2f(1.4,1.3);
	glVertex2f(1.4,1.2);
	glVertex2f(1.4, 1);
	glVertex2f(1.4,.9);
	glVertex2f(1.4,.7);
	glVertex2f(1.4,.6);
	glVertex2f(1.4,.4);
	glVertex2f(1.4,.3);
	glVertex2f(1.4,.1);
	glVertex2f(1.4,.0);
    glVertex2f(1.5,2);
	glVertex2f(1.5,1.9);
	glVertex2f(1.5,1.7);
	glVertex2f(1.5,1.6);
	glVertex2f(1.5,1.4);
	glVertex2f(1.5,1.3);
	glVertex2f(1.5,1.1);
	glVertex2f(1.5, 1);
	glVertex2f(1.5,.8);
	glVertex2f(1.5,.7);
	glVertex2f(1.5,.5);
	glVertex2f(1.5,.4);
	glVertex2f(1.5,.2);
	glVertex2f(1.5,.1);
    glVertex2f(1.6,1.9);
	glVertex2f(1.6,1.8);
	glVertex2f(1.6,1.6);
	glVertex2f(1.6,1.5);
	glVertex2f(1.6,1.3);
	glVertex2f(1.6,1.2);
	glVertex2f(1.6, 1);
	glVertex2f(1.6,.9);
	glVertex2f(1.6,.7);
	glVertex2f(1.6,.6);
	glVertex2f(1.6,.4);
	glVertex2f(1.6,.3);
	glVertex2f(1.6,.1);
	glVertex2f(1.6,.0);
    glVertex2f(1.7,2);
	glVertex2f(1.7,1.9);
	glVertex2f(1.7,1.7);
	glVertex2f(1.7,1.6);
	glVertex2f(1.7,1.4);
	glVertex2f(1.7,1.3);
	glVertex2f(1.7,1.1);
	glVertex2f(1.7, 1);
	glVertex2f(1.7,.8);
	glVertex2f(1.7,.7);
	glVertex2f(1.7,.5);
	glVertex2f(1.7,.4);
	glVertex2f(1.7,.2);
	glVertex2f(1.7,.1);
    glVertex2f(1.8,1.9);
	glVertex2f(1.8,1.8);
	glVertex2f(1.8,1.6);
	glVertex2f(1.8,1.5);
	glVertex2f(1.8,1.3);
	glVertex2f(1.8,1.2);
	glVertex2f(1.8, 1);
	glVertex2f(1.8,.9);
	glVertex2f(1.8,.7);
	glVertex2f(1.8,.6);
	glVertex2f(1.8,.4);
	glVertex2f(1.8,.3);
	glVertex2f(1.8,.1);
	glVertex2f(1.8,.0);
    glVertex2f(1.9,2);
	glVertex2f(1.9,1.9);
	glVertex2f(1.9,1.7);
	glVertex2f(1.9,1.6);
	glVertex2f(1.9,1.4);
	glVertex2f(1.9,1.3);
	glVertex2f(1.9,1.1);
	glVertex2f(1.9, 1);
	glVertex2f(1.9,.8);
	glVertex2f(1.9,.7);
	glVertex2f(1.9,.5);
	glVertex2f(1.9,.4);
	glVertex2f(1.9,.2);
	glVertex2f(1.9,.1);
    glVertex2f(-.0,-2);
    glVertex2f(-.0,-1.9);
	glVertex2f(-.0,-1.8);
	glVertex2f(-.0,-1.6);
	glVertex2f(-.0,-1.5);
	glVertex2f(-.0,-1.3);
	glVertex2f(-.0,-1.2);
	glVertex2f(-.0, -1);
	glVertex2f(-.0,-.9);
	glVertex2f(-.0,-.7);
	glVertex2f(-.0,-.6);
	glVertex2f(-.0,-.4);
	glVertex2f(-.0,-.3);
	glVertex2f(-.0,-.1);
    glVertex2f(-.1,-1.9);
	glVertex2f(-.1,-1.7);
	glVertex2f(-.1,-1.6);
	glVertex2f(-.1,-1.4);
	glVertex2f(-.1,-1.3);
	glVertex2f(-.1,-1.1);
	glVertex2f(-.1, -1);
	glVertex2f(-.1,-.8);
	glVertex2f(-.1,-.7);
	glVertex2f(-.1,-.5);
	glVertex2f(-.1,-.4);
	glVertex2f(-.1,-.2);
	glVertex2f(-.1,-.1);
	glVertex2f(-.1,-.0);
    glVertex2f(-.2,-2);
	glVertex2f(-.2,-1.9);
	glVertex2f(-.2,-1.8);
	glVertex2f(-.2,-1.6);
	glVertex2f(-.2,-1.5);
	glVertex2f(-.2,-1.3);
	glVertex2f(-.2,-1.2);
	glVertex2f(-.2, -1);
	glVertex2f(-.2,-.9);
	glVertex2f(-.2,-.7);
	glVertex2f(-.2,-.6);
	glVertex2f(-.2,-.4);
	glVertex2f(-.2,-.3);
	glVertex2f(-.2,-.1);
    glVertex2f(-.3,-1.9);
	glVertex2f(-.3,-1.7);
	glVertex2f(-.3,-1.6);
	glVertex2f(-.3,-1.4);
	glVertex2f(-.3,-1.3);
	glVertex2f(-.3,-1.1);
	glVertex2f(-.3, -1);
	glVertex2f(-.3,-.8);
	glVertex2f(-.3,-.7);
	glVertex2f(-.3,-.5);
	glVertex2f(-.3,-.4);
	glVertex2f(-.3,-.2);
	glVertex2f(-.3,-.1);
	glVertex2f(-.3,-.0);
    glVertex2f(-.4,-2);
	glVertex2f(-.4,-1.9);
	glVertex2f(-.4,-1.8);
	glVertex2f(-.4,-1.6);
	glVertex2f(-.4,-1.5);
	glVertex2f(-.4,-1.3);
	glVertex2f(-.4,-1.2);
	glVertex2f(-.4, -1);
	glVertex2f(-.4,-.9);
	glVertex2f(-.4,-.7);
	glVertex2f(-.4,-.6);
	glVertex2f(-.4,-.4);
	glVertex2f(-.4,-.3);
	glVertex2f(-.4,-.1);
    glVertex2f(-.5,-1.9);
	glVertex2f(-.5,-1.7);
	glVertex2f(-.5,-1.6);
	glVertex2f(-.5,-1.4);
	glVertex2f(-.5,-1.3);
	glVertex2f(-.5,-1.1);
	glVertex2f(-.5, -1);
	glVertex2f(-.5,-.8);
	glVertex2f(-.5,-.7);
	glVertex2f(-.5,-.5);
	glVertex2f(-.5,-.4);
	glVertex2f(-.5,-.2);
	glVertex2f(-.5,-.1);
	glVertex2f(-.5,-.0);
    glVertex2f(-.6,-2);
	glVertex2f(-.6,-1.9);
	glVertex2f(-.6,-1.8);
	glVertex2f(-.6,-1.6);
	glVertex2f(-.6,-1.5);
	glVertex2f(-.6,-1.3);
	glVertex2f(-.6,-1.2);
	glVertex2f(-.6, -1);
	glVertex2f(-.6,-.9);
	glVertex2f(-.6,-.7);
	glVertex2f(-.6,-.6);
	glVertex2f(-.6,-.4);
	glVertex2f(-.6,-.3);
	glVertex2f(-.6,-.1);
    glVertex2f(-.7,-1.9);
	glVertex2f(-.7,-1.7);
	glVertex2f(-.7,-1.6);
	glVertex2f(-.7,-1.4);
	glVertex2f(-.7,-1.3);
	glVertex2f(-.7,-1.1);
	glVertex2f(-.7, -1);
	glVertex2f(-.7,-.8);
	glVertex2f(-.7,-.7);
	glVertex2f(-.7,-.5);
	glVertex2f(-.7,-.4);
	glVertex2f(-.7,-.2);
	glVertex2f(-.7,-.1);
    glVertex2f(-.7,-.0);
    glVertex2f(-.8,-2);
	glVertex2f(-.8,-1.9);
	glVertex2f(-.8,-1.8);
	glVertex2f(-.8,-1.6);
	glVertex2f(-.8,-1.5);
	glVertex2f(-.8,-1.3);
	glVertex2f(-.8,-1.2);
	glVertex2f(-.8, -1);
	glVertex2f(-.8,-.9);
	glVertex2f(-.8,-.7);
	glVertex2f(-.8,-.6);
	glVertex2f(-.8,-.4);
	glVertex2f(-.8,-.3);
	glVertex2f(-.8,-.1);
	glVertex2f(-.9,-1.9);
	glVertex2f(-.9,-1.7);
	glVertex2f(-.9,-1.6);
	glVertex2f(-.9,-1.4);
	glVertex2f(-.9,-1.3);
	glVertex2f(-.9,-1.1);
	glVertex2f(-.9, -1);
	glVertex2f(-.9,-.8);
	glVertex2f(-.9,-.7);
	glVertex2f(-.9,-.5);
	glVertex2f(-.9,-.4);
	glVertex2f(-.9,-.2);
	glVertex2f(-.9,-.1);
	glVertex2f(-.9,-.0);
    glVertex2f(-1,-2);
	glVertex2f(-1,-1.9);
	glVertex2f(-1,-1.7);
	glVertex2f(-1,-1.6);
	glVertex2f(-1,-1.4);
	glVertex2f(-1,-1.3);
	glVertex2f(-1,-1.1);
	glVertex2f(-1, -1);
	glVertex2f(-1,-.8);
	glVertex2f(-1,-.7);
	glVertex2f(-1,-.5);
	glVertex2f(-1,-.4);
	glVertex2f(-1,-.2);
	glVertex2f(-1,-.1);
    glVertex2f(-1.1,-1.9);
	glVertex2f(-1.1,-1.7);
	glVertex2f(-1.1,-1.6);
	glVertex2f(-1.1,-1.4);
	glVertex2f(-1.1,-1.3);
	glVertex2f(-1.1,-1.1);
	glVertex2f(-1.1, -1);
	glVertex2f(-1.1,-.8);
	glVertex2f(-1.1,-.7);
	glVertex2f(-1.1,-.5);
	glVertex2f(-1.1,-.4);
	glVertex2f(-1.1,-.2);
	glVertex2f(-1.1,-.1);
	glVertex2f(-1.1,-.0);
    glVertex2f(-1.2,-2);
    glVertex2f(-1.2,-1.9);
	glVertex2f(-1.2,-1.8);
	glVertex2f(-1.2,-1.6);
	glVertex2f(-1.2,-1.5);
	glVertex2f(-1.2,-1.3);
	glVertex2f(-1.2,-1.2);
	glVertex2f(-1.2, -1);
	glVertex2f(-1.2,-.9);
	glVertex2f(-1.2,-.7);
	glVertex2f(-1.2,-.6);
	glVertex2f(-1.2,-.4);
	glVertex2f(-1.2,-.3);
	glVertex2f(-1.2,-.1);
    glVertex2f(-1.3,-1.9);
	glVertex2f(-1.3,-1.7);
	glVertex2f(-1.3,-1.6);
	glVertex2f(-1.3,-1.4);
	glVertex2f(-1.3,-1.3);
	glVertex2f(-1.3,-1.1);
	glVertex2f(-1.3, -1);
	glVertex2f(-1.3,-.8);
	glVertex2f(-1.3,-.7);
	glVertex2f(-1.3,-.5);
	glVertex2f(-1.3,-.4);
	glVertex2f(-1.3,-.2);
	glVertex2f(-1.3,-.1);
    glVertex2f(-1.3,-.0);
    glVertex2f(-1.4,-2);
    glVertex2f(-1.4,-1.9);
	glVertex2f(-1.4,-1.8);
	glVertex2f(-1.4,-1.6);
	glVertex2f(-1.4,-1.5);
	glVertex2f(-1.4,-1.3);
	glVertex2f(-1.4,-1.2);
	glVertex2f(-1.4, -1);
	glVertex2f(-1.4,-.9);
	glVertex2f(-1.4,-.7);
	glVertex2f(-1.4,-.6);
	glVertex2f(-1.4,-.4);
	glVertex2f(-1.4,-.3);
	glVertex2f(-1.4,-.1);
    glVertex2f(-1.5,-1.9);
	glVertex2f(-1.5,-1.7);
	glVertex2f(-1.5,-1.6);
	glVertex2f(-1.5,-1.4);
	glVertex2f(-1.5,-1.3);
	glVertex2f(-1.5,-1.1);
	glVertex2f(-1.5, -1);
	glVertex2f(-1.5,-.8);
	glVertex2f(-1.5,-.7);
	glVertex2f(-1.5,-.5);
	glVertex2f(-1.5,-.4);
	glVertex2f(-1.5,-.2);
	glVertex2f(-1.5,-.1);
	glVertex2f(-1.5,-.0);
    glVertex2f(-1.6,-2);
    glVertex2f(-1.6,-1.9);
	glVertex2f(-1.6,-1.8);
	glVertex2f(-1.6,-1.6);
	glVertex2f(-1.6,-1.5);
	glVertex2f(-1.6,-1.3);
	glVertex2f(-1.6,-1.2);
	glVertex2f(-1.6, -1);
	glVertex2f(-1.6,-.9);
	glVertex2f(-1.6,-.7);
	glVertex2f(-1.6,-.6);
	glVertex2f(-1.6,-.4);
	glVertex2f(-1.6,-.3);
	glVertex2f(-1.6,-.1);
    glVertex2f(-1.7,-1.9);
	glVertex2f(-1.7,-1.7);
	glVertex2f(-1.7,-1.6);
	glVertex2f(-1.7,-1.4);
	glVertex2f(-1.7,-1.3);
	glVertex2f(-1.7,-1.1);
	glVertex2f(-1.7, -1);
	glVertex2f(-1.7,-.8);
	glVertex2f(-1.7,-.7);
	glVertex2f(-1.7,-.5);
	glVertex2f(-1.7,-.4);
	glVertex2f(-1.7,-.2);
	glVertex2f(-1.7,-.1);
	glVertex2f(-1.7,-.0);
    glVertex2f(-1.8,-2);
    glVertex2f(-1.8,-1.9);
	glVertex2f(-1.8,-1.8);
	glVertex2f(-1.8,-1.6);
	glVertex2f(-1.8,-1.5);
	glVertex2f(-1.8,-1.3);
	glVertex2f(-1.8,-1.2);
	glVertex2f(-1.8, -1);
	glVertex2f(-1.8,-.9);
	glVertex2f(-1.8,-.7);
	glVertex2f(-1.8,-.6);
	glVertex2f(-1.8,-.4);
	glVertex2f(-1.8,-.3);
	glVertex2f(-1.8,-.1);
    glVertex2f(-1.9,-1.9);
	glVertex2f(-1.9,-1.7);
	glVertex2f(-1.9,-1.6);
	glVertex2f(-1.9,-1.4);
	glVertex2f(-1.9,-1.3);
	glVertex2f(-1.9,-1.1);
	glVertex2f(-1.9, -1);
	glVertex2f(-1.9,-.8);
	glVertex2f(-1.9,-.7);
	glVertex2f(-1.9,-.5);
	glVertex2f(-1.9,-.4);
	glVertex2f(-1.9,-.2);
	glVertex2f(-1.9,-.1);
	glVertex2f(-1.9,-.0);
    glVertex2f(.1,-2);
	glVertex2f(.1,-1.9);
	glVertex2f(.1,-1.7);
	glVertex2f(.1,-1.6);
	glVertex2f(.1,-1.4);
	glVertex2f(.1,-1.3);
	glVertex2f(.1,-1.1);
	glVertex2f(.1, -1);
	glVertex2f(.1,-.8);
	glVertex2f(.1,-.7);
	glVertex2f(.1,-.5);
	glVertex2f(.1,-.4);
	glVertex2f(.1,-.2);
	glVertex2f(.1,-.1);
    glVertex2f(.2,-1.9);
	glVertex2f(.2,-1.8);
	glVertex2f(.2,-1.6);
	glVertex2f(.2,-1.5);
	glVertex2f(.2,-1.3);
	glVertex2f(.2,-1.2);
	glVertex2f(.2, -1);
	glVertex2f(.2,-.9);
	glVertex2f(.2,-.7);
	glVertex2f(.2,-.6);
	glVertex2f(.2,-.4);
	glVertex2f(.2,-.3);
	glVertex2f(.2,-.1);
	glVertex2f(.2,-.0);
    glVertex2f(.3,-2);
	glVertex2f(.3,-1.9);
	glVertex2f(.3,-1.7);
	glVertex2f(.3,-1.6);
	glVertex2f(.3,-1.4);
	glVertex2f(.3,-1.3);
	glVertex2f(.3,-1.1);
	glVertex2f(.3, -1);
	glVertex2f(.3,-.8);
	glVertex2f(.3,-.7);
	glVertex2f(.3,-.5);
	glVertex2f(.3,-.4);
	glVertex2f(.3,-.2);
	glVertex2f(.3,-.1);
    glVertex2f(.4,-1.9);
	glVertex2f(.4,-1.8);
	glVertex2f(.4,-1.6);
	glVertex2f(.4,-1.5);
	glVertex2f(.4,-1.3);
	glVertex2f(.4,-1.2);
	glVertex2f(.4, -1);
	glVertex2f(.4,-.9);
	glVertex2f(.4,-.7);
	glVertex2f(.4,-.6);
	glVertex2f(.4,-.4);
	glVertex2f(.4,-.3);
	glVertex2f(.4,-.1);
	glVertex2f(.4,-.0);
    glVertex2f(.5,-2);
	glVertex2f(.5,-1.9);
	glVertex2f(.5,-1.7);
	glVertex2f(.5,-1.6);
	glVertex2f(.5,-1.4);
	glVertex2f(.5,-1.3);
	glVertex2f(.5,-1.1);
	glVertex2f(.5, -1);
	glVertex2f(.5,-.8);
	glVertex2f(.5,-.7);
	glVertex2f(.5,-.5);
	glVertex2f(.5,-.4);
	glVertex2f(.5,-.2);
	glVertex2f(.5,-.1);
    glVertex2f(.6,-1.9);
	glVertex2f(.6,-1.8);
	glVertex2f(.6,-1.6);
	glVertex2f(.6,-1.5);
	glVertex2f(.6,-1.3);
	glVertex2f(.6,-1.2);
	glVertex2f(.6, -1);
	glVertex2f(.6,-.9);
	glVertex2f(.6,-.7);
	glVertex2f(.6,-.6);
	glVertex2f(.6,-.4);
	glVertex2f(.6,-.3);
	glVertex2f(.6,-.1);
	glVertex2f(.6,-.0);
    glVertex2f(.7,-2);
	glVertex2f(.7,-1.9);
	glVertex2f(.7,-1.7);
	glVertex2f(.7,-1.6);
	glVertex2f(.7,-1.4);
	glVertex2f(.7,-1.3);
	glVertex2f(.7,-1.1);
	glVertex2f(.7, -1);
	glVertex2f(.7,-.8);
	glVertex2f(.7,-.7);
	glVertex2f(.7,-.5);
	glVertex2f(.7,-.4);
	glVertex2f(.7,-.2);
	glVertex2f(.7,-.1);
    glVertex2f(.8,-1.9);
	glVertex2f(.8,-1.8);
	glVertex2f(.8,-1.6);
	glVertex2f(.8,-1.5);
	glVertex2f(.8,-1.3);
	glVertex2f(.8,-1.2);
	glVertex2f(.8, -1);
	glVertex2f(.8,-.9);
	glVertex2f(.8,-.7);
	glVertex2f(.8,-.6);
	glVertex2f(.8,-.4);
	glVertex2f(.8,-.3);
	glVertex2f(.8,-.1);
	glVertex2f(.8,-.0);
    glVertex2f(.9,-2);
	glVertex2f(.9,-1.9);
	glVertex2f(.9,-1.7);
	glVertex2f(.9,-1.6);
	glVertex2f(.9,-1.4);
	glVertex2f(.9,-1.3);
	glVertex2f(.9,-1.1);
	glVertex2f(.9, -1);
	glVertex2f(.9,-.8);
	glVertex2f(.9,-.7);
	glVertex2f(.9,-.5);
	glVertex2f(.9,-.4);
	glVertex2f(.9,-.2);
	glVertex2f(.9,-.1);
    glVertex2f(1.0,-1.9);
	glVertex2f(1.0,-1.7);
	glVertex2f(1.0,-1.6);
	glVertex2f(1.0,-1.4);
	glVertex2f(1.0,-1.3);
	glVertex2f(1.0,-1.1);
	glVertex2f(1.0, -1);
	glVertex2f(1.0,-.8);
	glVertex2f(1.0,-.7);
	glVertex2f(1.0,-.5);
	glVertex2f(1.0,-.4);
	glVertex2f(1.0,-.2);
	glVertex2f(1.0,-.1);
	glVertex2f(1.0,- .0);
    glVertex2f(1.1,-2);
	glVertex2f(1.1,-1.9);
	glVertex2f(1.1,-1.7);
	glVertex2f(1.1,-1.6);
	glVertex2f(1.1,-1.4);
	glVertex2f(1.1,-1.3);
	glVertex2f(1.1,-1.1);
	glVertex2f(1.1, -1);
	glVertex2f(1.1,-.8);
	glVertex2f(1.1,-.7);
	glVertex2f(1.1,-.5);
	glVertex2f(1.1,-.4);
	glVertex2f(1.1,-.2);
	glVertex2f(1.1,-.1);
    glVertex2f(1.2,-1.9);
	glVertex2f(1.2,-1.8);
	glVertex2f(1.2,-1.6);
	glVertex2f(1.2,-1.5);
	glVertex2f(1.2,-1.3);
	glVertex2f(1.2,-1.2);
	glVertex2f(1.2, -1);
	glVertex2f(1.2,-.9);
	glVertex2f(1.2,-.7);
	glVertex2f(1.2,-.6);
	glVertex2f(1.2,-.4);
	glVertex2f(1.2,-.3);
	glVertex2f(1.2,-.1);
    glVertex2f(1.2,-.0);
    glVertex2f(1.3,-2);
	glVertex2f(1.3,-1.9);
	glVertex2f(1.3,-1.7);
	glVertex2f(1.3,-1.6);
	glVertex2f(1.3,-1.4);
	glVertex2f(1.3,-1.3);
	glVertex2f(1.3,-1.1);
	glVertex2f(1.3, -1);
	glVertex2f(1.3,-.8);
	glVertex2f(1.3,-.7);
	glVertex2f(1.3,-.5);
	glVertex2f(1.3,-.4);
	glVertex2f(1.3,-.2);
	glVertex2f(1.3,-.1);
    glVertex2f(1.4,-1.9);
	glVertex2f(1.4,-1.8);
	glVertex2f(1.4,-1.6);
	glVertex2f(1.4,-1.5);
	glVertex2f(1.4,-1.3);
	glVertex2f(1.4,-1.2);
	glVertex2f(1.4, -1);
	glVertex2f(1.4,-.9);
	glVertex2f(1.4,-.7);
	glVertex2f(1.4,-.6);
	glVertex2f(1.4,.4);
	glVertex2f(1.4,-.3);
	glVertex2f(1.4,-.1);
	glVertex2f(1.4,-.0);
    glVertex2f(1.5,-2);
	glVertex2f(1.5,-1.9);
	glVertex2f(1.5,-1.7);
	glVertex2f(1.5,-1.6);
	glVertex2f(1.5,-1.4);
	glVertex2f(1.5,-1.3);
	glVertex2f(1.5,-1.1);
	glVertex2f(1.5, -1);
	glVertex2f(1.5,-.8);
	glVertex2f(1.5,-.7);
	glVertex2f(1.5,-.5);
	glVertex2f(1.5,-.4);
	glVertex2f(1.5,-.2);
	glVertex2f(1.5,-.1);
    glVertex2f(1.6,-1.9);
	glVertex2f(1.6,-1.8);
	glVertex2f(1.6,-1.6);
	glVertex2f(1.6,-1.5);
	glVertex2f(1.6,-1.3);
	glVertex2f(1.6,-1.2);
	glVertex2f(1.6, -1);
	glVertex2f(1.6,-.9);
	glVertex2f(1.6,-.7);
	glVertex2f(1.6,-.6);
	glVertex2f(1.6,-.4);
	glVertex2f(1.6,-.3);
	glVertex2f(1.6,-.1);
	glVertex2f(1.6,-.0);
    glVertex2f(1.7,-2);
	glVertex2f(1.7,-1.9);
	glVertex2f(1.7,-1.7);
	glVertex2f(1.7,-1.6);
	glVertex2f(1.7,-1.4);
	glVertex2f(1.7,-1.3);
	glVertex2f(1.7,-1.1);
	glVertex2f(1.7, -1);
	glVertex2f(1.7,-.8);
	glVertex2f(1.7,-.7);
	glVertex2f(1.7,-.5);
	glVertex2f(1.7,-.4);
	glVertex2f(1.7,-.2);
	glVertex2f(1.7,-.1);
    glVertex2f(1.8,-1.9);
	glVertex2f(1.8,-1.8);
	glVertex2f(1.8,-1.6);
	glVertex2f(1.8,-1.5);
	glVertex2f(1.8,-1.3);
	glVertex2f(1.8,-1.2);
	glVertex2f(1.8,- 1);
	glVertex2f(1.8,-.9);
	glVertex2f(1.8,-.7);
	glVertex2f(1.8,-.6);
	glVertex2f(1.8,-.4);
	glVertex2f(1.8,-.3);
	glVertex2f(1.8,-.1);
	glVertex2f(1.8,-.0);
    glVertex2f(1.9,-2);
	glVertex2f(1.9,-1.9);
	glVertex2f(1.9,-1.7);
	glVertex2f(1.9,-1.6);
	glVertex2f(1.9,-1.4);
	glVertex2f(1.9,-1.3);
	glVertex2f(1.9,-1.1);
	glVertex2f(1.9, -1);
	glVertex2f(1.9,-.8);
	glVertex2f(1.9,-.7);
	glVertex2f(1.9,-.5);
	glVertex2f(1.9,-.4);
	glVertex2f(1.9,-.2);
	glVertex2f(1.9,-.1);
    glEnd();
	glPopMatrix();

    glutTimerFunc(10000,display4,0);
    glFlush();
}
void display2(int val)
{
 glutDisplayFunc(display3);
}

///***SUMMER///***
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

///RIVER///
    glBegin(GL_QUADS);
    glColor3ub(0, 102, 255);
    glVertex2f(-2.0f, 0.80f);
    glVertex2f(2.0f, 0.80f);
    glVertex2f(2.0f, -2.0f);
    glVertex2f(-2.0f, -2.0f);
    glEnd();

///SHIP///
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.8f, 0.19f);
    glVertex2f(-1.2f, 0.19f);
    glVertex2f(-1.077f, 0.47f);
    glVertex2f(-1.19f, 0.29f);
    glVertex2f(-1.9f, 0.29f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(102, 255, 255);
    glVertex2f(-1.85f, 0.29f);
    glVertex2f(-1.25f, 0.29f);
    glVertex2f(-1.25f, 0.47f);
    glVertex2f(-1.85f, 0.47f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(71, 107, 107);
    glVertex2f(-1.8f, 0.47f);
    glVertex2f(-1.35f, 0.47f);
    glVertex2f(-1.35f, 0.61f);
    glVertex2f(-1.8f, 0.61f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(153, 102, 51);
    glVertex2f(-1.5f, 0.61f);
    glVertex2f(-1.6f, 0.61f);
    glVertex2f(-1.6f, 0.66f);
    glVertex2f(-1.5f, 0.66f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2f(-1.55f, 0.66f);
    glVertex2f(-1.55f, 0.72f);
    glVertex2f(-1.75f, 0.72f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(-1.8f, 0.44f);
    glVertex2f(-1.72f, 0.44f);
    glVertex2f(-1.72f, 0.35f);
    glVertex2f(-1.8f, 0.35f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(-1.62f, 0.44f);
    glVertex2f(-1.56f, 0.44f);
    glVertex2f(-1.56f, 0.35f);
    glVertex2f(-1.62f, 0.35f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(-1.40f, 0.44f);
    glVertex2f(-1.32f, 0.44f);
    glVertex2f(-1.32f, 0.35f);
    glVertex2f(-1.40f, 0.35f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(-1.7f, 0.48f);
    glVertex2f(-1.62f, 0.48f);
    glVertex2f(-1.62f, 0.58f);
    glVertex2f(-1.7f, 0.58f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(-1.5f, 0.48f);
    glVertex2f(-1.42f, 0.48f);
    glVertex2f(-1.42f, 0.58f);
    glVertex2f(-1.5f, 0.58f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.85f, 0.29f);
    glVertex2f(-1.25f, 0.29f);
    glVertex2f(-1.25f, 0.47f);
    glVertex2f(-1.85f, 0.47f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(-1.25f, 0.29f);
    glVertex2f(-1.25f, 0.47f);
    glVertex2f(-1.85f, 0.47f);
    glVertex2f(-1.85f, 0.29f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.8f, 0.47f);
    glVertex2f(-1.35f, 0.47f);
    glVertex2f(-1.35f, 0.61f);
    glVertex2f(-1.8f, 0.61f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.35f, 0.47f);
    glVertex2f(-1.35f, 0.61f);
    glVertex2f(-1.8f, 0.61f);
    glVertex2f(-1.8f, 0.47f);
    glEnd();
    glPopMatrix();

///GROUND01///
    glBegin(GL_POLYGON);
	glColor3ub(0, 204, 0);
    glVertex2f(-0.7f,  -0.0f);
	glVertex2f(-2.0f,  -0.0f);
    glVertex2f(-2.0f,  -2.0f);
    glVertex2f(-0.7f,  -2.0f);
    glVertex2f(-0.5f,  -2.0f);
    glVertex2f(-0.28f,  -1.8f);
    glVertex2f(-0.7f,  -1.6f);
    glVertex2f(-0.7f,  -1.75f);
    glVertex2f(-0.3f,  -1.4f);
    glVertex2f(-0.3f,  -1.18f);
    glVertex2f(-0.7f,  -1.0f);
    glVertex2f(-0.7f,  -1.17f);
    glVertex2f(-0.24f,  -0.97f);
    glVertex2f(-0.7f,  -0.6f);
    glVertex2f(-0.7f,  -0.8f);
    glVertex2f(-0.38f,  -0.65f);
    glVertex2f(-0.7f,  -0.44f);
    glVertex2f(-0.7f,  -0.6f);
    glVertex2f(-0.3f,  -0.4f);
    glEnd();
///GROUND02///
    glBegin(GL_POLYGON);
	glColor3ub(0, 204, 0);
    glVertex2f(1.0f,  -0.6f);
	glVertex2f(2.0f,  -0.6f);
    glVertex2f(2.0f,  -2.0f);
    glVertex2f(1.0f,  -2.0f);
    glVertex2f(0.7f,  -2.0f);
    glVertex2f(0.7f,  -1.68f);
    glVertex2f(1.0f,  -1.9f);
    glVertex2f(1.0f,  -1.52f);
    glVertex2f(0.75f,  -1.3f);
    glVertex2f(1.0f,  -1.0f);
    glVertex2f(1.0f,  -1.1f);
    glVertex2f(0.7f,  -0.93f);
    glVertex2f(0.7f,  -0.8f);
    glEnd();

///SKY////
    glBegin(GL_POLYGON);
	glColor3ub(155, 215, 232);
	glVertex2f(0.0f, 0.8f);
	glVertex2f(2.0f,  0.8f);
	glVertex2f(2.0f,  2.0f);
	glVertex2f(0.0f, 2.0f);
    glVertex2f(-0.0f, 0.8f);
	glVertex2f(-2.0f,  0.8f);
	glVertex2f(-2.0f,  2.0f);
	glVertex2f(-0.0f, 2.0f);
    glEnd();

///HILL01///
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-1.5f,  0.8f);
	glVertex2f(-2.0f,  0.8f);
    glVertex2f(-1.97f, 0.90f);
    glVertex2f(-1.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(-1.53f, 0.90f);
    glVertex2f(-1.97f, 0.90f);
    glVertex2f(-1.85f, 1.05f);
    glVertex2f(-1.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(-1.65f, 1.05f);
    glVertex2f(-1.85f, 1.05f);
    glVertex2f(-1.75f, 1.10f);
    glEnd();
///HILL02///
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-1.0f,  0.8f);
	glVertex2f(-1.5f,  0.8f);
    glVertex2f(-1.47f, 0.90f);
    glVertex2f(-1.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(-1.03f, 0.90f);
    glVertex2f(-1.47f, 0.90f);
    glVertex2f(-1.35f, 1.05f);
    glVertex2f(-1.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(-1.15f, 1.05f);
    glVertex2f(-1.35f,1.05f);
    glVertex2f(-1.25f,1.10f);
    glEnd();
///HILL03///
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-0.5f,  0.8f);
	glVertex2f(-1.0f,  0.8f);
    glVertex2f(-0.97f, 0.90f);
    glVertex2f(-0.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(-0.53f, 0.90f);
    glVertex2f(-0.97f, 0.90f);
    glVertex2f(-0.85f, 1.05f);
    glVertex2f(-0.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(-0.65f, 1.05f);
    glVertex2f(-0.85f, 1.05f);
    glVertex2f(-0.75f, 1.10f);
    glEnd();
///HILL04///
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-0.0f,  0.8f);
	glVertex2f(-0.5f,  0.8f);
    glVertex2f(-0.47f, 0.90f);
    glVertex2f(-0.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(-0.03f, 0.90f);
    glVertex2f(-0.47f, 0.90f);
    glVertex2f(-0.35f, 1.05f);
    glVertex2f(-0.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(-0.15f, 1.05f);
    glVertex2f(-0.35f,1.05f);
    glVertex2f(-0.25f,1.10f);
    glEnd();
///HILL05///
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(1.5f,  0.8f);
	glVertex2f(2.0f,  0.8f);
    glVertex2f(1.97f, 0.90f);
    glVertex2f(1.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(1.53f, 0.90f);
    glVertex2f(1.97f, 0.90f);
    glVertex2f(1.85f, 1.05f);
    glVertex2f(1.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(1.65f, 1.05f);
    glVertex2f(1.85f, 1.05f);
    glVertex2f(1.75f, 1.10f);
    glEnd();
///HILL06///
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(1.0f,  0.8f);
	glVertex2f(1.5f,  0.8f);
    glVertex2f(1.47f, 0.90f);
    glVertex2f(1.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(1.03f, 0.90f);
    glVertex2f(1.47f, 0.90f);
    glVertex2f(1.35f, 1.05f);
    glVertex2f(1.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(1.15f, 1.05f);
    glVertex2f(1.35f,1.05f);
    glVertex2f(1.25f,1.10f);
    glEnd();
///HILL07///
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(0.5f,  0.8f);
	glVertex2f(1.0f,  0.8f);
    glVertex2f(0.97f, 0.90f);
    glVertex2f(0.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(0.53f, 0.90f);
    glVertex2f(0.97f, 0.90f);
    glVertex2f(0.85f, 1.05f);
    glVertex2f(0.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(0.65f, 1.05f);
    glVertex2f(0.85f, 1.05f);
    glVertex2f(0.75f, 1.10f);
    glEnd();
///HILL08///
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(0.0f,  0.8f);
	glVertex2f(0.5f,  0.8f);
    glVertex2f(0.47f, 0.90f);
    glVertex2f(0.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(0.03f, 0.90f);
    glVertex2f(0.47f, 0.90f);
    glVertex2f(0.35f, 1.05f);
    glVertex2f(0.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(0.15f, 1.05f);
    glVertex2f(0.35f,1.05f);
    glVertex2f(0.25f,1.10f);
    glEnd();

///TREE01///
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(0.91f, -0.1f);//height
    glVertex2f(0.91f, -0.7f);
    glVertex2f(0.94f, -0.7f);//height
    glVertex2f(0.94f, -0.1f);
    glEnd();
///TREE02///
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(1.14f, -0.0f);//height
    glVertex2f(1.14f, -0.7f);
    glVertex2f(1.17f, -0.7f);//height
    glVertex2f(1.17f, -0.0f);
    glEnd();
///TREE03///
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(1.81f, -0.0f);//height
    glVertex2f(1.81f, -0.7f);
    glVertex2f(1.84f, -0.7f);//height
    glVertex2f(1.84f, -0.0f);
    glEnd();

///LEAF01///
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0 );
    glVertex2f(0.80f, -0.1f);//height
    glVertex2f(1.05f, -0.1f);
    glVertex2f(0.925f, 0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0 );
    glVertex2f(0.85f, 0.1f);//height
    glVertex2f(1.00f, 0.1f);
    glVertex2f(0.925f, 0.4f);
    glEnd();
///LEAF02///
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0);
    glVertex2f(1.03f, -0.0f);//height
    glVertex2f(1.28f, -0.0f);
    glVertex2f(1.155f, 0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0 );
    glVertex2f(1.06f, 0.1f);//height
    glVertex2f(1.25f, 0.1f);
    glVertex2f(1.155f, 0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0 );
	glVertex2f(1.08f, 0.2f);
	glVertex2f(1.23f, 0.2f);
	glVertex2f(1.155f, 0.5f);
	glEnd();
///LEAF03///
     glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0 );
    glVertex2f(1.70f, -0.0f);//height
    glVertex2f(1.95f, -0.0f);
    glVertex2f(1.825f, 0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0 );
    glVertex2f(1.74f, 0.1f);//height
    glVertex2f(1.91f, 0.1f);
    glVertex2f(1.825f, 0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0 );
	glVertex2f(1.76f, 0.2f);
	glVertex2f(1.89f, 0.2f);
	glVertex2f(1.825f, 0.5f);
	glEnd();

///FENCE01///
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 102);
    glVertex2f(1.7f, -0.6f);//width
    glVertex2f(2.0f, -0.60f);
    glVertex2f(2.0f, -0.60f);
    glVertex2f(1.7f, -0.6f);
    glVertex2f(1.7f, -0.5f);//width
    glVertex2f(2.0f, -0.50f);
    glVertex2f(2.0f, -0.50f);
    glVertex2f(1.7f, -0.5f);
    glVertex2f(1.7f, -0.7f);//width
    glVertex2f(2.0f, -0.70f);
    glVertex2f(2.0f, -0.70f);
    glVertex2f(1.7f, -0.7f);

    glVertex2f(1.76f, -0.5f);//height
    glVertex2f(1.76f, -0.7f);
    glVertex2f(1.78f, -0.7f);
    glVertex2f(1.78f, -0.5f);
    glVertex2f(1.86f, -0.5f);//height
    glVertex2f(1.86f, -0.7f);
    glVertex2f(1.88f, -0.7f);
    glVertex2f(1.88f, -0.5f);
    glVertex2f(1.96f, -0.5f);//height
    glVertex2f(1.96f, -0.7f);
    glVertex2f(1.98f, -0.7f);
    glVertex2f(1.98f, -0.5f);
    glEnd();
///FENCE02///
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 102);
    glVertex2f(0.9f, -0.6f);//width
    glVertex2f(1.2f, -0.60f);
    glVertex2f(1.2f, -0.60f);
    glVertex2f(0.9f, -0.6f);
    glVertex2f(0.9f, -0.5f);//width
    glVertex2f(1.2f, -0.50f);
    glVertex2f(1.2f, -0.50f);
    glVertex2f(0.9f, -0.5f);
    glVertex2f(0.9f, -0.7f);//width
    glVertex2f(1.2f, -0.70f);
    glVertex2f(1.2f, -0.70f);
    glVertex2f(0.9f, -0.7f);

    glVertex2f(0.96f, -0.5f);//height
    glVertex2f(0.96f, -0.7f);
    glVertex2f(0.98f, -0.7f);
    glVertex2f(0.98f, -0.5f);
    glVertex2f(1.06f, -0.5f);//height
    glVertex2f(1.06f, -0.7f);
    glVertex2f(1.08f, -0.7f);
    glVertex2f(1.08f, -0.5f);
    glVertex2f(1.16f, -0.5f);//height
    glVertex2f(1.16f, -0.7f);
    glVertex2f(1.18f, -0.7f);
    glVertex2f(1.18f, -0.5f);
    glEnd();

///HOUSE///
    glBegin(GL_QUADS);
    glColor3ub(0, 102, 102);///house body01
    glVertex2f(-0.9f, 0.1f);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-1.3f, -0.3f);
    glVertex2f(-1.3f, 0.1f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(204, 0, 0);///house upper part01
    glVertex2f(-1.0f, 0.4f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-1.5f, 0.1f);
    glVertex2f(-1.3f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);///house door01
    glVertex2f(-1.0f, -0.0f);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.1f, -0.3f);
    glVertex2f(-1.1f, -0.0f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);///house window01
    glVertex2f(-1.15f, -0.1f);
    glVertex2f(-1.15f, -0.20f);
    glVertex2f(-1.25f, -0.20f);
    glVertex2f(-1.25f, -0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-0.9f, 0.1f);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-1.3f, -0.3f);
    glVertex2f(-1.3f, 0.1f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-1.3f, -0.3f);
    glVertex2f(-1.3f, 0.1f);
    glVertex2f(-0.9f, 0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.0f, 0.4f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-1.5f, 0.1f);
    glVertex2f(-1.3f, 0.4f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-1.5f, 0.1f);
    glVertex2f(-1.3f, 0.4f);
    glVertex2f(-1.0f, 0.4f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.0f, -0.0f);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.1f, -0.3f);
    glVertex2f(-1.1f, -0.0f);
    glVertex2f(-1.05f, -0.0f);
    glVertex2f(-1.05f, -0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.1f, -0.3f);
    glVertex2f(-1.1f, -0.0f);
    glVertex2f(-1.0f, -0.0f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.15f, -0.1f);
    glVertex2f(-1.15f, -0.20f);
    glVertex2f(-1.25f, -0.20f);
    glVertex2f(-1.25f, -0.1f);
    glVertex2f(-1.20f, -0.1f);
    glVertex2f(-1.20f, -0.20f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.15f, -0.20f);
    glVertex2f(-1.25f, -0.20f);
    glVertex2f(-1.25f, -0.1f);
    glVertex2f(-1.15f, -0.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 102, 0);///house body02
    glVertex2f(-1.3f, -0.0f);
    glVertex2f(-1.8f, -0.0f);
    glVertex2f(-1.8f, -0.5f);
    glVertex2f(-1.3f, -0.5f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 68, 0);///house door02
    glVertex2f(-1.6f, -0.1f);
    glVertex2f(-1.7f, -0.1f);
    glVertex2f(-1.7f, -0.5f);
    glVertex2f(-1.6f, -0.5f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 68, 0);///house window02
    glVertex2f(-1.4f, -0.2f);
    glVertex2f(-1.5f, -0.2f);
    glVertex2f(-1.5f, -0.3f);
    glVertex2f(-1.4f, -0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 204);///house upper part02
    glVertex2f(-1.2f, 0.0f);
    glVertex2f(-1.9f, 0.0f);
    glVertex2f(-1.7f, 0.3f);
    glVertex2f(-1.4f, 0.3f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.3f,-0.0f);
    glVertex2f(-1.8f,-0.0f);
    glVertex2f(-1.8f, -0.5f);
    glVertex2f(-1.3f, -0.5f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.8f,-0.0f);
    glVertex2f(-1.8f,-0.5f);
    glVertex2f(-1.3f,-0.5f);
    glVertex2f(-1.3f,-0.0f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.2f,0.0f);
    glVertex2f(-1.9f,0.0f);
    glVertex2f(-1.7f,0.3f);
    glVertex2f(-1.4f,0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.9f,0.0f);
    glVertex2f(-1.7f,0.3f);
    glVertex2f(-1.4f,0.3f);
    glVertex2f(-1.2f,0.0f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.6f,-0.1f);
    glVertex2f(-1.70f,-0.1f);
    glVertex2f(-1.70f,-0.5f);
    glVertex2f(-1.6f,-0.5f);
    glVertex2f(-1.65f,-0.1f);
    glVertex2f(-1.65f,-0.5f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.70f,-0.1f);
    glVertex2f(-1.70f,-0.5f);
    glVertex2f(-1.6f,-0.5f);
    glVertex2f(-1.6f,-0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.4f,-0.2f);
    glVertex2f(-1.5f,-0.2f);
    glVertex2f(-1.5f,-0.3f);
    glVertex2f(-1.4f,-0.3f);
    glVertex2f(-1.45f,-0.2f);
    glVertex2f(-1.45f,-0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.5f,-0.2f);
    glVertex2f(-1.5f,-0.3f);
    glVertex2f(-1.4f,-0.3f);
    glVertex2f(-1.4f,-0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);///house body03
    glVertex2f(1.2f, -0.3f);
    glVertex2f(1.2f, -0.8f);
    glVertex2f(1.7f, -0.8f);
    glVertex2f(1.7f, -0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.2f, -0.3f);
    glVertex2f(1.2f, -0.8f);
    glVertex2f(1.7f, -0.8f);
    glVertex2f(1.7f, -0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.2f, -0.8f);
    glVertex2f(1.7f, -0.8f);
    glVertex2f(1.7f, -0.3f);
    glVertex2f(1.2f, -0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 102);///house upper part03
    glVertex2f(1.3f, -0.1f);
    glVertex2f(1.1f, -0.4f);
    glVertex2f(1.8f, -0.4f);
    glVertex2f(1.6f, -0.1f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);///house window03
    glVertex2f(1.3f, -0.6f);
    glVertex2f(1.3f, -0.7f);
    glVertex2f(1.4f, -0.7f);
    glVertex2f(1.4f, -0.6f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);///house door03
    glVertex2f(1.5f, -0.5f);
    glVertex2f(1.5f, -0.8f);
    glVertex2f(1.6f, -0.8f);
    glVertex2f(1.6f, -0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.3f, -0.1f);
    glVertex2f(1.1f, -0.4f);
    glVertex2f(1.8f, -0.4f);
    glVertex2f(1.6f, -0.1f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.1f, -0.4f);
    glVertex2f(1.8f, -0.4f);
    glVertex2f(1.6f, -0.1f);
    glVertex2f(1.3f, -0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.3f, -0.6f);
    glVertex2f(1.3f, -0.7f);
    glVertex2f(1.4f, -0.7f);
    glVertex2f(1.4f, -0.6f);
    glVertex2f(1.35f, -0.6f);
    glVertex2f(1.35f, -0.7f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.3f, -0.7f);
    glVertex2f(1.4f, -0.7f);
    glVertex2f(1.4f, -0.6f);
    glVertex2f(1.3f, -0.6f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.5f, -0.5f);
    glVertex2f(1.5f, -0.8f);
    glVertex2f(1.6f, -0.8f);
    glVertex2f(1.6f, -0.5f);
    glVertex2f(1.55f, -0.5f);
    glVertex2f(1.55f, -0.8f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.5f, -0.8f);
    glVertex2f(1.6f, -0.8f);
    glVertex2f(1.6f, -0.5f);
    glVertex2f(1.5f, -0.5f);
    glEnd();

///GRASS01///
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0);
    glVertex2f(-1.89f, -0.5f);
	glVertex2f(-1.86f, -0.450f);
	glVertex2f(-1.84f, -0.150f);
	glVertex2f(-1.87f, -0.350f);
	glVertex2f(-1.89f, -0.5f);
	glVertex2f(-1.92f, -0.450f);
	glVertex2f(-1.94f, -0.150f);
	glVertex2f(-1.91f, -0.350f);
    glVertex2f(-1.89f, -0.5f);
	glVertex2f(-1.88f, -0.350f);
	glVertex2f(-1.89f, -0.150f);
	glVertex2f(-1.90f, -0.350f);
    glEnd();
///GRASS02///
    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.90f, -0.6f);
	glVertex2f(-0.87f, -0.550f);
	glVertex2f(-0.85f, -0.250f);
	glVertex2f(-0.88f, -0.450f);
	glVertex2f(-0.90f, -0.6f);
	glVertex2f(-0.89f, -0.550f);
	glVertex2f(-0.90f, -0.250f);
	glVertex2f(-0.91f, -0.450f);
	glVertex2f(-0.90f, -0.6f);
	glVertex2f(-0.93f, -0.550f);
	glVertex2f(-0.95f, -0.250f);
	glVertex2f(-0.92f, -0.450f);
	glEnd();
///GRASS03///
	 glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0);
    glVertex2f(-0.60f, -0.5f);
	glVertex2f(-0.57f, -0.450f);
	glVertex2f(-0.55f, -0.150f);
	glVertex2f(-0.58f, -0.350f);
	glVertex2f(-0.60f, -0.5f);
	glVertex2f(-0.59f, -0.450f);
	glVertex2f(-0.60f, -0.150f);
	glVertex2f(-0.61f, -0.350f);
	glVertex2f(-0.60f, -0.5f);
	glVertex2f(-0.63f, -0.450f);
	glVertex2f(-0.65f, -0.150f);
	glVertex2f(-0.62f, -0.350f);
	glEnd();
///GRASS04///
	glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0);
    glVertex2f(-0.79f, -0.57f);
	glVertex2f(-0.76f, -0.450f);
	glVertex2f(-0.74f, -0.150f);
	glVertex2f(-0.78f, -0.350f);
	glVertex2f(-0.79f, -0.57f);
	glVertex2f(-0.78f, -0.450f);
	glVertex2f(-0.79f, -0.150f);
	glVertex2f(-0.80f, -0.350f);
	glVertex2f(-0.79f, -0.57f);
	glVertex2f(-0.82f, -0.450f);
	glVertex2f(-0.84f, -0.150f);
	glVertex2f(-0.81f, -0.350f);
	glEnd();
///GRASS05///
	glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.69f, -0.53f);
	glVertex2f(-0.66f, -0.450f);
	glVertex2f(-0.64f, -0.150f);
	glVertex2f(-0.68f, -0.350f);
	glVertex2f(-0.69f, -0.53f);
	glVertex2f(-0.68f, -0.450f);
	glVertex2f(-0.69f, -0.150f);
	glVertex2f(-0.70f, -0.350f);
	glVertex2f(-0.69f, -0.53f);
	glVertex2f(-0.72f, -0.450f);
	glVertex2f(-0.74f, -0.150f);
	glVertex2f(-0.71f, -0.350f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(153, 153, 102);
	glVertex2f(-1.73f, -0.5f);
	glVertex2f(-1.57f, -0.5f);
	glVertex2f(-1.45f, -1.3f);
	glVertex2f(-1.61f, -1.3f);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(-1.45f, -1.3f);
	glVertex2f(-1.61f, -1.3f);
	glVertex2f(-1.01f, -2.0f);
	glVertex2f(-1.18f, -2.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-1.45f, -1.3f);
	glVertex2f(-1.61f, -1.3f);
	glVertex2f(-1.01f, -2.0f);
	glVertex2f(-1.18f, -2.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(153, 153, 102);
	glVertex2f(-0.98f, -0.3f);
	glVertex2f(-1.14f, -0.3f);
	glVertex2f(-1.26f, -1.85f);
	glVertex2f(-1.1f, -1.85f);
	glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(153, 153, 102);
	glVertex2f(1.48f, -0.8f);
	glVertex2f(1.61f, -0.8f);
	glVertex2f(1.83f, -2.0f);
	glVertex2f(1.70f, -2.0f);
	glEnd();

///BOAT01///
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.1f,  -1.01f);
    glVertex2f(-0.2f, -1.01f);
    glVertex2f(-0.2f, -1.08f);
    glVertex2f(0.1f,  -1.08f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(122, 122, 82);
    glVertex2f(0.2f, -0.93f);
    glVertex2f(0.1f, -1.01f);
    glVertex2f(-0.2f, -1.01f);
    glVertex2f(-0.3f, -0.93f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(0.1f, -0.91f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);///boat1///
    glVertex2f(0.1f, -1.01f);
    glVertex2f(0.2f, -0.93f);
    glVertex2f(0.1f, -1.08f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);///boat1///
    glVertex2f(-0.2f, -1.01f);
    glVertex2f(-0.3f, -0.93f);
    glVertex2f(-0.2f, -1.08f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.1f, -0.91f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(0.1f, -0.91f);
    glVertex2f(0.2f, -0.93f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(-0.3f, -0.93f);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.1f, -0.91f);
    glVertex2f(0.1f, -1.01f);
    glVertex2f(0.0f, -0.91f);
    glVertex2f(0.0f, -1.01f);
    glVertex2f(-0.1f, -0.91f);
    glVertex2f(-0.1f, -1.01f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(-0.2f, -1.01f);
    glEnd();
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
///BOAT02///
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(-0.2f,-0.75f);
    glVertex2f(-0.2f,-0.82f);
    glVertex2f(0.1f, -0.82f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(122, 122, 82);
    glVertex2f(0.2f, -0.67f);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(-0.2f,-0.75f);
    glVertex2f(-0.3f,-0.67f);
    glVertex2f(-0.2f,-0.65f);
    glVertex2f(0.1f, -0.65f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);///boat2///
    glVertex2f(0.1f, -0.75f);
    glVertex2f(0.2f, -0.67f);
    glVertex2f(0.1f, -0.82f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);///boat2///
    glVertex2f(-0.2f, -0.75f);
    glVertex2f(-0.3f, -0.67f);
    glVertex2f(-0.2f, -0.82f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.1f,  -0.65f);
    glVertex2f(-0.2f, -0.65f);
    glVertex2f(0.1f,  -0.65f);
    glVertex2f(0.2f,  -0.67f);
    glVertex2f(-0.2f, -0.65f);
    glVertex2f(-0.3f, -0.67f);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.1f, - 0.65f);
    glVertex2f(0.1f, - 0.75f);
    glVertex2f(0.0f, - 0.65f);
    glVertex2f(0.0f,  -0.75f);
    glVertex2f(-0.1f, -0.65f);
    glVertex2f(-0.1f, -0.75f);
    glVertex2f(-0.2f, -0.65f);
    glVertex2f(-0.2f, -0.75f);
    glEnd();
    glPopMatrix();

///SUN///
    int m;
        GLfloat x4=-1.66f; GLfloat y4=1.8f; GLfloat radius4 =.12f;
    int triangleAmount4 = 20;
    GLfloat twicePi4 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(255, 255, 0);
        glVertex2f(x4, y4);
        for(m = 0; m <= triangleAmount4;m++) {
            glVertex2f(
                    x4 + (radius4 * cos(m *  twicePi4 / triangleAmount4)),
                y4 + (radius4 * sin(m * twicePi4 / triangleAmount4))
            );
        }
   glEnd();

///CLOUD01///
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glRotatef(i,position,0.0,0.1);
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(-0.45f, 1.65f);
    glVertex2f(-0.45f, 1.80f);
    glVertex2f(-1.0f, 1.80f);
    glVertex2f(-1.0f, 1.65f);
    glEnd();
    int n;
        GLfloat x5=-0.45f; GLfloat y5=1.73f; GLfloat radius5 =.09f;
    int triangleAmount5 = 20;
    GLfloat twicePi5 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(230, 255, 255);
        glVertex2f(x5, y5);
        for(n = 0; n <= triangleAmount5;n++) {
            glVertex2f(
                    x5 + (radius5 * cos(n *  twicePi5 / triangleAmount5)),
                y5 + (radius5 * sin(n * twicePi5 / triangleAmount5))
            );
        }

    glEnd();

    int o;
        GLfloat x6=-1.0f; GLfloat y6=1.73f; GLfloat radius6 =.15f;
    int triangleAmount6 = 20;
    GLfloat twicePi6 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(230, 255, 255);
        glVertex2f(x6, y6);
        for(o = 0; o <= triangleAmount6;o++) {
            glVertex2f(
                    x6 + (radius6 * cos(o *  twicePi6 / triangleAmount6)),
                y6 + (radius6 * sin(o * twicePi6 / triangleAmount6))
            );
        }
  glEnd();

  int p;
        GLfloat x7=-0.55f; GLfloat y7=1.79f; GLfloat radius7 =.07f;
    int triangleAmount7 = 20;
    GLfloat twicePi7 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(230, 255, 255);
        glVertex2f(x7, y7);
        for(p = 0; p <= triangleAmount6;p++) {
            glVertex2f(
                    x7 + (radius7 * cos(p *  twicePi7 / triangleAmount7)),
                y7 + (radius7 * sin(p * twicePi7 / triangleAmount7))
            );
        }
  glEnd();

  int q;
        GLfloat x8=-0.7f; GLfloat y8=1.80f; GLfloat radius8 =.12f;
    int triangleAmount8 = 20;
    GLfloat twicePi8 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(230, 255, 255);
        glVertex2f(x8, y8);
        for(q = 0; q <= triangleAmount6;q++) {
            glVertex2f(
                    x8 + (radius8 * cos(q *  twicePi8 / triangleAmount8)),
                y8 + (radius8 * sin(q * twicePi8 / triangleAmount8))
            );
        }
  glEnd();

   int r;
        GLfloat x9=-0.85f; GLfloat y9=1.73f; GLfloat radius9 =.10f;
    int triangleAmount9 = 20;
    GLfloat twicePi9 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(230, 255, 255);
        glVertex2f(x9, y9);
        for(r = 0; r <= triangleAmount6;r++) {
            glVertex2f(
                    x9 + (radius9 * cos(r *  twicePi9 / triangleAmount9)),
                y9 + (radius9 * sin(r * twicePi9 / triangleAmount9))
            );
        }
  glEnd();

   int s;
        GLfloat x10=-0.69f; GLfloat y10=1.69f; GLfloat radius10 =.14f;
    int triangleAmount10 = 20;
    GLfloat twicePi10 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(230, 255, 255);
        glVertex2f(x10, y10);
        for(s = 0; s <= triangleAmount6;s++) {
            glVertex2f(
                    x10 + (radius10 * cos(s *  twicePi10 / triangleAmount10)),
                y10 + (radius10 * sin(s * twicePi10 / triangleAmount10))
            );
        }
  glEnd();

   int t;
        GLfloat x11=-0.53f; GLfloat y11=1.69f; GLfloat radius11 =.12f;
    int triangleAmount11 = 20;
    GLfloat twicePi11 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(230, 255, 255);
        glVertex2f(x11, y11);
        for(t = 0; t <= triangleAmount6;t++) {
            glVertex2f(
                    x11 + (radius11 * cos(t *  twicePi11 / triangleAmount11)),
                y11 + (radius11 * sin(t * twicePi11 / triangleAmount11))
            );
        }
  glEnd();
  glPopMatrix();

///CLOUD02///
    glPushMatrix();
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.45f, 1.65f);
    glVertex2f(0.45f, 1.80f);
    glVertex2f(1.0f, 1.80f);
    glVertex2f(1.0f, 1.65f);
    glEnd();
    int n1;
        GLfloat x51=0.45f; GLfloat y51=1.73f; GLfloat radius51 =.09f;
    int triangleAmount51= 20;
    GLfloat twicePi51 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(255, 255, 255);
        glVertex2f(x51, y51);
        for(n1 = 0; n1 <= triangleAmount5;n1++) {
            glVertex2f(
                    x51 + (radius51 * cos(n1 *  twicePi51 / triangleAmount51)),
                y51 + (radius51 * sin(n1 * twicePi51 / triangleAmount51))
            );
        }

    glEnd();

    int o1;
        GLfloat x61=1.0f; GLfloat y61=1.73f; GLfloat radius61 =.15f;
    int triangleAmount61 = 20;
    GLfloat twicePi61 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(255, 255, 255);
        glVertex2f(x61, y61);
        for(o1 = 0; o1 <= triangleAmount61;o1++) {
            glVertex2f(
                    x61 + (radius61 * cos(o1 *  twicePi61 / triangleAmount61)),
                y61 + (radius61 * sin(o1 * twicePi61 / triangleAmount61))
            );
        }
  glEnd();

  int p1;
        GLfloat x71=0.55f; GLfloat y71=1.79f; GLfloat radius71 =.07f;
    int triangleAmount71 = 20;
    GLfloat twicePi71 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(255, 255, 255);
        glVertex2f(x71, y71);
        for(p1 = 0; p1 <= triangleAmount61;p1++) {
            glVertex2f(
                    x71 + (radius71 * cos(p1 *  twicePi71 / triangleAmount71)),
                y71 + (radius71 * sin(p1 * twicePi71 / triangleAmount71))
            );
        }
  glEnd();

  int q1;
        GLfloat x81=0.7f; GLfloat y81=1.80f; GLfloat radius81 =.12f;
    int triangleAmount81 = 20;
    GLfloat twicePi81 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(255, 255, 255);
        glVertex2f(x81, y81);
        for(q1 = 0; q1 <= triangleAmount61;q1++) {
            glVertex2f(
                    x81 + (radius81 * cos(q1 *  twicePi81 / triangleAmount81)),
                y81 + (radius81 * sin(q1 * twicePi81 / triangleAmount81))
            );
        }
  glEnd();

   int r1;
        GLfloat x91=0.85f; GLfloat y91=1.73f; GLfloat radius91 =.10f;
    int triangleAmount91 = 20;
    GLfloat twicePi91 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(255, 255, 255);
        glVertex2f(x91, y91);
        for(r1 = 0; r1 <= triangleAmount61;r1++) {
            glVertex2f(
                    x91 + (radius91 * cos(r1 *  twicePi91 / triangleAmount91)),
                y91 + (radius91 * sin(r1 * twicePi91 / triangleAmount91))
            );
        }
  glEnd();

   int s1;
        GLfloat x101=0.69f; GLfloat y101=1.69f; GLfloat radius101 =.14f;
    int triangleAmount101 = 20;
    GLfloat twicePi101 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(255, 255, 255);
        glVertex2f(x101, y101);
        for(s1 = 0; s1 <= triangleAmount6;s1++) {
            glVertex2f(
                    x101 + (radius101 * cos(s1 *  twicePi101 / triangleAmount101)),
                y101 + (radius101 * sin(s1 * twicePi101 / triangleAmount101))
            );
        }
  glEnd();

   int t1;
        GLfloat x111=0.53f; GLfloat y111=1.69f; GLfloat radius111 =.12f;
    int triangleAmount111 = 20;
    GLfloat twicePi111 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(255, 255, 255);
        glVertex2f(x111, y111);
        for(t1 = 0; t1 <= triangleAmount6;t1++) {
            glVertex2f(
                    x111 + (radius111 * cos(t1 *  twicePi111 / triangleAmount111)),
                y111 + (radius111 * sin(t1 * twicePi111 / triangleAmount111))
            );
        }
  glEnd();
  glPopMatrix();

///CLOUD03///
    int u;
        GLfloat x12=-0.1f; GLfloat y12=1.33f; GLfloat radius12 =.09f;
    int triangleAmount12 = 20;
    GLfloat twicePi12 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(230, 245, 255);
        glVertex2f(x12, y12);
        for(u = 0; u <= triangleAmount5;u++) {
            glVertex2f(
                    x12 + (radius12 * cos(u *  twicePi12 / triangleAmount12)),
                y12 + (radius12 * sin(u * twicePi12 / triangleAmount12))
            );
        }
    glEnd();

    int v;
        GLfloat x13=-0.2f; GLfloat y13=1.27f; GLfloat radius13 =.12f;
    int triangleAmount13 = 20;
    GLfloat twicePi13 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(230, 245, 255);
        glVertex2f(x13, y13);
        for(v = 0; v <= triangleAmount6;v++) {
            glVertex2f(
                    x13 + (radius13 * cos(v *  twicePi13 / triangleAmount11)),
                y13 + (radius13 * sin(v * twicePi13 / triangleAmount13))
            );
        }
  glEnd();

  int w;
        GLfloat x14=-0.33f; GLfloat y14=1.29f; GLfloat radius14 =.09f;
    int triangleAmount14 = 20;
    GLfloat twicePi14 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(230, 245, 255);
        glVertex2f(x14, y14);
        for(w = 0; w <= triangleAmount6;w++) {
            glVertex2f(
                    x14 + (radius14 * cos(w *  twicePi14 / triangleAmount14)),
                y14 + (radius14 * sin(w * twicePi14 / triangleAmount14))
            );
        }
  glEnd();

///CLOUD04///
   glPushMatrix();
   glTranslatef(position7,0.0f, 0.0f);

  int d;
        GLfloat x153=1.8f; GLfloat y153=1.33f; GLfloat radius153 =.09f;
    int triangleAmount153 = 20;
    GLfloat twicePi153 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(255, 255, 255);
        glVertex2f(x153, y153);
        for(d = 0; d <= triangleAmount6;d++) {
            glVertex2f(
                    x153 + (radius153 * cos(d *  twicePi153 / triangleAmount153)),
                y153 + (radius153* sin(d * twicePi153 / triangleAmount153))
            );
        }
  glEnd();

   int e;
        GLfloat x16=1.7f; GLfloat y16=1.34f; GLfloat radius16 =.12f;
    int triangleAmount16 = 20;
    GLfloat twicePi16 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(255, 255, 255);
        glVertex2f(x16, y16);
        for(e = 0; e <= triangleAmount6;e++) {
            glVertex2f(
                    x16 + (radius16 * cos(e *  twicePi16 / triangleAmount16)),
                y16 + (radius16 * sin(e * twicePi16 / triangleAmount16))
            );
        }
  glEnd();

   int z;
        GLfloat x17=1.6f; GLfloat y17=1.33f; GLfloat radius17 =.09f;
    int triangleAmount17 = 20;
    GLfloat twicePi17 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
      glColor3ub(255, 255, 255);
        glVertex2f(x17, y17);
        for(z = 0; z <= triangleAmount6;z++) {
            glVertex2f(
                    x17 + (radius17 * cos(z *  twicePi17 / triangleAmount17)),
                y17 + (radius17 * sin(z * twicePi17 / triangleAmount17))
            );
        }
  glEnd();
  glPopMatrix();

///BIRD01///
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(184,134,11);
    glVertex2f(-1.8f,  1.55f);
    glVertex2f(-1.7f,  1.65f);
    glVertex2f(-1.95f, 1.63f);
    glVertex2f(-1.9f, 1.53f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-1.78f,1.641f);
    glVertex2f(-1.88f,1.8f);
    glVertex2f(-1.85f,1.639f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-1.78f,1.641f);
    glVertex2f(-1.91f,1.75f);
    glVertex2f(-1.87f,1.639f);
    glEnd();

    glPointSize( 2.5 );
    glBegin(GL_POINTS);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-01.74f,1.635f);
    glEnd();
    glPopMatrix();

///BIRD02///
    glPushMatrix();
    glTranslatef(position5,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 153, 0);
    glVertex2f(-1.5f,  1.35f);
    glVertex2f(-1.4f,  1.45f);
    glVertex2f(-1.65f, 1.43f);
    glVertex2f(-1.6f, 1.33f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-1.48f,1.441f);
    glVertex2f(-1.58f,1.6f);
    glVertex2f(-1.55f,1.439f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-1.48f,1.441f);
    glVertex2f(-1.61f,1.55f);
    glVertex2f(-1.57f,1.439f);
    glEnd();

    glPointSize( 2.5 );
    glBegin(GL_POINTS);
    glColor3ub(0,0,0);
    glVertex2f(-01.44f,1.435f);
    glEnd();
    glPopMatrix();

///HIGHWAY///
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(2.0f, -2.0f);
    glVertex2f(2.0f, -1.25f);
    glVertex2f(-2.0f, -1.25f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);///LINES///
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(2.0f, -2.0f);
    glVertex2f(2.0f, -1.25f);
    glVertex2f(-2.0f, -1.25f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(0.2f, -1.60f);
    glVertex2f(0.4f, -1.60f);
    glVertex2f(0.4f, -1.64f);
    glVertex2f(0.2f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(0.6f, -1.60f);
    glVertex2f(0.8f, -1.60f);
    glVertex2f(0.8f, -1.64f);
    glVertex2f(0.6f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(1.0f, -1.60f);
    glVertex2f(1.2f, -1.60f);
    glVertex2f(1.2f, -1.64f);
    glVertex2f(1.0f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(1.4f, -1.60f);
    glVertex2f(1.6f, -1.60f);
    glVertex2f(1.6f, -1.64f);
    glVertex2f(1.4f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(1.8f, -1.60f);
    glVertex2f(2.0f, -1.60f);
    glVertex2f(2.0f, -1.64f);
    glVertex2f(1.8f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-0.0f, -1.60f);
    glVertex2f(-0.2f, -1.60f);
    glVertex2f(-0.2f, -1.64f);
    glVertex2f(-0.0f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-0.4f, -1.60f);
    glVertex2f(-0.6f, -1.60f);
    glVertex2f(-0.6f, -1.64f);
    glVertex2f(-0.4f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-0.8f, -1.60f);
    glVertex2f(-1.0f, -1.60f);
    glVertex2f(-1.0f, -1.64f);
    glVertex2f(-0.8f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-1.2f, -1.60f);
    glVertex2f(-1.4f, -1.60f);
    glVertex2f(-1.4f, -1.64f);
    glVertex2f(-1.2f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-1.6f, -1.60f);
    glVertex2f(-1.8f, -1.60f);
    glVertex2f(-1.8f, -1.64f);
    glVertex2f(-1.6f, -1.64f);
    glEnd();

///CAR01///
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glRotatef(k,position,0.0,0.1);
    glBegin(GL_POLYGON);
    glColor3ub(178,34,34);
    glVertex2f(1.7f, -1.91f);
    glVertex2f(1.8f, -1.91f);
    glVertex2f(2.0f, -1.91f);
    glVertex2f(2.0f, -1.78f);
    glVertex2f(1.8f, -1.78f);
    glVertex2f(1.7f, -1.86f);
    glEnd();
  int k;
        GLfloat x2=1.92f; GLfloat y2=-1.91f; GLfloat radius2 =.03f;
    int triangleAmount2 = 20;
    GLfloat twicePi2 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(0,0,0);
        glVertex2f(x2, y2);
        for(k = 0; k <= triangleAmount2;k++) {
            glVertex2f(
                    x2 + (radius2 * cos(k *  twicePi2 / triangleAmount2)),
                y2 + (radius2 * sin(k * twicePi2 / triangleAmount2))
            );
        }
    glEnd();


         int l;
        GLfloat x3=1.78f; GLfloat y3=-1.91f; GLfloat radius3 =.03f;
    int triangleAmount3 = 20;
    GLfloat twicePi3 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(0,0,0);
        glVertex2f(x3, y3);
        for(l = 0; l <= triangleAmount3;l++) {
            glVertex2f(
                    x3 + (radius3 * cos(l *  twicePi3 / triangleAmount3)),
                y3 + (radius3 * sin(l * twicePi3 / triangleAmount3))
            );
        }
   glEnd();
   glPopMatrix();
   k-=0.02f;
   l-=0.02f;
   glPushMatrix();

///CAR02///
    glTranslatef(position,0.0f, 0.0f);
    glRotatef(i,position,0.0,0.1);
    glBegin(GL_POLYGON);
    glColor3ub(153, 51, 255);
    glVertex2f(-1.7f, -1.45f);
    glVertex2f(-1.8f, -1.45f);
    glVertex2f(-2.0f, -1.45f);
    glVertex2f(-2.0f, -1.3f);
    glVertex2f(-1.8f, -1.3f);
    glVertex2f(-1.7f, -1.35f);
    glEnd();
    int i;
        GLfloat x=-1.92f; GLfloat y=-1.45f; GLfloat radius =.03f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(0,0,0);
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

     int j;
        GLfloat x1=-1.78f; GLfloat y1=-1.45f; GLfloat radius1 =.03f;
    int triangleAmount1 = 20;
    GLfloat twicePi1 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(0,0,0);
        glVertex2f(x1, y1);
        for(j = 0; j <= triangleAmount1;j++) {
            glVertex2f(
                    x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
                y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
            );
        }
    glEnd();
    glPopMatrix();
    i-=0.02f;
    j-=0.02f;
glutTimerFunc(10000,display2,0);


	glFlush();
}


void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'd':


   //glutDisplayFunc(display1);
    sound();
   glutPostRedisplay();

    break;
case 'r':
   //glutDisplayFunc(night);
    sound3();
glutPostRedisplay();
    break;
    case 'w':
   //glutDisplayFunc(night);
    sound2();
glutPostRedisplay();
    break;


	}
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow(" DIFFERENT SEASON IN BANGLADESH");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(20, 20);
    gluOrtho2D(-2,2,-2,2);
    glutDisplayFunc(display);

    glutTimerFunc(200, update, 0);
    glutTimerFunc(200, update1, 0);
    glutTimerFunc(200, update2, 0);
    glutTimerFunc(200, update3, 0);
    glutTimerFunc(200, update4, 0);
    glutTimerFunc(200, update5, 0);
    glutTimerFunc(200, update6, 0);
    glutTimerFunc(200, update7, 0);
    glutTimerFunc(200, update8, 0);

    glutIdleFunc(Idle);
    glutIdleFunc(Idle1);
    glutIdleFunc(Idle2);
    glutIdleFunc(Idle3);
    glutIdleFunc(Idle4);
    glutIdleFunc(Idle5);
    glutIdleFunc(Idle6);
    glutIdleFunc(Idle7);
    glutIdleFunc(Idle8);
    initGL();
    glutKeyboardFunc(handleKeypress);
    glutMainLoop();
    return 0;
}
