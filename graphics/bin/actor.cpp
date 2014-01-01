/*
 * actor.cpp
 *
 *  Created on: Dec 20, 2013
 *      Author: zane
 */

#include "graphics.h"
#include "actor.h"

void Actor::setPosition(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
	heading = 0;
	speed = 5;
}

void Actor::update(Actor target) {
	heading = atan2(target.x - x, target.y - y);
}
