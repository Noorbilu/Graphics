#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // অক্ষ
    line(0, 240, 640, 240);
    line(320, 0, 320, 480);

    int x1 = 350, y1 = 210;
    int x2 = 400, y2 = 150;
    int x3 = 450, y3 = 210;

    // Original (Blue)
    setcolor(LIGHTBLUE);
    line(x1, y1, x2, y2); line(x2, y2, x3, y3); line(x3, y3, x1, y1);

    // Scaling (দেড় গুণ বড় করা: sx = 1.5, sy = 1.5)
    float sx = 1.5, sy = 1.5;

    // কেন্দ্রবিন্দু (320, 240) ধরে স্কেল
    int nx1 = 320 + (x1 - 320) * sx;
    int ny1 = 240 + (y1 - 240) * sy;
    int nx2 = 320 + (x2 - 320) * sx;
    int ny2 = 240 + (y2 - 240) * sy;
    int nx3 = 320 + (x3 - 320) * sx;
    int ny3 = 240 + (y3 - 240) * sy;

    setcolor(LIGHTGREEN);
    line(nx1, ny1, nx2, ny2);
    line(nx2, ny2, nx3, ny3);
    line(nx3, ny3, nx1, ny1);

    getch();
    closegraph();
    return 0;
}