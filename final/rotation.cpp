#include <graphics.h>
#include <math.h>

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

    // ৩০ ডিগ্রি ঘুরাবো
    float a = 30 * 3.1416 / 180;

    // ৩টা পয়েন্ট ঘুরানোর সূত্র (কেন্দ্র 320, 240)
    int nx1 = 320 + (x1-320)*cos(a) - (y1-240)*sin(a);
    int ny1 = 240 + (x1-320)*sin(a) + (y1-240)*cos(a);

    int nx2 = 320 + (x2-320)*cos(a) - (y2-240)*sin(a);
    int ny2 = 240 + (x2-320)*sin(a) + (y2-240)*cos(a);

    int nx3 = 320 + (x3-320)*cos(a) - (y3-240)*sin(a);
    int ny3 = 240 + (x3-320)*sin(a) + (y3-240)*cos(a);

    setcolor(LIGHTGREEN);
    line(nx1, ny1, nx2, ny2);
    line(nx2, ny2, nx3, ny3);
    line(nx3, ny3, nx1, ny1);

    getch();
    closegraph();
    return 0;
}