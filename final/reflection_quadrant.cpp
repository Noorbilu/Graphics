#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // ১. অক্ষ (Axis) আঁকা
    line(0, 240, 640, 240); // X অক্ষ
    line(320, 0, 320, 480); // Y অক্ষ

    // ২. মেইন ত্রিভুজ (১ম চতুর্ভাগ)
    int x1 = 350, y1 = 210;
    int x2 = 400, y2 = 150;
    int x3 = 450, y3 = 210;

    // Original (Blue)
    setcolor(LIGHTBLUE);
    line(x1, y1, x2, y2); line(x2, y2, x3, y3); line(x3, y3, x1, y1);

    // Y-axis Reflection (Green - ২য় চতুর্ভাগ)
    setcolor(LIGHTGREEN);
    line(640-x1, y1, 640-x2, y2);
    line(640-x2, y2, 640-x3, y3);
    line(640-x3, y3, 640-x1, y1);

    // X-axis Reflection (Yellow - ৪র্থ চতুর্ভাগ)
    setcolor(YELLOW);
    line(x1, 480-y1, x2, 480-y2);
    line(x2, 480-y2, x3, 480-y3);
    line(x3, 480-y3, x1, 480-y1);

    // Origin Reflection (Red - ৩য় চতুর্ভাগ)
    setcolor(LIGHTRED);
    line(640-x1, 480-y1, 640-x2, 480-y2);
    line(640-x2, 480-y2, 640-x3, 480-y3);
    line(640-x3, 480-y3, 640-x1, 480-y1);

    getch();
    closegraph();
    return 0;
}