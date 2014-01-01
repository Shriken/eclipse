/*
 * graphics.h
 *
 *  Created on: Dec 20, 2013
 *      Author: zane
 */

#ifndef GRAPHICS_H_
#define GRAPHICS_H_

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>
#include <iostream>
#include "actor.h"

void keyboard(unsigned char, int, int);
void keyboardUp(unsigned char, int, int);
void mouseMove(int, int);
void main_loop_function();
void drawActor(Actor);
void GL_Setup(int, int);
void game_setup();

static int mouse_x;
static int mouse_y;
static Actor player;
static bool wDown;
static bool aDown;
static bool sDown;
static bool dDown;
static float scale;

#endif /* GRAPHICS_H_ */
