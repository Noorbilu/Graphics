#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Rectangle (Green background)
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(100, 100, 400, 280);
    floodfill(101, 101, GREEN);

    // Circle (Red circle)
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(230, 190, 50);
    floodfill(230, 190, RED);

    // Stand / Pole
    setcolor(WHITE);
    rectangle(90, 90, 100, 400);

    getch();
    closegraph();
    return 0;
}