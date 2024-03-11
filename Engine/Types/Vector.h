#pragma once
#define VECTOR2_MAGIC 1992.1455f

class Vector2 {
private:
public:
	float x, y = VECTOR2_MAGIC;
	Vector2();
	Vector2(float x, float y);

	bool is_valid();
};

