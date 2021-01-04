#include"libOne.h"
int createTriangle() {
    struct SHAPE_VERTEX vertices[3];
    vertices[0].x = 0;
    vertices[0].y = -1;
    vertices[1].x = 0.5;
    vertices[1].y = 1;
    vertices[2].x = -0.5;
    vertices[2].y = 1;
    return createShape(vertices, 3);
}
void gmain() {
    window(1000, 1000);
    int idx = createTriangle();
    float px = 500, py = 500, deg = 0, scale = 200;
    angleMode(DEGREES);
    while (notQuit) {
        //deg += 1;
        clear(200);
        strokeWeight(5);
        fill(0, 255, 255);
        shape(idx, px, py, deg, scale);
    }
}
