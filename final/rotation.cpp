#include <graphics.h>
#include <math.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int p[10] = {200,200, 300,200, 300,300, 200,300, 200,200}, q[10];
    float a = 45 * 3.1416 / 180;

    for (int i = 0; i < 5; i++) {
        int x = p[2*i] - 200, y = p[2*i+1] - 200;
        q[2*i]   = 200 + x*cos(a) - y*sin(a);
        q[2*i+1] = 200 + x*sin(a) + y*cos(a);
    }

    setcolor(RED);   drawpoly(5, p);    // Original
    setcolor(GREEN); drawpoly(5, q);    // Rotated

    getch();
    closegraph();
}