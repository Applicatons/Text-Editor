#pragma once
#include <Engine.h>
#include <Types/Vector.h>
#include <GLFW/glfw3.h>

class Drawing {
private:
	TextEngine* engine;
	void Translate(Vector2 &p);

public:
	void init(TextEngine* engine);
	void Line(Vector2 p1, Vector2 p2);
};


static Drawing DDrawing = Drawing();
