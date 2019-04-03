#include<graphics.h>
#include<conio.h>
#include<dos.h>

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:/turboc3/bgi");
int xc=320, yc=240;
int boundo[]={ xc-200,yc+200,xc-200,yc-200,xc+200,yc-200,xc+200,yc+200,xc-200,yc+200};
int boundi[]={ xc-190,yc+190,xc-190,yc-190,xc+190,yc-190,xc+190,yc+190,xc-190,yc+190};
int sq1[]={xc-190,yc-45,xc-190,yc-190,xc-45,yc-190,xc-45,yc-45,xc-190,yc-45};
int sq2[]={xc-190,yc+45,xc-190,yc+190,xc-45,yc+190,xc-45,yc+45,xc-190,yc+45};
int sq3[]={xc+190,yc-45,xc+190,yc-190,xc+45,yc-190,xc+45,yc-45,xc+190,yc-45};
int sq4[]={xc+190,yc+45,xc+190,yc+190,xc+45,yc+190,xc+45,yc+45,xc+190,yc+45};
//setbkcolor(WHITE);
setfillstyle(EMPTY_FILL,WHITE);
fillpoly(5,boundo);
fillpoly(5,boundi);
fillpoly(5,sq1);
fillpoly(5,sq2);
fillpoly(5,sq3);
fillpoly(5,sq4);

setfillstyle(SOLID_FILL,WHITE);
setcolor(WHITE);
circle(xc,yc,45);
floodfill(xc,yc,WHITE);

setfillstyle(XHATCH_FILL,CYAN);
setcolor(CYAN);
circle(xc,yc,40);
floodfill(xc,yc,CYAN);

//setfillstyle(USER_FILL,WHITE);
setcolor(WHITE);
/////////////////////////////////
int step=0;
for(int i=1;i<=7;i++)
{
int x=xc-190;
line(x+step,yc+45,x+step,yc-45);
step=step+24;
}

 step=0;
for( i=1;i<=7;i++)
{
 int x=xc+190;
line(x-step,yc+45,x-step,yc-45);
step=step+24;
}

 step=0;
for( i=1;i<=7;i++)
{
int y=yc-190;
line(xc+45,y+step,xc-45,y+step);
step=step+24;
}

step=0;
for( i=1;i<=7;i++)
{
int y=yc+190;
line(xc+45,y-step,xc-45,y-step);
step=step+24;
}

line(xc-190,yc-15,xc-45,yc-15);
line(xc-190,yc+15,xc-45,yc+15);
line(xc+45,yc-15,xc+190,yc-15);
line(xc+45,yc+15,xc+190,yc+15);
line(xc-15,yc-45,xc-15,yc-190);
line(xc+15,yc-45,xc+15,yc-190);
line(xc-15,yc+45,xc-15,yc+190);
line(xc+15,yc+45,xc+15,yc+190);

setfillstyle(XHATCH_FILL,RED);
int blockred[]={xc-166,yc-15,xc-166,yc-45,xc-142,yc-45,xc-142,yc-15,xc-166,yc-15};
fillpoly(5,blockred);

setfillstyle(XHATCH_FILL,YELLOW);
int blockyel[]={xc+166,yc+15,xc+166,yc+45,xc+142,yc+45,xc+142,yc+15,xc+166,yc+15};
fillpoly(5,blockyel);

setfillstyle(XHATCH_FILL,BLUE);
int blockblue[]={xc+15,yc-142,xc+15,yc-166,xc+45,yc-166,xc+45,yc-142,xc+15,yc-142};
fillpoly(5,blockblue);

setfillstyle(XHATCH_FILL,GREEN);
int blockgrr[]={xc-15,yc+142,xc-15,yc+166,xc-45,yc+166,xc-45,yc+142,xc-15,yc+142};
fillpoly(5,blockgrr);

setfillstyle(XHATCH_FILL,WHITE);
int block1[]={xc+15,yc+142,xc+15,yc+118,xc+45,yc+118,xc+45,yc+142,xc+15,yc+142};
fillpoly(5,block1);

int block2[]={xc-15,yc-142,xc-15,yc-118,xc-45,yc-118,xc-45,yc-142,xc-15,yc-142};
fillpoly(5,block2);

int block3[]={xc-142,yc+15,xc-118,yc+15,xc-118,yc+45,xc-142,yc+45,xc-142,yc+15};
fillpoly(5,block3);

int block4[]={xc+142,yc-15,xc+118,yc-15,xc+118,yc-45,xc+142,yc-45,xc+142,yc-15};
fillpoly(5,block4);

setfillstyle(SOLID_FILL,RED);
setcolor(RED);
circle(xc-45-32,yc-45-32,20);
floodfill(xc-45-32,yc-45-32,RED);
circle(xc-45-32,yc-190+32,20);
floodfill(xc-45-32,yc-190+32,RED);
circle(xc-190+32,yc-45-32,20);
floodfill(xc-190+32,yc-45-32,RED);
circle(xc-190+32,yc-190+32,20);
floodfill(xc-190+32,yc-190+32,RED);

setfillstyle(SOLID_FILL,BLUE);
setcolor(BLUE);
circle(xc+45+32,yc-45-32,20);
floodfill(xc+45+32,yc-45-32,BLUE);
circle(xc+45+32,yc-190+32,20);
floodfill(xc+45+32,yc-190+32,BLUE);
circle(xc+190-32,yc-45-32,20);
floodfill(xc+190-32,yc-45-32,BLUE);
circle(xc+190-32,yc-190+32,20);
floodfill(xc+190-32,yc-190+32,BLUE);


setfillstyle(SOLID_FILL,YELLOW);
setcolor(YELLOW);
circle(xc+45+32,yc+45+32,20);
floodfill(xc+45+32,yc+45+32,YELLOW);
circle(xc+45+32,yc+190-32,20);
floodfill(xc+45+32,yc+190-32,YELLOW);
circle(xc+190-32,yc+45+32,20);
floodfill(xc+190-32,yc+45+32,YELLOW);
circle(xc+190-32,yc+190-32,20);
floodfill(xc+190-32,yc+190-32,YELLOW);

setfillstyle(SOLID_FILL,GREEN);
setcolor(GREEN);
circle(xc-45-32,yc+45+32,20);
floodfill(xc-45-32,yc+45+32,GREEN);
circle(xc-45-32,yc+190-32,20);
floodfill(xc-45-32,yc+190-32,GREEN);
circle(xc-190+32,yc+45+32,20);
floodfill(xc-190+32,yc+45+32,GREEN);
circle(xc-190+32,yc+190-32,20);
floodfill(xc-190+32,yc+190-32,GREEN);

getch();
closegraph();
}

