#include <graphics.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setcolor(WHITE);
    line(320, 0, 320, 480);                               // Mirror line

    setcolor(RED);
    rectangle(400, 100, 500, 200);                        // Original

    setcolor(GREEN);
    rectangle(640-500, 100, 640-400, 200);                // Reflected

    getch();
    closegraph();
}