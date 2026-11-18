#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // অক্ষ
    line(0, 240, 640, 240);
    line(320, 0, 320, 480);

    // Original Triangle (Blue)
    int x1 = 350, y1 = 210;
    int x2 = 400, y2 = 150;
    int x3 = 450, y3 = 210;

    setcolor(LIGHTBLUE);
    line(x1, y1, x2, y2); line(x2, y2, x3, y3); line(x3, y3, x1, y1);

    // Translation (tx, ty যোগ)
    int tx = 100, ty = -80; // ty মাইনাস মানে উপরে উঠবে

    setcolor(LIGHTGREEN);
    line(x1+tx, y1+ty, x2+tx, y2+ty);
    line(x2+tx, y2+ty, x3+tx, y3+ty);
    line(x3+tx, y3+ty, x1+tx, y1+ty);

    getch();
    closegraph();
    return 0;
}