#include "Vector.h"


Vector2::Vector2() {}

Vector2::Vector2(float x, float y) {
	this->x = x;
	this->y = y;
}

bool Vector2::is_valid() {
	return x != VECTOR2_MAGIC && y != VECTOR2_MAGIC;
}