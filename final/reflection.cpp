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

//shear 
// #include <graphics.h>
// int main() {
//     int gd = DETECT, gm;
//     initgraph(&gd, &gm, "");
//     int p[10] = {200,200, 300,200, 300,300, 200,300, 200,200}, q[10];
//     float shx = 0.5;

//     for (int i = 0; i < 5; i++) {
//         q[2*i]   = p[2*i] + shx * (p[2*i+1] - 200);
//         q[2*i+1] = p[2*i+1];
//     }

//     setcolor(RED);   drawpoly(5, p);    // Original
//     setcolor(GREEN); drawpoly(5, q);    // Sheared

//     getch();
//     closegraph();
// }


// scaling
// #include <graphics.h>
// int main() {
//     int gd = DETECT, gm;
//     initgraph(&gd, &gm, "");
//     int sx = 2, sy = 2;

//     setcolor(RED);
//     rectangle(50, 50, 100, 100);                          // Original

//     setcolor(GREEN);
//     rectangle(50*sx, 50*sy, 100*sx, 100*sy);              // Scaled

//     getch();
//     closegraph();
// }


//rotation
// #include <graphics.h>
// #include <math.h>
// int main() {
//     int gd = DETECT, gm;
//     initgraph(&gd, &gm, "");
//     int p[10] = {200,200, 300,200, 300,300, 200,300, 200,200}, q[10];
//     float a = 45 * 3.1416 / 180;

//     for (int i = 0; i < 5; i++) {
//         int x = p[2*i] - 200, y = p[2*i+1] - 200;
//         q[2*i]   = 200 + x*cos(a) - y*sin(a);
//         q[2*i+1] = 200 + x*sin(a) + y*cos(a);
//     }

//     setcolor(RED);   drawpoly(5, p);    // Original
//     setcolor(GREEN); drawpoly(5, q);    // Rotated

//     getch();
//     closegraph();
// }



//translation
// #include <graphics.h>
// int main() {
//     int gd = DETECT, gm;
//     initgraph(&gd, &gm, "");
//     int tx = 150, ty = 100;

//     setcolor(RED);
//     rectangle(50, 50, 150, 150);                          // Original

//     setcolor(GREEN);
//     rectangle(50+tx, 50+ty, 150+tx, 150+ty);              // Translated

//     getch();
//     closegraph();
// }