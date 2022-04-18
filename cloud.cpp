#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <cstdio>
#include<iostream>
#include<math.h>
#include<MMSystem.h>

# define PI 3.14159265358979323846



void drawQuad(GLint x0, GLint y0, GLint x1, GLint y1, GLint x2, GLint y2, GLint x3, GLint y3)
{ glBegin(GL_QUADS);
  glVertex2f(x0,y0);glVertex2f(x1,y1);glVertex2f(x2,y2);glVertex2f(x3,y3);
  glEnd();
}


void DrawCircle(float x, float y, float r, int triangleAmount) {

    int i;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (r * cos(i *  twicePi / triangleAmount)),
			    y + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glFlush();
}

void background()
{
    glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-1.0f, 0.1f);
	glVertex2f(-0.95f, .15f);
	glVertex2f(-.93f, 0.15f);
	glVertex2f(-0.9f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.93f, 0.1f);
	glVertex2f(-0.83f, .25f);
	glVertex2f(-.79f, 0.255f);
	glVertex2f(-0.74f, 0.20f);
	glVertex2f(-0.70f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.73f, 0.1f);
	glVertex2f(-0.73f, 0.15f);
	glVertex2f(-0.7f, .20f);
	glVertex2f(-.65f, 0.18f);
	glVertex2f(-0.60f, 0.15f);
	glVertex2f(-0.55f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-.57f, 0.1f);
	glVertex2f(-0.52f, .15f);
	glVertex2f(-.50f, 0.15f);
	glVertex2f(-0.47f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-.50f, 0.1f);
	glVertex2f(-0.45f, .15f);
	glVertex2f(-.43f, 0.15f);
	glVertex2f(-0.40f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.43f, 0.1f);
	glVertex2f(-0.33f, .25f);
	glVertex2f(-.29f, 0.255f);
	glVertex2f(-0.24f, 0.20f);
	glVertex2f(-0.20f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.23f, 0.1f);
	glVertex2f(-0.23f, 0.15f);
	glVertex2f(-0.20f, .20f);
	glVertex2f(-.15f, 0.18f);
	glVertex2f(-0.10f, 0.15f);
	glVertex2f(-0.05f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.08f, 0.1f);
	glVertex2f(.08f, .25f);
	glVertex2f(.12f, 0.255f);
	glVertex2f(0.17f, 0.20f);
	glVertex2f(0.22f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(.21f, 0.1f);
	glVertex2f(0.28f, .15f);
	glVertex2f(.30f, 0.15f);
	glVertex2f(0.33f, 0.1f);

	glEnd();
}

void cloud1()
{

         glColor3ub(255, 217, 255);
         DrawCircle(0.5f, 0.8f, 0.05f, 20);
         DrawCircle(0.55f, 0.78f, 0.05f, 20);
         DrawCircle(0.45f, 0.78f, 0.05f, 20);
         DrawCircle(0.52f, 0.75f, 0.05f, 20);
         DrawCircle(0.6f, 0.77f, 0.05f, 20);
	     glEnd();
         glFlush();

}


void cloud2()
{
         glColor3ub(255, 217, 255);
         DrawCircle(-0.5f, 0.8f, 0.05f, 20);
         DrawCircle(-0.55f, 0.78f, 0.05f, 20);
         DrawCircle(-0.45f, 0.78f, 0.05f, 20);
         DrawCircle(-0.52f, 0.75f, 0.05f, 20);
         DrawCircle(-0.6f, 0.77f, 0.05f, 20);
	     glEnd();
         glFlush();
}

void display(){

    cloud1();
    cloud2();

     background();


    glFlush();
    glutSwapBuffers();
    }



void myInit(void){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glColor3f(.0f,.0f,.0f);
    glLoadIdentity();
    gluOrtho2D(-2, 2, -2, 2);
}
int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitWindowSize(1920,1080);
    glutCreateWindow("FOX AND CROW");
    //glutPostRedisplay();
    glutDisplayFunc(display);
    //glutKeyboardFunc(mykeyboard);
    myInit();
    //glutTimerFunc(30, update2, 0);
    glutMainLoop();
    return 0;
}


