#include "graphics.h"
#define window_width  1000
#define window_height 800

// Initialize GLUT and start main loop
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(window_width, window_height);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutCreateWindow("GLUT Example!!!");
    glutIdleFunc(main_loop_function);
    glutKeyboardFunc(keyboard);
    glutKeyboardUpFunc(keyboardUp);
    GL_Setup(window_width, window_height);
    game_setup();
    glutMainLoop();
}

void keyboard(unsigned char key, int x, int y) {
	switch(key) {
	case 'q':
		exit(0);
	}
}

void keyboardUp(unsigned char key, int x, int y) {
	switch(key) {
	case 'q':
		exit(0);
	}
}

// Main loop
void main_loop_function() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    using namespace std;
    cout << player.x << " " << player.y << endl;

    // Multiply in translation matrix
    glTranslatef(0, 0, -30);
    // Render player
    drawActor(player);
    // Swap buffers (color buffers, makes previous render visible)
    glutSwapBuffers();
}

void drawActor(Actor actor) {
    glTranslatef(actor.x * scale, -actor.y * scale, 0);
    glRotatef(actor.heading, 0, 0, 1);
    glBegin(GL_QUADS);
		glColor3ub(255, 000, 000);
		glVertex2f(-1, 1);
		glColor3ub(000, 255, 000);
		glVertex2f(1, 1);
		glColor3ub(000, 000, 255);
		glVertex2f(1, -1);
		glColor3ub(255, 255, 000);
		glVertex2f(-1, -1);
    glEnd();
}

// Initialze OpenGL perspective matrix
void GL_Setup(int width, int height) {
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_DEPTH_TEST);
    gluPerspective(45, (float) width / height, .1, 100);
    glMatrixMode(GL_MODELVIEW);
}

void game_setup() {
	scale = window_width / 15.5	;
}
