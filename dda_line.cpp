#include <graphics.h>
#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cout << "Enter x1 y1 x2 y2: ";
    cin >> x1 >> y1 >> x2 >> y2;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int dx = x2 - x1;
    int dy = y2 - y1;
    
    // কোনটা বড় (dx নাকি dy) নির্ণয়
    int steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);

    float xInc = (float)dx / steps;
    float yInc = (float)dy / steps;

    float x = x1, y = y1;
    for (int i = 0; i <= steps; i++) {
        putpixel(x, y, WHITE);
        x += xInc;
        y += yInc;
    }

    getch();
    closegraph();
    return 0;
}