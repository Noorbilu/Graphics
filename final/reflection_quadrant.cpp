#include <graphics.h>
#include <stdio.h>

int ox = 320, oy = 240;                 // midpoint origin

// triangle (math coordinate) -> screen e ankhe
// sx, sy = quadrant er sign (+1 ba -1)
void tri(int p[][2], int sx, int sy, int color) {
    int s[3][2];
    for (int i = 0; i < 3; i++) {
        s[i][0] = ox + sx * p[i][0];
        s[i][1] = oy - sy * p[i][1];
    }
    setcolor(color);
    setlinestyle(SOLID_LINE, 0, 3);
    for (int i = 0; i < 3; i++) {
        int j = (i + 1) % 3;
        line(s[i][0], s[i][1], s[j][0], s[j][1]);
    }
    setlinestyle(SOLID_LINE, 0, 1);
}

// quadrant er naam + 3 ta coordinate likhe
void label(int x, int y, char *t1, char *t2, int sx, int sy, int p[][2], int color) {
    char buf[40];
    setcolor(color);
    outtextxy(x, y, t1);
    outtextxy(x, y + 15, t2);
    for (int i = 0; i < 3; i++) {
        sprintf(buf, "(%d, %d)", ox + sx * p[i][0], oy - sy * p[i][1]);
        outtextxy(x + 15, y + 40 + i * 15, buf);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // ---- Axes + arrow ----
    setcolor(WHITE);
    line(20, oy, 620, oy);                       // X axis
    line(610, oy - 5, 620, oy);
    line(610, oy + 5, 620, oy);
    line(ox, 440, ox, 20);                       // Y axis
    line(ox - 5, 30, ox, 20);
    line(ox + 5, 30, ox, 20);
    outtextxy(625, oy - 5, "X");
    outtextxy(ox + 10, 5, "Y");
    outtextxy(ox + 10, oy + 8, "(320, 240) midpoint origin");

    // ---- Original triangle (1st quadrant, math coordinate) ----
    int p[3][2] = { {30, 30}, {80, 90}, {130, 30} };

    tri(p,  1,  1, LIGHTBLUE);     // 1st : original
    tri(p, -1,  1, LIGHTGREEN);    // 2nd : Y-axis reflection
    tri(p, -1, -1, LIGHTRED);      // 3rd : origin reflection
    tri(p,  1, -1, YELLOW);        // 4th : X-axis reflection

    // ---- Text ----
    label(460, 100, "1st Quadrant",  "(Original)",             1,  1, p, LIGHTBLUE);
    label(20,  100, "2nd Quadrant",  "(Reflect about Y-axis)", -1, 1, p, LIGHTGREEN);
    label(20,  345, "3rd Quadrant",  "(Reflect about Origin)", -1, -1, p, LIGHTRED);
    label(440, 345, "4th Quadrant",  "(Reflect about X-axis)",  1, -1, p, YELLOW);

    // ---- Formula ----
    setcolor(WHITE);
    outtextxy(330, 400, "1st : (320 + x, 240 - y)");
    outtextxy(330, 415, "2nd : (320 - x, 240 - y)");
    outtextxy(330, 430, "3rd : (320 - x, 240 + y)");
    outtextxy(330, 445, "4th : (320 + x, 240 + y)");

    getch();
    closegraph();
    return 0;
}