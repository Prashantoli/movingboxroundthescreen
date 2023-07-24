#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<dos.h>

int main(void)
{  int i;
   int gdriver = DETECT, gmode;
   initgraph(&gdriver, &gmode, "c:/tc/bgi");
   for (i=0;i<=500;i++)
   {
   cleardevice();
   setfillstyle(SOLID_FILL,RED);
   rectangle(0+i,100,50+i,150);
   floodfill(1+i,101,15);
   delay(10);
   }
   for (i=0;i<250;i++)
   {
   cleardevice();
   setfillstyle(SOLID_FILL,RED);
   rectangle(580,100+i,630,150+i);
   floodfill(581,102+i,15);
   delay(10);
   }
   for(i=0;i<=250;i++)
   {
    cleardevice();
   setfillstyle(SOLID_FILL,RED);
   rectangle(580-i,350,630-i,400);
   floodfill(581-i,352,15);
   delay(10);
   }
   for(i=0;i<=250,i++)
   {
    cleardevice();
   setfillstyle(SOLID_FILL,RED);
   rectangle(0,350-i,50,400-i);
   floodfill(1,352-i,15);
   delay(10);
   }
   getch();
   return 0;
   }
