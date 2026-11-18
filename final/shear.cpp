#include <graphics.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int p[10] = {200,200, 300,200, 300,300, 200,300, 200,200}, q[10];
    float shx = 0.5;

    for (int i = 0; i < 5; i++) {
        q[2*i]   = p[2*i] + shx * (p[2*i+1] - 200);
        q[2*i+1] = p[2*i+1];
    }

    setcolor(RED);   drawpoly(5, p);    // Original
    setcolor(GREEN); drawpoly(5, q);    // Sheared

    getch();
    closegraph();
}