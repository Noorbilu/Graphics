#include <graphics.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int tx = 150, ty = 100;

    setcolor(RED);
    rectangle(50, 50, 150, 150);                          // Original

    setcolor(GREEN);
    rectangle(50+tx, 50+ty, 150+tx, 150+ty);              // Translated

    getch();
    closegraph();
}