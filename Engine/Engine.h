#pragma once
#include <GLFW/glfw3.h>

class TextEngine {
private:
public:
	float screen_x, screen_y;
	float hscreen_x, hscreen_y;

	GLFWwindow* window;
	TextEngine(float screen_x, float screen_y);
};