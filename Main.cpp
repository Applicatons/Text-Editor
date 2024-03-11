#include <GLFW/glfw3.h>
#include <windows.h>
#include <stdio.h>

#include <Engine.h>
#include <Drawing/drawing.h>

int main(void)
{
    TextEngine engine = TextEngine(640, 480);

    if (!engine.window) {
        MessageBox(NULL, L"Failed to load GLFW/OpenGL!", L"Fatal Error", MB_ICONERROR | MB_OK);
        return 1;
    }

    glfwMakeContextCurrent(engine.window);
    DDrawing.init(&engine);

    while (!glfwWindowShouldClose(engine.window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        
        DDrawing.Line(Vector2(0, 0), Vector2(engine.hscreen_x, engine.hscreen_y));

        glfwSwapBuffers(engine.window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}