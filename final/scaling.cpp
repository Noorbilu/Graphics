#include <graphics.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int sx = 2, sy = 2;

    setcolor(RED);
    rectangle(50, 50, 100, 100);                          // Original

    setcolor(GREEN);
    rectangle(50*sx, 50*sy, 100*sx, 100*sy);              // Scaled

    getch();
    closegraph();
}