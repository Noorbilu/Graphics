#include <graphics.h>
#include <iostream>
using namespace std;

int main() 
{
    int x1, y1, x2, y2;
    cout << "Enter x1 y1 x2 y2: ";
    cin >> x1 >> y1 >> x2 >> y2;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int p = 2 * dy - dx;

    int x = x1, y = y1;

    for (int i = 0; i <= dx; i++) {
        putpixel(x, y, WHITE);
        x++;
        if (p < 0) {
            p = p + 2 * dy;
        } else {
            y++;
            p = p + 2 * dy - 2 * dx;
        }
    }

    getch();
    closegraph();
    return 0;
}