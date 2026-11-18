#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // ১. চাল (Roof) - হালকা লাল
    setfillstyle(SOLID_FILL, LIGHTRED);
    int roof[] = {200, 100, 100, 200, 300, 200};
    fillpoly(3, roof);

    // ২. দেয়াল (Wall) - হালকা হলুদ
    setfillstyle(SOLID_FILL, YELLOW);
    bar(120, 200, 280, 320);

    // ৩. দরজা (Door) - নীল
    setfillstyle(SOLID_FILL, BLUE);
    bar(180, 250, 220, 320);

    // ৪. জানালা (Window) - সাইয়ান
    setfillstyle(SOLID_FILL, CYAN);
    bar(135, 220, 165, 250);

    setfillstyle(SOLID_FILL, CYAN);
    bar(235, 220, 265, 250);

    getch();
    closegraph();
    return 0;
}