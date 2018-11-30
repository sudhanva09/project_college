#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<conio.h>
int main()
{
    int i=250,j=250,x=0,y=-1,ch,gd=DETECT,gm;
    int k=450,m=450;
    initgraph(&gd,&gm,"");
    while(1)
    {
        setfillstyle(SOLID_FILL,RED);
        circle(i,j,20);
        floodfill(i+1,j+1,WHITE);
        setfillstyle(SOLID_FILL,GREEN);
        circle(k,m,20);
        floodfill(k+1,m+1,WHITE);
        outtextxy(400,400,"esc to exit\n");
        if(kbhit())
        {
            ch=getch();
              if(ch==13)
              {
                  x=-100;
                  y=0;
                  i=i+x;
                  j=j+y;
                  cleardevice();

              }

              else if(ch==32)
              {
                  x=-100;
                  y=0;
                  k=k+x;
                  m=m+y;
                  cleardevice();

              }

              else
               exit(0);
        }

        delay(50);
    }//end of while
closegraph();
}
