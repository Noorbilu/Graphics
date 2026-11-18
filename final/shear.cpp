#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    line(0, 240, 640, 240);
    line(320, 0, 320, 480);

    int x1 = 350, y1 = 210;
    int x2 = 400, y2 = 150;
    int x3 = 450, y3 = 210;

    // Original (Blue)
    setcolor(LIGHTBLUE);
    line(x1, y1, x2, y2); line(x2, y2, x3, y3); line(x3, y3, x1, y1);

    // X-Shear (shx = 0.5)
    float shx = 0.5;

    int nx1 = x1 + shx * (240 - y1);
    int nx2 = x2 + shx * (240 - y2);
    int nx3 = x3 + shx * (240 - y3);

    setcolor(LIGHTGREEN);
    line(nx1, y1, nx2, y2);
    line(nx2, y2, nx3, y3);
    line(nx3, y3, nx1, y1);

    getch();
    closegraph();
    return 0;
}