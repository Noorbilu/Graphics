
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
    int x1=350,y1=210;
    int x2=400,y2=150;
    int x3=450,y3=210;

    setcolor(LIGHTBLUE);
    drawTriangle(x1,y1,x2,y2,x3,y3);

    // Q2 - Left
    setcolor(LIGHTGREEN);
    drawTriangle(x1-300,y1,x2-300,y2,x3-300,y3);

    // Q4 - Down
    setcolor(YELLOW);
    drawTriangle(x1,y1+240,x2,y2+240,x3,y3+240);

    // Q3 - Left and Down
    setcolor(LIGHTRED);
    drawTriangle(x1-300,y1+240,
                 x2-300,y2+240,
                 x3-300,y3+240);

    getch();
    closegraph();
    return 0;
}
