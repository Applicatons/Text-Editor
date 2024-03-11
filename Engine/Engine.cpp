#include "Engine.h"

TextEngine::TextEngine(float screen_x, float screen_y) {

	if (!glfwInit())
	{
		window = NULL;
		return;
	}

	this->window = glfwCreateWindow(screen_x, screen_y, "Hello World", NULL, NULL);

	if (!window)
	{
		glfwTerminate();
		return;
	}

	this->screen_x = screen_x;
	this->screen_y = screen_y;

	this->hscreen_x = screen_x/2.f;
	this->hscreen_y = screen_y/2.f;
}

