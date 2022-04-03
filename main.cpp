#include <windows.h>
#include <GL/glut.h>
void display() {
	glClearColor(0.0f, 0.5f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);


	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow(" BACKGROUND");
	glutInitWindowSize(320, 320);
	glutPositionWindow(100, 100);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
