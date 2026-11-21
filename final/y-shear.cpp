
#include <graphics.h>
#include <conio.h>

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
    int x1=350,y1=210;
    int x2=400,y2=150;
    int x3=450,y3=210;

    setcolor(LIGHTBLUE);
    drawTriangle(x1,y1,x2,y2,x3,y3);

    // Y-Shearing
    float shy=-0.5;

    int nx1=x1;
    int ny1=y1+shy*(x1-320);

    int nx2=x2;
    int ny2=y2+shy*(x2-320);

    int nx3=x3;
    int ny3=y3+shy*(x3-320);

    // Draw Sheared Triangle
    setcolor(LIGHTRED);
    drawTriangle(nx1,ny1,nx2,ny2,nx3,ny3);

    getch();
    closegraph();
    return 0;
}
