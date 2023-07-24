#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include <dos.h>
void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
int i;
for (i=0;i<550;i++)
{
cleardevice();
setfillstyle(1,4);
rectangle(50+i,140,100+i,200);
floodfill(51+i,141,15);
delay(20);
}

for (i=550;i>0;i--)
{
cleardevice();
setfillstyle(1,4);
rectangle(50+i,140,100+i,200);
floodfill(51+i,141,15);
delay(20);
}
getch();
closegraph();
}