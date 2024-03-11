#include "drawing.h"

void Drawing::init(TextEngine* engine) {
    this->engine = engine;
}

void Drawing::Translate(Vector2 &p) {
    p.x = -1.f + (p.x / this->engine->hscreen_x);
    p.y = -(p.y / this->engine->hscreen_y) + 1.f;
}

void Drawing::Line(Vector2 p1, Vector2 p2) {
    glPushMatrix();
    glBegin(GL_LINES);

    Translate(p1);
    Translate(p2);

    glVertex2f(p1.x, p1.y);
    glVertex2f(p2.x, p2.y);

    glEnd();
    glPopMatrix();
}