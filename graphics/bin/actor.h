/*
 * actor.h
 *
 *  Created on: Dec 20, 2013
 *      Author: zane
 */

#ifndef ACTOR_H_
#define ACTOR_H_

class Actor {
	public:
		float x, y, z;
		float heading;
		float speed;
		void setPosition(float, float, float);
		void update(Actor);
};

#endif /* ACTOR_H_ */
