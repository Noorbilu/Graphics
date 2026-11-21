
#include <graphics.h>

// Draw Triangle
void drawTriangle(int x1, int y1, int x2, int y2,
                  int x3, int y3) {
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
}

int main() {
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"");

    // Axis
    line(0,240,640,240);
    line(320,0,320,480);

    // Original Triangle (Q1)
    int x1=330,y1=210;
    int x2=350,y2=180;
    int x3=370,y3=210;

    setcolor(LIGHTBLUE);
    drawTriangle(x1,y1,x2,y2,x3,y3);

    // X-Shearing
    float shx=-2.0;

    int nx1=x1+shx*(240-y1);
    int nx2=x2+shx*(240-y2);
    int nx3=x3+shx*(240-y3);

    // Draw Sheared Triangle (Q2)
    setcolor(LIGHTRED);
    drawTriangle(nx1,y1,nx2,y2,nx3,y3);

    getch();
    closegraph();
    return 0;
}
