#include <stdio.h>
#include <dos.h>
#include <graphics.h>
void lineBres(int, int, int, int);
void main()
{
int x1, y1, xn, yn;
int gd = DETECT, gm;
initgraph(&gd, &gm, "C\\tc\\bgi");
printf("Enter starting coordinates of line: ");
scanf("%d %d", &x1, &y1);
printf("Enter ending coordinates of line: ");
scanf("%d %d", &xn, &yn);
lineBres(x1, y1, xn, yn);
getch();
}
void lineBres(int x1, int y1, int xn, int yn)
{
int dx = xn - x1, dy = yn - y1;
int di = 2 * dy - dx;
int ds = 2 * dy, dt = 2 * (dy - dx);
putpixel(x1, y1, RED);
while (x1 < xn)
{
x1++;
if (di < 0)
di = di + ds;
else
{
y1++;
di = di + dt;
}
putpixel(x1, y1, RED);
delay(20);
}
}