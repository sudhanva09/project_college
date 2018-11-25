#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<conio.h>
int main()
{
    int i=250,j=250,x=0,y=-1,ch,gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    while(1)
    {
        circle(i,j,30);
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
              else
               exit(0);
        }

        delay(50);
    }//end of while
closegraph();
}
