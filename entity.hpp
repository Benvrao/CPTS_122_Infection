#pragma once
#include <SFML/Graphics.hpp>

class Entity {
	float x, y, speed;
	Entity(float newx, float newy, float newspeed) {
		x = newx;
		y = newy;
		speed = newspeed;
	}

};