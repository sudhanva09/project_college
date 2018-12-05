#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void player1(int *);
void player2(int *);
int main()
{

    int gd= DETECT,gm;
    int i=0,j=0,g=0,k=0,y=0,z=0,a=0,b=0;
    char fr,enter,zy,yx,abc;
    int pos=50,y1=423,y2=50,chh, c=0,d=0,e=0,f=0,h=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,ab=0,bc=0,cd=0,de=0,ef=0,fg=0,gh=0,hi=0,ij=0,jk=0,kl=0,lm=0,mn=0,no=0,op=0,pq=0,qr=0,rs=0,st=0,tu=0,ch;
int uv=0,vw=0,wx=0,xy=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0,a11=0,a12=0,a13=0,a14=0,a15=0,a16=0,a17=0,a18=0,a19=0,a20=0,a21=0,a22=0,a23=0,a24=0,a25=0,a26=0,a27=0,a28=0,a29=0,a30=0,a31=0,a32=0,a33=0,a34=0,a35=0,a36=0,a37=0,a38=0,a39=0,a40=0,a41=0,a42=0,a43=0,a44=0,a45=0,a46=0,a47=0;
int ba,cb,dc,ed,fe,gf,hg,ih,ji,kj,poss=423,possss=423,b1,b2,b3,b4,b5,b6,b7,b8,b9;
   //////////front/////////

initgraph(&gd, &gm, NULL);
     setfillstyle(8,YELLOW);
    floodfill(0,0,WHITE);
    settextstyle(3,0,7);
    setcolor(BLUE);
    outtextxy(30,100,"SNAKES");
    outtextxy(230,200,"&");
    outtextxy(300,290,"LADDERS");


setcolor(RED);
setlinestyle(0,0,5);


line(425,40,525,175);
line(455,25,555,160);
line(450,67,470,52);
line(480,110,500,92);
line(510,153,535,132);


setcolor(RED);
setlinestyle(0,0,5);


line(335,40,435,175);
line(365,25,465,160);
line(360,67,380,52);
line(390,110,410,92);
line(420,153,445,132);

setcolor(BLUE);
setlinestyle(0,0,5);
arc(100,280,320,70,50);
circle(115,233,5);
arc(154,359,110,240,50);

setcolor(BLUE);
setlinestyle(0,0,5);
arc(50,280,320,70,50);
circle(65,233,5);
arc(104,359,110,240,50);

 settextstyle(8,0,3);
    setcolor(WHITE);
    outtextxy(130,420,"press ENTER to continue");

scanf("%c",&fr);

   if(fr==10)
   {

       initgraph(&gd, &gm, NULL);
     setfillstyle(9,YELLOW);
    floodfill(0,0,WHITE);
    settextstyle(3,0,0);
    setcolor(BLUE);
    outtextxy(30,100,"ABOUT THE GAME ");
    settextstyle(3,0,2);
    setcolor(WHITE);
    outtextxy(30,150,"1.THE GAME IS CONSIST OF TWO PLAYERS.");
    outtextxy(30,200,"2.THE FIRST PLAYER IS OF WHITE COLOUR.");
    outtextxy(30,250,"3.THE SECOND PLAYER IS OF GREEN COLOUR.");
     outtextxy(30,300,"4.PRESS ENTER TO THROW DICE ONE AFTER THE ANOTHER");
      outtextxy(30,350,"5.BEWARE OF SNAKES ");
      outtextxy(30,400,"6.AND TRY TO CLIMB LADDERS AS MUCH AS POSSIBLE");

        outtextxy(30,450,"7.PRESS ENTER TO START THE GAME..!!");

       scanf("%c",&abc);
       if(abc==10)
       {
           initgraph(&gd, &gm, NULL);
    line(0,0,0,700);
    for(i=0;i<11;i++)
    {
        j+=50;
        line(30+j,0,30+j,450);
    }
    j=0;
    line(0,0,700,0);
    for(g=0;g<11;g++)
    {
        k+=45;
        line(80,0+k,580,0+k);

    }
         k=0;
///////////////new for clr////////


setfillstyle(SOLID_FILL,YELLOW);

    line(80,0,130,0);
    line(80,0,80,45);
    line(80,45,130,45);
    line(130,0,130,45);
    floodfill(81,10,WHITE);
    for(y=0;y<4;y++)
    {
        a+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+a,0,130+a,0);
    line(80+a,0,80+a,45);
    line(80+a,45,130+a,45);
    line(130+a,0,130+a,45);
    floodfill(81+a,10,WHITE);
    }
    a=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(130,0,180,0);
    line(130,0,130,45);
    line(80,45,180,45);
    line(180,0,180,45);
    floodfill(131,10,WHITE);

    for(z=0;z<4;z++)
    {
        b+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+b,0,180+b,0);
    line(130+b,0,130+b,45);
    line(180+b,45,180+b,45);
    line(180+b,0,180+b,45);
    floodfill(131+b,10,WHITE);
    }
    b=0;

    setfillstyle(SOLID_FILL,BLUE);
    line(80,45,130,45);
    line(80,45,80,90);
    line(80,90,130,90);
    line(130,45,130,90);
    floodfill(81,55,WHITE);
    for(e=0;e<4;e++)
    {
        c+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+c,45,130+c,45);
    line(80+c,45,80+c,90);
    line(80+c,90,130+c,90);
    line(130+c,45,130+c,90);
    floodfill(81+c,55,WHITE);
    }
c=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,45,180,45);
    line(130,45,130,90);
    line(80,90,180,90);
    line(180,45,180,90);
    floodfill(131,50,WHITE);

    for(f=0;f<4;f++)
    {
        d+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+d,45,180+d,45);
    line(130+d,45,130+d,90);
    line(80+d,90,180+d,90);
    line(180+d,45,180+d,90);
    floodfill(131+d,55,WHITE);

    }
d=0;


        setfillstyle(SOLID_FILL,YELLOW);
    line(80,90,130,90);
    line(80,135,80,135);
    line(80,135,130,135);
    line(130,90,130,135);
    floodfill(81,100,WHITE);
    for(m=0;m<4;m++)
    {
        h+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+h,90,130+h,90);
    line(80+h,135,80+h,135);
    line(80+h,135,130+h,135);
    line(130+h,90,130+h,135);
    floodfill(81+h,100,WHITE);
    }

h=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(130,90,180,90);
    line(130,90,130,135);
    line(80,135,180,135);
    line(180,90,180,135);
    floodfill(131,100,WHITE);

    for(n=0;n<4;n++)
    {
        l+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+l,90,180+l,90);
    line(130+l,90,130+l,135);
    line(80+l,135,180+l,135);
    line(180+l,90,180+l,135);
    floodfill(131+l,100,WHITE);

    }
l=0;


        setfillstyle(SOLID_FILL,BLUE);
    line(80,135,130,135);
    line(80,180,80,180);
    line(80,180,130,180);
    line(130,135,130,180);
    floodfill(81,145,WHITE);
    for(o=0;o<4;o++)
    {
        p+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+p,135,130+p,135);
    line(80+p,180,80+p,180);
    line(80+p,180,130+p,180);
    line(130+p,135,130+p,180);
    floodfill(81+p,145,WHITE);
    }
p=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,135,180,135);
    line(130,135,130,180);
    line(80,180,180,180);
    line(180,135,180,180);
    floodfill(131,145,WHITE);

    for(q=0;q<4;q++)
    {
        r+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+r,135,180+r,135);
    line(130+r,135,130+r,180);
    line(80+r,180,180+r,180);
    line(180+r,135,180+r,180);
    floodfill(131+r,145,WHITE);

    }
r=0;

setfillstyle(SOLID_FILL,YELLOW);
    line(80,180,130,180);
    line(80,225,80,225);
    line(80,225,130,225);
    line(130,180,130,225);
    floodfill(81,190,WHITE);
    for(s=0;s<4;s++)
    {
        t+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+t,180,130+t,180);
    line(80+t,225,80+t,225);
    line(80+t,225,130+t,225);
    line(130+t,180,130+t,225);
    floodfill(81+t,190,WHITE);
    }
t=0;

 setfillstyle(SOLID_FILL,BLUE);
    line(130,180,180,180);
    line(130,180,130,225);
    line(80,225,180,225);
    line(180,180,180,225);
    floodfill(131,190,WHITE);

    for(u=0;u<4;u++)
    {
        v+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+v,180,180+v,180);
    line(130+v,180,130+v,225);
    line(80+v,225,180+v,225);
    line(180+v,180,180+v,225);
    floodfill(131+v,190,WHITE);
    }

    v=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(80,225,130,225);
    line(80,270,80,270);
    line(80,270,130,270);
    line(130,225,130,270);
    floodfill(81,235,WHITE);
    for(ab=0;ab<4;ab++)
    {
        bc+=100;
setfillstyle(SOLID_FILL,BLUE);
 line(80+bc,225,130+bc,225);
    line(80+bc,270,80+bc,270);
    line(80+bc,270,130+bc,270);
    line(130+bc,225,130+bc,270);
    floodfill(81+bc,235,WHITE);
    }
    bc=0;



setfillstyle(SOLID_FILL,YELLOW);
    line(130,225,180,225);
    line(130,225,130,270);
    line(80,270,180,270);
    line(180,225,180,270);
    floodfill(131,235,WHITE);

    for(cd=0;cd<4;cd++)
    {
        de+=100;
         setfillstyle(SOLID_FILL,YELLOW);
          line(130+de,225,180+de,225);
    line(130+de,225,130+de,270);
    line(80+de,270,180+de,270);
    line(180+de,225,180+de,270);
    floodfill(131+de,235,WHITE);
    }
de=0;

        setfillstyle(SOLID_FILL,YELLOW);
    line(80,270,130,270);
    line(80,315,80,315);
    line(80,315,130,315);
    line(130,270,130,315);
    floodfill(81,280,WHITE);
    for(ef=0;ef<4;ef++)
    {
        fg+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+fg,270,130+fg,270);
    line(80+fg,315,80+fg,315);
    line(80+fg,315,130+fg,315);
    line(130+fg,270,130+fg,315);
    floodfill(81+fg,280,WHITE);
    }
fg=0;

setfillstyle(SOLID_FILL,BLUE);
    line(130,270,180,270);
    line(130,270,130,315);
    line(80,315,180,315);
    line(180,270,180,315);
    floodfill(131,280,WHITE);

    for(gh=0;gh<4;gh++)
    {
        hi+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+hi,270,180+hi,270);
    line(130+hi,270,130+hi,315);
    line(80+hi,315,180+hi,315);
    line(180+hi,270,180+hi,315);
    floodfill(131+hi,280,WHITE);
    }
    hi=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(80,315,130,315);
    line(80,360,80,360);
    line(80,360,130,360);
    line(130,315,130,360);
    floodfill(81,325,WHITE);
    for(ij=0;ij<4;ij++)
    {
        jk+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+jk,315,130+jk,315);
    line(80+jk,360,80+jk,360);
    line(80+jk,360,130+jk,360);
    line(130+jk,315,130+jk,360);
    floodfill(81+jk,325,WHITE);
    }
    jk=0;


    setfillstyle(SOLID_FILL,YELLOW);
    line(130,315,180,315);
    line(130,315,130,360);
    line(80,360,180,360);
    line(180,315,180,360);
    floodfill(131,325,WHITE);

    for(kl=0;kl<4;kl++)
    {
        lm+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+lm,315,180+lm,315);
    line(130+lm,315,130+lm,360);
    line(80+lm,360,180+lm,360);
    line(180+lm,315,180+lm,360);
    floodfill(131+lm,325,WHITE);
    }
lm=0;


     setfillstyle(SOLID_FILL,YELLOW);
    line(80,360,130,360);
    line(80,405,80,405);
    line(80,405,130,405);
    line(130,360,130,405);
    floodfill(81,370,WHITE);
    for(mn=0;mn<4;mn++)
    {
        no+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+no,360,130+no,360);
    line(80+no,405,80+no,405);
    line(80+no,405,130+no,405);
    line(130+no,360,130+no,405);
    floodfill(81+no,370,WHITE);
    }
no=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(130,360,180,360);
    line(130,360,130,405);
    line(80,405,180,405);
    line(180,360,180,405);
    floodfill(131,370,WHITE);

    for(op=0;op<4;op++)
    {
        pq+=100;
         setfillstyle(SOLID_FILL,BLUE);
         line(130+pq,360,180+pq,360);
    line(130+pq,360,130+pq,405);
    line(80+pq,405,180+pq,405);
    line(180+pq,360,180+pq,405);
    floodfill(131+pq,370,WHITE);
    }
pq=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(80,405,130,405);
    line(80,450,80,450);
    line(80,450,130,450);
    line(130,405,130,450);
    floodfill(81,415,WHITE);
    for(qr=0;qr<4;qr++)
    {
    rs+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+rs,405,130+rs,405);
    line(80+rs,450,80+rs,450);
    line(80+rs,450,130+rs,450);
    line(130+rs,405,130+rs,450);
    floodfill(81+rs,415,WHITE);
    }
    rs=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,405,180,405);
    line(130,405,130,450);
    line(130,450,180,450);
    line(180,405,180,450);
    floodfill(131,415,WHITE);

    for(st=0;st<4;st++)
    {
        tu+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+tu,405,180+tu,405);
    line(130+tu,405,130+tu,450);
    line(130+tu,450,180+tu,450);
    line(180+tu,405,180+tu,450);
    floodfill(131+tu,415,WHITE);
    }
    tu=0;










    ////////////////numbers/////////////




outtextxy(103,420,"1");  ///1st line
outtextxy(153,420,"2");
outtextxy(203,420,"3");
outtextxy(253,420,"4");
outtextxy(303,420,"5");
outtextxy(353,420,"6");
outtextxy(403,420,"7");
outtextxy(453,420,"8");
outtextxy(503,420,"9");
outtextxy(553,420,"10");


outtextxy(103,375,"20");  ///2nd line
outtextxy(153,375,"19");
outtextxy(203,375,"18");
outtextxy(253,375,"17");
outtextxy(303,375,"16");
outtextxy(353,375,"15");
outtextxy(403,375,"14");
outtextxy(453,375,"13");
outtextxy(503,375,"12");
outtextxy(553,375,"11");


outtextxy(103,335,"21");  ///3rd line
outtextxy(153,335,"22");
outtextxy(203,335,"23");
outtextxy(253,335,"24");
outtextxy(303,335,"25");
outtextxy(353,335,"26");
outtextxy(403,335,"27");
outtextxy(453,335,"28");
outtextxy(503,335,"29");
outtextxy(553,335,"30");



outtextxy(103,290,"40");  ///4th line
outtextxy(153,290,"39");
outtextxy(203,290,"38");
outtextxy(253,290,"37");
outtextxy(303,290,"36");
outtextxy(353,290,"35");
outtextxy(403,290,"34");
outtextxy(453,290,"33");
outtextxy(503,290,"32");
outtextxy(553,290,"31");


outtextxy(103,245,"41");  ///5th line
outtextxy(153,245,"42");
outtextxy(203,245,"43");
outtextxy(253,245,"44");
outtextxy(303,245,"45");
outtextxy(353,245,"46");
outtextxy(403,245,"47");
outtextxy(453,245,"48");
outtextxy(503,245,"49");
outtextxy(553,245,"50");


outtextxy(103,200,"60");  ///6th line
outtextxy(153,200,"59");
outtextxy(203,200,"58");
outtextxy(253,200,"57");
outtextxy(303,200,"56");
outtextxy(353,200,"55");
outtextxy(403,200,"54");
outtextxy(453,200,"53");
outtextxy(503,200,"52");
outtextxy(553,200,"51");


outtextxy(103,155,"61");  ///7th line
outtextxy(153,155,"62");
outtextxy(203,155,"63");
outtextxy(253,155,"64");
outtextxy(303,155,"65");
outtextxy(353,155,"66");
outtextxy(403,155,"67");
outtextxy(453,155,"68");
outtextxy(503,155,"69");
outtextxy(553,155,"70");


outtextxy(103,110,"80");  ///8th line
outtextxy(153,110,"79");
outtextxy(203,110,"78");
outtextxy(253,110,"77");
outtextxy(303,110,"76");
outtextxy(353,110,"75");
outtextxy(403,110,"74");
outtextxy(453,110,"73");
outtextxy(503,110,"72");
outtextxy(553,110,"71");


outtextxy(103,65,"81");  ///9th line
outtextxy(153,65,"82");
outtextxy(203,65,"83");
outtextxy(253,65,"84");
outtextxy(303,65,"85");
outtextxy(353,65,"86");
outtextxy(403,65,"87");
outtextxy(453,65,"88");
outtextxy(503,65,"89");
outtextxy(553,65,"90");


outtextxy(103,20,"100");  ///10th line
outtextxy(153,20,"99");
outtextxy(203,20,"98");
outtextxy(253,20,"97");
outtextxy(303,20,"96");
outtextxy(353,20,"95");
outtextxy(403,20,"94");
outtextxy(453,20,"93");
outtextxy(503,20,"92");
outtextxy(553,20,"91");


////////////////snakes//////
setcolor(RED);
setlinestyle(0,0,5);
arc(100,100,320,70,50);
circle(115,53,5);
arc(154,179,110,220,50);




setcolor(RED);
setlinestyle(0,0,5);
arc(250,250,320,70,50);
circle(265,203,5);
arc(304,329,110,280,50);



setcolor(RED);
setlinestyle(0,0,5);

 arc(400,180,320,80,100);
 circle(415,80,5);
    arc(509,338,110,233,100);





    ////////ladders///////





setcolor(GREEN);
setlinestyle(0,0,5);


line(185,40,285,175);
line(215,25,315,160);
line(210,67,230,52);
line(240,110,260,92);
line(270,153,295,132);

setcolor(GREEN);
setlinestyle(0,0,5);

line(85,265,185,400);
line(115,260,215,385);
line(110,302,130,277);
line(140,345,160,317);
line(170,387,195,357);

setcolor(GREEN);
setlinestyle(0,0,5);


line(533,170,537,440);
line(572,170,577,440);
line(535,230,575,232);
line(535,320,575,322);
line(535,410,575,412);



line(383,110,387,250);
line(418,110,422,250);
line(383,140,418,144);
line(383,210,418,214);







/////////dice/////

setfillstyle(SOLID_FILL,RED);
floodfill(1 , 1,WHITE);




settextstyle(0,0,7);
    setcolor(GREEN);
    circle(y2,y1,17);

settextstyle(0,0,7);
    setcolor(WHITE);
    circle(pos,poss,17);

 for( ; ; )
{
     printf("player 1st turn");
      scanf("%c",&zy);
    if(zy==10)
    {

srand(time(NULL));



    ch=(rand()%6)+1;

    printf("no. on dice = %d\n",ch);

    switch(ch)
    {


        case 1:cleardevice();

                                             /////////////start////////
initgraph(&gd, &gm, NULL);




    line(0,0,0,700);
    for(i=0;i<11;i++)
    {
        j+=50;
        line(30+j,0,30+j,450);
    }
    j=0;
    line(0,0,700,0);
    for(g=0;g<11;g++)
    {
        k+=45;
        line(80,0+k,580,0+k);

    }
         k=0;





///////////////new for clr////////


setfillstyle(SOLID_FILL,YELLOW);

    line(80,0,130,0);
    line(80,0,80,45);
    line(80,45,130,45);
    line(130,0,130,45);
    floodfill(81,10,WHITE);
    for(y=0;y<4;y++)
    {
        a+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+a,0,130+a,0);
    line(80+a,0,80+a,45);
    line(80+a,45,130+a,45);
    line(130+a,0,130+a,45);
    floodfill(81+a,10,WHITE);
    }
    a=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(130,0,180,0);
    line(130,0,130,45);
    line(80,45,180,45);
    line(180,0,180,45);
    floodfill(131,10,WHITE);

    for(z=0;z<4;z++)
    {
        b+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+b,0,180+b,0);
    line(130+b,0,130+b,45);
    line(180+b,45,180+b,45);
    line(180+b,0,180+b,45);
    floodfill(131+b,10,WHITE);
    }
    b=0;

    setfillstyle(SOLID_FILL,BLUE);
    line(80,45,130,45);
    line(80,45,80,90);
    line(80,90,130,90);
    line(130,45,130,90);
    floodfill(81,55,WHITE);
    for(e=0;e<4;e++)
    {
        c+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+c,45,130+c,45);
    line(80+c,45,80+c,90);
    line(80+c,90,130+c,90);
    line(130+c,45,130+c,90);
    floodfill(81+c,55,WHITE);
    }
c=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,45,180,45);
    line(130,45,130,90);
    line(80,90,180,90);
    line(180,45,180,90);
    floodfill(131,50,WHITE);

    for(f=0;f<4;f++)
    {
        d+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+d,45,180+d,45);
    line(130+d,45,130+d,90);
    line(80+d,90,180+d,90);
    line(180+d,45,180+d,90);
    floodfill(131+d,55,WHITE);

    }
d=0;


        setfillstyle(SOLID_FILL,YELLOW);
    line(80,90,130,90);
    line(80,135,80,135);
    line(80,135,130,135);
    line(130,90,130,135);
    floodfill(81,100,WHITE);
    for(m=0;m<4;m++)
    {
        h+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+h,90,130+h,90);
    line(80+h,135,80+h,135);
    line(80+h,135,130+h,135);
    line(130+h,90,130+h,135);
    floodfill(81+h,100,WHITE);
    }

h=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(130,90,180,90);
    line(130,90,130,135);
    line(80,135,180,135);
    line(180,90,180,135);
    floodfill(131,100,WHITE);

    for(n=0;n<4;n++)
    {
        l+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+l,90,180+l,90);
    line(130+l,90,130+l,135);
    line(80+l,135,180+l,135);
    line(180+l,90,180+l,135);
    floodfill(131+l,100,WHITE);

    }
l=0;


        setfillstyle(SOLID_FILL,BLUE);
    line(80,135,130,135);
    line(80,180,80,180);
    line(80,180,130,180);
    line(130,135,130,180);
    floodfill(81,145,WHITE);
    for(o=0;o<4;o++)
    {
        p+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+p,135,130+p,135);
    line(80+p,180,80+p,180);
    line(80+p,180,130+p,180);
    line(130+p,135,130+p,180);
    floodfill(81+p,145,WHITE);
    }
p=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,135,180,135);
    line(130,135,130,180);
    line(80,180,180,180);
    line(180,135,180,180);
    floodfill(131,145,WHITE);

    for(q=0;q<4;q++)
    {
        r+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+r,135,180+r,135);
    line(130+r,135,130+r,180);
    line(80+r,180,180+r,180);
    line(180+r,135,180+r,180);
    floodfill(131+r,145,WHITE);

    }
r=0;

setfillstyle(SOLID_FILL,YELLOW);
    line(80,180,130,180);
    line(80,225,80,225);
    line(80,225,130,225);
    line(130,180,130,225);
    floodfill(81,190,WHITE);
    for(s=0;s<4;s++)
    {
        t+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+t,180,130+t,180);
    line(80+t,225,80+t,225);
    line(80+t,225,130+t,225);
    line(130+t,180,130+t,225);
    floodfill(81+t,190,WHITE);
    }
t=0;

 setfillstyle(SOLID_FILL,BLUE);
    line(130,180,180,180);
    line(130,180,130,225);
    line(80,225,180,225);
    line(180,180,180,225);
    floodfill(131,190,WHITE);

    for(u=0;u<4;u++)
    {
        v+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+v,180,180+v,180);
    line(130+v,180,130+v,225);
    line(80+v,225,180+v,225);
    line(180+v,180,180+v,225);
    floodfill(131+v,190,WHITE);
    }

    v=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(80,225,130,225);
    line(80,270,80,270);
    line(80,270,130,270);
    line(130,225,130,270);
    floodfill(81,235,WHITE);
    for(ab=0;ab<4;ab++)
    {
        bc+=100;
setfillstyle(SOLID_FILL,BLUE);
 line(80+bc,225,130+bc,225);
    line(80+bc,270,80+bc,270);
    line(80+bc,270,130+bc,270);
    line(130+bc,225,130+bc,270);
    floodfill(81+bc,235,WHITE);
    }
    bc=0;



setfillstyle(SOLID_FILL,YELLOW);
    line(130,225,180,225);
    line(130,225,130,270);
    line(80,270,180,270);
    line(180,225,180,270);
    floodfill(131,235,WHITE);

    for(cd=0;cd<4;cd++)
    {
        de+=100;
         setfillstyle(SOLID_FILL,YELLOW);
          line(130+de,225,180+de,225);
    line(130+de,225,130+de,270);
    line(80+de,270,180+de,270);
    line(180+de,225,180+de,270);
    floodfill(131+de,235,WHITE);
    }
de=0;

        setfillstyle(SOLID_FILL,YELLOW);
    line(80,270,130,270);
    line(80,315,80,315);
    line(80,315,130,315);
    line(130,270,130,315);
    floodfill(81,280,WHITE);
    for(ef=0;ef<4;ef++)
    {
        fg+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+fg,270,130+fg,270);
    line(80+fg,315,80+fg,315);
    line(80+fg,315,130+fg,315);
    line(130+fg,270,130+fg,315);
    floodfill(81+fg,280,WHITE);
    }
fg=0;

setfillstyle(SOLID_FILL,BLUE);
    line(130,270,180,270);
    line(130,270,130,315);
    line(80,315,180,315);
    line(180,270,180,315);
    floodfill(131,280,WHITE);

    for(gh=0;gh<4;gh++)
    {
        hi+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+hi,270,180+hi,270);
    line(130+hi,270,130+hi,315);
    line(80+hi,315,180+hi,315);
    line(180+hi,270,180+hi,315);
    floodfill(131+hi,280,WHITE);
    }
    hi=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(80,315,130,315);
    line(80,360,80,360);
    line(80,360,130,360);
    line(130,315,130,360);
    floodfill(81,325,WHITE);
    for(ij=0;ij<4;ij++)
    {
        jk+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+jk,315,130+jk,315);
    line(80+jk,360,80+jk,360);
    line(80+jk,360,130+jk,360);
    line(130+jk,315,130+jk,360);
    floodfill(81+jk,325,WHITE);
    }
    jk=0;


    setfillstyle(SOLID_FILL,YELLOW);
    line(130,315,180,315);
    line(130,315,130,360);
    line(80,360,180,360);
    line(180,315,180,360);
    floodfill(131,325,WHITE);

    for(kl=0;kl<4;kl++)
    {
        lm+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+lm,315,180+lm,315);
    line(130+lm,315,130+lm,360);
    line(80+lm,360,180+lm,360);
    line(180+lm,315,180+lm,360);
    floodfill(131+lm,325,WHITE);
    }
lm=0;


     setfillstyle(SOLID_FILL,YELLOW);
    line(80,360,130,360);
    line(80,405,80,405);
    line(80,405,130,405);
    line(130,360,130,405);
    floodfill(81,370,WHITE);
    for(mn=0;mn<4;mn++)
    {
        no+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+no,360,130+no,360);
    line(80+no,405,80+no,405);
    line(80+no,405,130+no,405);
    line(130+no,360,130+no,405);
    floodfill(81+no,370,WHITE);
    }
no=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(130,360,180,360);
    line(130,360,130,405);
    line(80,405,180,405);
    line(180,360,180,405);
    floodfill(131,370,WHITE);

    for(op=0;op<4;op++)
    {
        pq+=100;
         setfillstyle(SOLID_FILL,BLUE);
         line(130+pq,360,180+pq,360);
    line(130+pq,360,130+pq,405);
    line(80+pq,405,180+pq,405);
    line(180+pq,360,180+pq,405);
    floodfill(131+pq,370,WHITE);
    }
pq=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(80,405,130,405);
    line(80,450,80,450);
    line(80,450,130,450);
    line(130,405,130,450);
    floodfill(81,415,WHITE);
    for(qr=0;qr<4;qr++)
    {
    rs+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+rs,405,130+rs,405);
    line(80+rs,450,80+rs,450);
    line(80+rs,450,130+rs,450);
    line(130+rs,405,130+rs,450);
    floodfill(81+rs,415,WHITE);
    }
    rs=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,405,180,405);
    line(130,405,130,450);
    line(130,450,180,450);
    line(180,405,180,450);
    floodfill(131,415,WHITE);

    for(st=0;st<4;st++)
    {
        tu+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+tu,405,180+tu,405);
    line(130+tu,405,130+tu,450);
    line(130+tu,450,180+tu,450);
    line(180+tu,405,180+tu,450);
    floodfill(131+tu,415,WHITE);
    }
    tu=0;










    ////////////////numbers/////////////




outtextxy(103,420,"1");  ///1st line
outtextxy(153,420,"2");
outtextxy(203,420,"3");
outtextxy(253,420,"4");
outtextxy(303,420,"5");
outtextxy(353,420,"6");
outtextxy(403,420,"7");
outtextxy(453,420,"8");
outtextxy(503,420,"9");
outtextxy(553,420,"10");


outtextxy(103,375,"20");  ///2nd line
outtextxy(153,375,"19");
outtextxy(203,375,"18");
outtextxy(253,375,"17");
outtextxy(303,375,"16");
outtextxy(353,375,"15");
outtextxy(403,375,"14");
outtextxy(453,375,"13");
outtextxy(503,375,"12");
outtextxy(553,375,"11");


outtextxy(103,335,"21");  ///3rd line
outtextxy(153,335,"22");
outtextxy(203,335,"23");
outtextxy(253,335,"24");
outtextxy(303,335,"25");
outtextxy(353,335,"26");
outtextxy(403,335,"27");
outtextxy(453,335,"28");
outtextxy(503,335,"29");
outtextxy(553,335,"30");



outtextxy(103,290,"40");  ///4th line
outtextxy(153,290,"39");
outtextxy(203,290,"38");
outtextxy(253,290,"37");
outtextxy(303,290,"36");
outtextxy(353,290,"35");
outtextxy(403,290,"34");
outtextxy(453,290,"33");
outtextxy(503,290,"32");
outtextxy(553,290,"31");


outtextxy(103,245,"41");  ///5th line
outtextxy(153,245,"42");
outtextxy(203,245,"43");
outtextxy(253,245,"44");
outtextxy(303,245,"45");
outtextxy(353,245,"46");
outtextxy(403,245,"47");
outtextxy(453,245,"48");
outtextxy(503,245,"49");
outtextxy(553,245,"50");


outtextxy(103,200,"60");  ///6th line
outtextxy(153,200,"59");
outtextxy(203,200,"58");
outtextxy(253,200,"57");
outtextxy(303,200,"56");
outtextxy(353,200,"55");
outtextxy(403,200,"54");
outtextxy(453,200,"53");
outtextxy(503,200,"52");
outtextxy(553,200,"51");


outtextxy(103,155,"61");  ///7th line
outtextxy(153,155,"62");
outtextxy(203,155,"63");
outtextxy(253,155,"64");
outtextxy(303,155,"65");
outtextxy(353,155,"66");
outtextxy(403,155,"67");
outtextxy(453,155,"68");
outtextxy(503,155,"69");
outtextxy(553,155,"70");


outtextxy(103,110,"80");  ///8th line
outtextxy(153,110,"79");
outtextxy(203,110,"78");
outtextxy(253,110,"77");
outtextxy(303,110,"76");
outtextxy(353,110,"75");
outtextxy(403,110,"74");
outtextxy(453,110,"73");
outtextxy(503,110,"72");
outtextxy(553,110,"71");


outtextxy(103,65,"81");  ///9th line
outtextxy(153,65,"82");
outtextxy(203,65,"83");
outtextxy(253,65,"84");
outtextxy(303,65,"85");
outtextxy(353,65,"86");
outtextxy(403,65,"87");
outtextxy(453,65,"88");
outtextxy(503,65,"89");
outtextxy(553,65,"90");


outtextxy(103,20,"100");  ///10th line
outtextxy(153,20,"99");
outtextxy(203,20,"98");
outtextxy(253,20,"97");
outtextxy(303,20,"96");
outtextxy(353,20,"95");
outtextxy(403,20,"94");
outtextxy(453,20,"93");
outtextxy(503,20,"92");
outtextxy(553,20,"91");










////////////////snakes//////
setcolor(RED);
setlinestyle(0,0,5);
arc(100,100,320,70,50);
circle(115,53,5);
arc(154,179,110,220,50);




setcolor(RED);
setlinestyle(0,0,5);
arc(250,250,320,70,50);
circle(265,203,5);
arc(304,329,110,280,50);



setcolor(RED);
setlinestyle(0,0,5);

 arc(400,180,320,80,100);
 circle(415,80,5);
    arc(509,338,110,233,100);





    ////////ladders///////





setcolor(GREEN);
setlinestyle(0,0,5);


line(185,40,285,175);
line(215,25,315,160);
line(210,67,230,52);
line(240,110,260,92);
line(270,153,295,132);

setcolor(GREEN);
setlinestyle(0,0,5);

line(85,265,185,400);
line(115,260,215,385);
line(110,302,130,277);
line(140,345,160,317);
line(170,387,195,357);

setcolor(GREEN);
setlinestyle(0,0,5);


line(533,170,537,440);
line(572,170,577,440);
line(535,230,575,232);
line(535,320,575,322);
line(535,410,575,412);



line(383,110,387,250);
line(418,110,422,250);
line(383,140,418,144);
line(383,210,418,214);






setfillstyle(SOLID_FILL,RED);
floodfill(1 , 1,WHITE);

setlinestyle(0,0,5);

            setfillstyle(SOLID_FILL,BLUE);
setcolor(BLUE);
line(15,120,65,120);
line(15,120,15,165);
line(65,120,65,165);
line(15,165,65,165);
            setcolor(WHITE);
circle(40,143,5);

   ////////////////////////////////////////////////////////////////////player//////////////////////////////////////////
if(pos==550 && poss==423)
   {
       poss=378;
       pos=600;
   }

///////////here
if(poss==378) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }


    if(poss==423 && pos!=600)
    {


      pos=pos+50*ch;
    }
 if(ch==2 && pos==600)
    {
        poss=378;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=378;
        pos=500;
    }
if(ch==3 && pos==600)
    {
        poss=378;
        pos=550;
    }

    if(ch==4 && pos==600)
    {
        poss=378;
        pos=550;
    }
    if(ch==4 && pos==650)
    {
        poss=378;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=378;
        pos=450;
    }
    if(ch==5 && pos==600)
    {
        poss=378;
        pos=550;
    }
    if(ch==5 && pos==650)
    {
        poss=378;
        pos=500;
    }
    if(ch==5 && pos==700)
    {
        poss=378;
        pos=450;
    }
    if(ch==5 && pos==750)
    {
        poss=378;
        pos=400;
    }
    if(ch==6 && pos==600)
    {
        poss=378;
        pos=550;
    }
     if(ch==6 && pos==650)
    {
        poss=378;
        pos=500;
    }
    if(ch==6 && pos==700)
    {
        poss=378;
        pos=450;
    }
    if(ch==6 && pos==750)
    {
        poss=378;
        pos=400;
    }

if(ch==6 && pos==800)
    {
        poss=378;
        pos=350;
    }


                       ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==378)
   {
       poss=333;
       pos=50;
   }
if(poss==333) //&& pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=333;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=333;
        pos=100;
    }


                /////////////////////////////////////////////////from here

if(pos==550+(50*ch) && poss==333)
   {
       poss=288;
       pos=600;
   }

///////////here
if(poss==288) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }



 if(ch==2 && pos==600)
    {
        poss=288;
        pos=550;
    }



  ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==288)
   {
       poss=243;
       pos=50;
   }
if(poss==243 && pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=243;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=243;
        pos=100;
    }

if(pos==550+(50*ch) && poss==243)
   {
       poss=198;
       pos=600;
   }

///////////here
if(poss==198) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }



 if(ch==2 && pos==600)
    {
        poss=198;
        pos=550;
    }



  ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==198)
   {
       poss=153;
       pos=50;
   }
if(poss==153 && pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=153;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=153;
        pos=100;
    }

if(pos==550+(50*ch) && poss==153)
   {
       poss=108;
       pos=600;
   }

///////////here
if(poss==108) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }



 if(ch==2 && pos==600)
    {
        poss=108;
        pos=550;
    }



  ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==108)
   {
       poss=63;
       pos=50;
   }
if(poss==63 && pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=63;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=63;
        pos=100;
    }

               if(pos==550+(50*ch) && poss==63)
   {
       poss=18;
       pos=600;
   }




if(poss==18) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }

if(poss==18 && pos<100)
{
    pos=100;
        settextstyle(3,0,0);


}

if(ch==2 && pos==600)
    {
        poss=18;
        pos=550;
    }

if(poss==423 && pos==550)
     {
         poss=153;
         pos=550;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }
          if(poss==378 && pos==200)
     {
         poss=243;
         pos=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }


     if(poss==243 && pos==400)
     {
         poss=108;
         pos=400;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }
      if(poss==153 && pos==300)
     {
         poss=18;
         pos=200;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }

      if(poss==63 && pos==100)
     {
         poss=198;
         pos=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(poss==198 && pos==250)
     {
         poss=378;
         pos=300;
           settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(poss==63 && pos==400)
     {
         poss=423;
         pos=450;  settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }

settextstyle(0,0,7);
    setcolor(WHITE);
    circle(pos,poss,17);


break;




          case 2:cleardevice();
initgraph(&gd, &gm, NULL);
    line(0,0,0,700);
    for(i=0;i<11;i++)
    {
        j+=50;
        line(30+j,0,30+j,450);
    }
    j=0;
    line(0,0,700,0);
    for(g=0;g<11;g++)
    {
        k+=45;
        line(80,0+k,580,0+k);

    }
         k=0;





///////////////new for clr////////


setfillstyle(SOLID_FILL,YELLOW);

    line(80,0,130,0);
    line(80,0,80,45);
    line(80,45,130,45);
    line(130,0,130,45);
    floodfill(81,10,WHITE);
    for(y=0;y<4;y++)
    {
        a+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+a,0,130+a,0);
    line(80+a,0,80+a,45);
    line(80+a,45,130+a,45);
    line(130+a,0,130+a,45);
    floodfill(81+a,10,WHITE);
    }
    a=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(130,0,180,0);
    line(130,0,130,45);
    line(80,45,180,45);
    line(180,0,180,45);
    floodfill(131,10,WHITE);

    for(z=0;z<4;z++)
    {
        b+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+b,0,180+b,0);
    line(130+b,0,130+b,45);
    line(180+b,45,180+b,45);
    line(180+b,0,180+b,45);
    floodfill(131+b,10,WHITE);
    }
    b=0;

    setfillstyle(SOLID_FILL,BLUE);
    line(80,45,130,45);
    line(80,45,80,90);
    line(80,90,130,90);
    line(130,45,130,90);
    floodfill(81,55,WHITE);
    for(e=0;e<4;e++)
    {
        c+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+c,45,130+c,45);
    line(80+c,45,80+c,90);
    line(80+c,90,130+c,90);
    line(130+c,45,130+c,90);
    floodfill(81+c,55,WHITE);
    }
c=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,45,180,45);
    line(130,45,130,90);
    line(80,90,180,90);
    line(180,45,180,90);
    floodfill(131,50,WHITE);

    for(f=0;f<4;f++)
    {
        d+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+d,45,180+d,45);
    line(130+d,45,130+d,90);
    line(80+d,90,180+d,90);
    line(180+d,45,180+d,90);
    floodfill(131+d,55,WHITE);

    }
d=0;


        setfillstyle(SOLID_FILL,YELLOW);
    line(80,90,130,90);
    line(80,135,80,135);
    line(80,135,130,135);
    line(130,90,130,135);
    floodfill(81,100,WHITE);
    for(m=0;m<4;m++)
    {
        h+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+h,90,130+h,90);
    line(80+h,135,80+h,135);
    line(80+h,135,130+h,135);
    line(130+h,90,130+h,135);
    floodfill(81+h,100,WHITE);
    }

h=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(130,90,180,90);
    line(130,90,130,135);
    line(80,135,180,135);
    line(180,90,180,135);
    floodfill(131,100,WHITE);

    for(n=0;n<4;n++)
    {
        l+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+l,90,180+l,90);
    line(130+l,90,130+l,135);
    line(80+l,135,180+l,135);
    line(180+l,90,180+l,135);
    floodfill(131+l,100,WHITE);

    }
l=0;


        setfillstyle(SOLID_FILL,BLUE);
    line(80,135,130,135);
    line(80,180,80,180);
    line(80,180,130,180);
    line(130,135,130,180);
    floodfill(81,145,WHITE);
    for(o=0;o<4;o++)
    {
        p+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+p,135,130+p,135);
    line(80+p,180,80+p,180);
    line(80+p,180,130+p,180);
    line(130+p,135,130+p,180);
    floodfill(81+p,145,WHITE);
    }
p=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,135,180,135);
    line(130,135,130,180);
    line(80,180,180,180);
    line(180,135,180,180);
    floodfill(131,145,WHITE);

    for(q=0;q<4;q++)
    {
        r+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+r,135,180+r,135);
    line(130+r,135,130+r,180);
    line(80+r,180,180+r,180);
    line(180+r,135,180+r,180);
    floodfill(131+r,145,WHITE);

    }
r=0;

setfillstyle(SOLID_FILL,YELLOW);
    line(80,180,130,180);
    line(80,225,80,225);
    line(80,225,130,225);
    line(130,180,130,225);
    floodfill(81,190,WHITE);
    for(s=0;s<4;s++)
    {
        t+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+t,180,130+t,180);
    line(80+t,225,80+t,225);
    line(80+t,225,130+t,225);
    line(130+t,180,130+t,225);
    floodfill(81+t,190,WHITE);
    }
t=0;

 setfillstyle(SOLID_FILL,BLUE);
    line(130,180,180,180);
    line(130,180,130,225);
    line(80,225,180,225);
    line(180,180,180,225);
    floodfill(131,190,WHITE);

    for(u=0;u<4;u++)
    {
        v+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+v,180,180+v,180);
    line(130+v,180,130+v,225);
    line(80+v,225,180+v,225);
    line(180+v,180,180+v,225);
    floodfill(131+v,190,WHITE);
    }

    v=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(80,225,130,225);
    line(80,270,80,270);
    line(80,270,130,270);
    line(130,225,130,270);
    floodfill(81,235,WHITE);
    for(ab=0;ab<4;ab++)
    {
        bc+=100;
setfillstyle(SOLID_FILL,BLUE);
 line(80+bc,225,130+bc,225);
    line(80+bc,270,80+bc,270);
    line(80+bc,270,130+bc,270);
    line(130+bc,225,130+bc,270);
    floodfill(81+bc,235,WHITE);
    }
    bc=0;



setfillstyle(SOLID_FILL,YELLOW);
    line(130,225,180,225);
    line(130,225,130,270);
    line(80,270,180,270);
    line(180,225,180,270);
    floodfill(131,235,WHITE);

    for(cd=0;cd<4;cd++)
    {
        de+=100;
         setfillstyle(SOLID_FILL,YELLOW);
          line(130+de,225,180+de,225);
    line(130+de,225,130+de,270);
    line(80+de,270,180+de,270);
    line(180+de,225,180+de,270);
    floodfill(131+de,235,WHITE);
    }
de=0;

        setfillstyle(SOLID_FILL,YELLOW);
    line(80,270,130,270);
    line(80,315,80,315);
    line(80,315,130,315);
    line(130,270,130,315);
    floodfill(81,280,WHITE);
    for(ef=0;ef<4;ef++)
    {
        fg+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+fg,270,130+fg,270);
    line(80+fg,315,80+fg,315);
    line(80+fg,315,130+fg,315);
    line(130+fg,270,130+fg,315);
    floodfill(81+fg,280,WHITE);
    }
fg=0;

setfillstyle(SOLID_FILL,BLUE);
    line(130,270,180,270);
    line(130,270,130,315);
    line(80,315,180,315);
    line(180,270,180,315);
    floodfill(131,280,WHITE);

    for(gh=0;gh<4;gh++)
    {
        hi+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+hi,270,180+hi,270);
    line(130+hi,270,130+hi,315);
    line(80+hi,315,180+hi,315);
    line(180+hi,270,180+hi,315);
    floodfill(131+hi,280,WHITE);
    }
    hi=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(80,315,130,315);
    line(80,360,80,360);
    line(80,360,130,360);
    line(130,315,130,360);
    floodfill(81,325,WHITE);
    for(ij=0;ij<4;ij++)
    {
        jk+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+jk,315,130+jk,315);
    line(80+jk,360,80+jk,360);
    line(80+jk,360,130+jk,360);
    line(130+jk,315,130+jk,360);
    floodfill(81+jk,325,WHITE);
    }
    jk=0;


    setfillstyle(SOLID_FILL,YELLOW);
    line(130,315,180,315);
    line(130,315,130,360);
    line(80,360,180,360);
    line(180,315,180,360);
    floodfill(131,325,WHITE);

    for(kl=0;kl<4;kl++)
    {
        lm+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+lm,315,180+lm,315);
    line(130+lm,315,130+lm,360);
    line(80+lm,360,180+lm,360);
    line(180+lm,315,180+lm,360);
    floodfill(131+lm,325,WHITE);
    }
lm=0;


     setfillstyle(SOLID_FILL,YELLOW);
    line(80,360,130,360);
    line(80,405,80,405);
    line(80,405,130,405);
    line(130,360,130,405);
    floodfill(81,370,WHITE);
    for(mn=0;mn<4;mn++)
    {
        no+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+no,360,130+no,360);
    line(80+no,405,80+no,405);
    line(80+no,405,130+no,405);
    line(130+no,360,130+no,405);
    floodfill(81+no,370,WHITE);
    }
no=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(130,360,180,360);
    line(130,360,130,405);
    line(80,405,180,405);
    line(180,360,180,405);
    floodfill(131,370,WHITE);

    for(op=0;op<4;op++)
    {
        pq+=100;
         setfillstyle(SOLID_FILL,BLUE);
         line(130+pq,360,180+pq,360);
    line(130+pq,360,130+pq,405);
    line(80+pq,405,180+pq,405);
    line(180+pq,360,180+pq,405);
    floodfill(131+pq,370,WHITE);
    }
pq=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(80,405,130,405);
    line(80,450,80,450);
    line(80,450,130,450);
    line(130,405,130,450);
    floodfill(81,415,WHITE);
    for(qr=0;qr<4;qr++)
    {
    rs+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+rs,405,130+rs,405);
    line(80+rs,450,80+rs,450);
    line(80+rs,450,130+rs,450);
    line(130+rs,405,130+rs,450);
    floodfill(81+rs,415,WHITE);
    }
    rs=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,405,180,405);
    line(130,405,130,450);
    line(130,450,180,450);
    line(180,405,180,450);
    floodfill(131,415,WHITE);

    for(st=0;st<4;st++)
    {
        tu+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+tu,405,180+tu,405);
    line(130+tu,405,130+tu,450);
    line(130+tu,450,180+tu,450);
    line(180+tu,405,180+tu,450);
    floodfill(131+tu,415,WHITE);
    }
    tu=0;










    ////////////////numbers/////////////




outtextxy(103,420,"1");  ///1st line
outtextxy(153,420,"2");
outtextxy(203,420,"3");
outtextxy(253,420,"4");
outtextxy(303,420,"5");
outtextxy(353,420,"6");
outtextxy(403,420,"7");
outtextxy(453,420,"8");
outtextxy(503,420,"9");
outtextxy(553,420,"10");


outtextxy(103,375,"20");  ///2nd line
outtextxy(153,375,"19");
outtextxy(203,375,"18");
outtextxy(253,375,"17");
outtextxy(303,375,"16");
outtextxy(353,375,"15");
outtextxy(403,375,"14");
outtextxy(453,375,"13");
outtextxy(503,375,"12");
outtextxy(553,375,"11");


outtextxy(103,335,"21");  ///3rd line
outtextxy(153,335,"22");
outtextxy(203,335,"23");
outtextxy(253,335,"24");
outtextxy(303,335,"25");
outtextxy(353,335,"26");
outtextxy(403,335,"27");
outtextxy(453,335,"28");
outtextxy(503,335,"29");
outtextxy(553,335,"30");



outtextxy(103,290,"40");  ///4th line
outtextxy(153,290,"39");
outtextxy(203,290,"38");
outtextxy(253,290,"37");
outtextxy(303,290,"36");
outtextxy(353,290,"35");
outtextxy(403,290,"34");
outtextxy(453,290,"33");
outtextxy(503,290,"32");
outtextxy(553,290,"31");


outtextxy(103,245,"41");  ///5th line
outtextxy(153,245,"42");
outtextxy(203,245,"43");
outtextxy(253,245,"44");
outtextxy(303,245,"45");
outtextxy(353,245,"46");
outtextxy(403,245,"47");
outtextxy(453,245,"48");
outtextxy(503,245,"49");
outtextxy(553,245,"50");


outtextxy(103,200,"60");  ///6th line
outtextxy(153,200,"59");
outtextxy(203,200,"58");
outtextxy(253,200,"57");
outtextxy(303,200,"56");
outtextxy(353,200,"55");
outtextxy(403,200,"54");
outtextxy(453,200,"53");
outtextxy(503,200,"52");
outtextxy(553,200,"51");


outtextxy(103,155,"61");  ///7th line
outtextxy(153,155,"62");
outtextxy(203,155,"63");
outtextxy(253,155,"64");
outtextxy(303,155,"65");
outtextxy(353,155,"66");
outtextxy(403,155,"67");
outtextxy(453,155,"68");
outtextxy(503,155,"69");
outtextxy(553,155,"70");


outtextxy(103,110,"80");  ///8th line
outtextxy(153,110,"79");
outtextxy(203,110,"78");
outtextxy(253,110,"77");
outtextxy(303,110,"76");
outtextxy(353,110,"75");
outtextxy(403,110,"74");
outtextxy(453,110,"73");
outtextxy(503,110,"72");
outtextxy(553,110,"71");


outtextxy(103,65,"81");  ///9th line
outtextxy(153,65,"82");
outtextxy(203,65,"83");
outtextxy(253,65,"84");
outtextxy(303,65,"85");
outtextxy(353,65,"86");
outtextxy(403,65,"87");
outtextxy(453,65,"88");
outtextxy(503,65,"89");
outtextxy(553,65,"90");


outtextxy(103,20,"100");  ///10th line
outtextxy(153,20,"99");
outtextxy(203,20,"98");
outtextxy(253,20,"97");
outtextxy(303,20,"96");
outtextxy(353,20,"95");
outtextxy(403,20,"94");
outtextxy(453,20,"93");
outtextxy(503,20,"92");
outtextxy(553,20,"91");










////////////////snakes//////
setcolor(RED);
setlinestyle(0,0,5);
arc(100,100,320,70,50);
circle(115,53,5);
arc(154,179,110,220,50);




setcolor(RED);
setlinestyle(0,0,5);
arc(250,250,320,70,50);
circle(265,203,5);
arc(304,329,110,280,50);



setcolor(RED);
setlinestyle(0,0,5);

 arc(400,180,320,80,100);
 circle(415,80,5);
    arc(509,338,110,233,100);





    ////////ladders///////





setcolor(GREEN);
setlinestyle(0,0,5);


line(185,40,285,175);
line(215,25,315,160);
line(210,67,230,52);
line(240,110,260,92);
line(270,153,295,132);

setcolor(GREEN);
setlinestyle(0,0,5);

line(85,265,185,400);
line(115,260,215,385);
line(110,302,130,277);
line(140,345,160,317);
line(170,387,195,357);

setcolor(GREEN);
setlinestyle(0,0,5);


line(533,170,537,440);
line(572,170,577,440);
line(535,230,575,232);
line(535,320,575,322);
line(535,410,575,412);



line(383,110,387,250);
line(418,110,422,250);
line(383,140,418,144);
line(383,210,418,214);






setfillstyle(SOLID_FILL,RED);
floodfill(1 , 1,WHITE);




                    ///////////////end///////////////











              setfillstyle(SOLID_FILL,BLUE);
setcolor(BLUE);
line(15,120,65,120);
line(15,120,15,165);
line(65,120,65,165);
line(15,165,65,165);
              setcolor(WHITE);
circle(25,127,3);
circle(55,158,3);



   ////////////////////////////////////////////////////////////////////player//////////////////////////////////////////




if(pos==550 && poss==423)
   {
       poss=378;
       pos=600;
   }

///////////here
if(poss==378) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }


    if(poss==423 && pos!=600)
    {


      pos=pos+50*ch;
    }
 if(ch==2 && pos==600)
    {
        poss=378;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=378;
        pos=500;
    }
if(ch==3 && pos==600)
    {
        poss=378;
        pos=550;
    }

    if(ch==4 && pos==600)
    {
        poss=378;
        pos=550;
    }
    if(ch==4 && pos==650)
    {
        poss=378;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=378;
        pos=450;
    }
    if(ch==5 && pos==600)
    {
        poss=378;
        pos=550;
    }
    if(ch==5 && pos==650)
    {
        poss=378;
        pos=500;
    }
    if(ch==5 && pos==700)
    {
        poss=378;
        pos=450;
    }
    if(ch==5 && pos==750)
    {
        poss=378;
        pos=400;
    }
    if(ch==6 && pos==600)
    {
        poss=378;
        pos=550;
    }
     if(ch==6 && pos==650)
    {
        poss=378;
        pos=500;
    }
    if(ch==6 && pos==700)
    {
        poss=378;
        pos=450;
    }
    if(ch==6 && pos==750)
    {
        poss=378;
        pos=400;
    }

if(ch==6 && pos==800)
    {
        poss=378;
        pos=350;
    }


                       ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==378)
   {
       poss=333;
       pos=50;
   }
if(poss==333) //&& pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=333;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=333;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=333;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=330;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=333;
        pos=100;
    }

if(pos==550+(50*ch) && poss==333)
   {
       poss=288;
       pos=600;
   }

///////////here
if(poss==288) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }



 if(ch==2 && pos==600)
    {
        poss=288;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=288;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=288;
        pos=500;
    }



  ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==288)
   {
       poss=243;
       pos=50;
   }
if(poss==243 && pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=243;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=243;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=243;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=243;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=243;
        pos=100;
    }

if(pos==550+(50*ch) && poss==243)
   {
       poss=198;
       pos=600;
   }

///////////here
if(poss==198) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }



 if(ch==2 && pos==600)
    {
        poss=198;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=198;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=198;
        pos=500;
    }




  ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==198)
   {
       poss=153;
       pos=50;
   }
if(poss==153 && pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=153;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=153;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=153;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=153;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=153;
        pos=100;
    }

if(pos==550+(50*ch) && poss==153)
   {
       poss=108;
       pos=600;
   }

///////////here
if(poss==108) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }



 if(ch==2 && pos==600)
    {
        poss=108;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=108;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=108;
        pos=500;
    }




  ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==108)
   {
       poss=63;
       pos=50;
   }
if(poss==63 && pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=63;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=63;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=63;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=63;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=63;
        pos=100;
    }





               if(pos==550+(50*ch) && poss==63)
   {
       poss=18;
       pos=600;
   }




if(poss==18 && pos>150) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }

if(poss==18 && pos>150)
{
    pos=100;

}

if(ch==2 && pos==600)
    {
        poss=18;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=18;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=18;
        pos=500;
    }





  if(poss==423 && pos==550)
     {
         poss=153;
         pos=550;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }




      if(poss==378 && pos==200)
     {
         poss=243;
         pos=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }


     if(poss==243 && pos==400)
     {
         poss=108;
         pos=400;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }
      if(poss==153 && pos==300)
     {
         poss=18;
         pos=200;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }

      if(poss==63 && pos==100)
     {
         poss=198;
         pos=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(poss==198 && pos==250)
     {
         poss=378;
         pos=300;
           settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(poss==63 && pos==400)
     {
         poss=423;
         pos=450;  settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }

               //player1(&ch);




settextstyle(0,0,7);
    setcolor(WHITE);
    circle(pos,poss,17);





break;


case 3:cleardevice();





                     /////////////start////////




initgraph(&gd, &gm, NULL);
    line(0,0,0,700);
    for(i=0;i<11;i++)
    {
        j+=50;
        line(30+j,0,30+j,450);
    }
    j=0;
    line(0,0,700,0);
    for(g=0;g<11;g++)
    {
        k+=45;
        line(80,0+k,580,0+k);

    }
         k=0;





///////////////new for clr////////


setfillstyle(SOLID_FILL,YELLOW);

    line(80,0,130,0);
    line(80,0,80,45);
    line(80,45,130,45);
    line(130,0,130,45);
    floodfill(81,10,WHITE);
    for(y=0;y<4;y++)
    {
        a+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+a,0,130+a,0);
    line(80+a,0,80+a,45);
    line(80+a,45,130+a,45);
    line(130+a,0,130+a,45);
    floodfill(81+a,10,WHITE);
    }
    a=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(130,0,180,0);
    line(130,0,130,45);
    line(80,45,180,45);
    line(180,0,180,45);
    floodfill(131,10,WHITE);

    for(z=0;z<4;z++)
    {
        b+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+b,0,180+b,0);
    line(130+b,0,130+b,45);
    line(180+b,45,180+b,45);
    line(180+b,0,180+b,45);
    floodfill(131+b,10,WHITE);
    }
    b=0;

    setfillstyle(SOLID_FILL,BLUE);
    line(80,45,130,45);
    line(80,45,80,90);
    line(80,90,130,90);
    line(130,45,130,90);
    floodfill(81,55,WHITE);
    for(e=0;e<4;e++)
    {
        c+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+c,45,130+c,45);
    line(80+c,45,80+c,90);
    line(80+c,90,130+c,90);
    line(130+c,45,130+c,90);
    floodfill(81+c,55,WHITE);
    }
c=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,45,180,45);
    line(130,45,130,90);
    line(80,90,180,90);
    line(180,45,180,90);
    floodfill(131,50,WHITE);

    for(f=0;f<4;f++)
    {
        d+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+d,45,180+d,45);
    line(130+d,45,130+d,90);
    line(80+d,90,180+d,90);
    line(180+d,45,180+d,90);
    floodfill(131+d,55,WHITE);

    }
d=0;


        setfillstyle(SOLID_FILL,YELLOW);
    line(80,90,130,90);
    line(80,135,80,135);
    line(80,135,130,135);
    line(130,90,130,135);
    floodfill(81,100,WHITE);
    for(m=0;m<4;m++)
    {
        h+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+h,90,130+h,90);
    line(80+h,135,80+h,135);
    line(80+h,135,130+h,135);
    line(130+h,90,130+h,135);
    floodfill(81+h,100,WHITE);
    }

h=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(130,90,180,90);
    line(130,90,130,135);
    line(80,135,180,135);
    line(180,90,180,135);
    floodfill(131,100,WHITE);

    for(n=0;n<4;n++)
    {
        l+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+l,90,180+l,90);
    line(130+l,90,130+l,135);
    line(80+l,135,180+l,135);
    line(180+l,90,180+l,135);
    floodfill(131+l,100,WHITE);

    }
l=0;


        setfillstyle(SOLID_FILL,BLUE);
    line(80,135,130,135);
    line(80,180,80,180);
    line(80,180,130,180);
    line(130,135,130,180);
    floodfill(81,145,WHITE);
    for(o=0;o<4;o++)
    {
        p+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+p,135,130+p,135);
    line(80+p,180,80+p,180);
    line(80+p,180,130+p,180);
    line(130+p,135,130+p,180);
    floodfill(81+p,145,WHITE);
    }
p=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,135,180,135);
    line(130,135,130,180);
    line(80,180,180,180);
    line(180,135,180,180);
    floodfill(131,145,WHITE);

    for(q=0;q<4;q++)
    {
        r+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+r,135,180+r,135);
    line(130+r,135,130+r,180);
    line(80+r,180,180+r,180);
    line(180+r,135,180+r,180);
    floodfill(131+r,145,WHITE);

    }
r=0;

setfillstyle(SOLID_FILL,YELLOW);
    line(80,180,130,180);
    line(80,225,80,225);
    line(80,225,130,225);
    line(130,180,130,225);
    floodfill(81,190,WHITE);
    for(s=0;s<4;s++)
    {
        t+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+t,180,130+t,180);
    line(80+t,225,80+t,225);
    line(80+t,225,130+t,225);
    line(130+t,180,130+t,225);
    floodfill(81+t,190,WHITE);
    }
t=0;

 setfillstyle(SOLID_FILL,BLUE);
    line(130,180,180,180);
    line(130,180,130,225);
    line(80,225,180,225);
    line(180,180,180,225);
    floodfill(131,190,WHITE);

    for(u=0;u<4;u++)
    {
        v+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+v,180,180+v,180);
    line(130+v,180,130+v,225);
    line(80+v,225,180+v,225);
    line(180+v,180,180+v,225);
    floodfill(131+v,190,WHITE);
    }

    v=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(80,225,130,225);
    line(80,270,80,270);
    line(80,270,130,270);
    line(130,225,130,270);
    floodfill(81,235,WHITE);
    for(ab=0;ab<4;ab++)
    {
        bc+=100;
setfillstyle(SOLID_FILL,BLUE);
 line(80+bc,225,130+bc,225);
    line(80+bc,270,80+bc,270);
    line(80+bc,270,130+bc,270);
    line(130+bc,225,130+bc,270);
    floodfill(81+bc,235,WHITE);
    }
    bc=0;



setfillstyle(SOLID_FILL,YELLOW);
    line(130,225,180,225);
    line(130,225,130,270);
    line(80,270,180,270);
    line(180,225,180,270);
    floodfill(131,235,WHITE);

    for(cd=0;cd<4;cd++)
    {
        de+=100;
         setfillstyle(SOLID_FILL,YELLOW);
          line(130+de,225,180+de,225);
    line(130+de,225,130+de,270);
    line(80+de,270,180+de,270);
    line(180+de,225,180+de,270);
    floodfill(131+de,235,WHITE);
    }
de=0;

        setfillstyle(SOLID_FILL,YELLOW);
    line(80,270,130,270);
    line(80,315,80,315);
    line(80,315,130,315);
    line(130,270,130,315);
    floodfill(81,280,WHITE);
    for(ef=0;ef<4;ef++)
    {
        fg+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+fg,270,130+fg,270);
    line(80+fg,315,80+fg,315);
    line(80+fg,315,130+fg,315);
    line(130+fg,270,130+fg,315);
    floodfill(81+fg,280,WHITE);
    }
fg=0;

setfillstyle(SOLID_FILL,BLUE);
    line(130,270,180,270);
    line(130,270,130,315);
    line(80,315,180,315);
    line(180,270,180,315);
    floodfill(131,280,WHITE);

    for(gh=0;gh<4;gh++)
    {
        hi+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+hi,270,180+hi,270);
    line(130+hi,270,130+hi,315);
    line(80+hi,315,180+hi,315);
    line(180+hi,270,180+hi,315);
    floodfill(131+hi,280,WHITE);
    }
    hi=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(80,315,130,315);
    line(80,360,80,360);
    line(80,360,130,360);
    line(130,315,130,360);
    floodfill(81,325,WHITE);
    for(ij=0;ij<4;ij++)
    {
        jk+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+jk,315,130+jk,315);
    line(80+jk,360,80+jk,360);
    line(80+jk,360,130+jk,360);
    line(130+jk,315,130+jk,360);
    floodfill(81+jk,325,WHITE);
    }
    jk=0;


    setfillstyle(SOLID_FILL,YELLOW);
    line(130,315,180,315);
    line(130,315,130,360);
    line(80,360,180,360);
    line(180,315,180,360);
    floodfill(131,325,WHITE);

    for(kl=0;kl<4;kl++)
    {
        lm+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+lm,315,180+lm,315);
    line(130+lm,315,130+lm,360);
    line(80+lm,360,180+lm,360);
    line(180+lm,315,180+lm,360);
    floodfill(131+lm,325,WHITE);
    }
lm=0;


     setfillstyle(SOLID_FILL,YELLOW);
    line(80,360,130,360);
    line(80,405,80,405);
    line(80,405,130,405);
    line(130,360,130,405);
    floodfill(81,370,WHITE);
    for(mn=0;mn<4;mn++)
    {
        no+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+no,360,130+no,360);
    line(80+no,405,80+no,405);
    line(80+no,405,130+no,405);
    line(130+no,360,130+no,405);
    floodfill(81+no,370,WHITE);
    }
no=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(130,360,180,360);
    line(130,360,130,405);
    line(80,405,180,405);
    line(180,360,180,405);
    floodfill(131,370,WHITE);

    for(op=0;op<4;op++)
    {
        pq+=100;
         setfillstyle(SOLID_FILL,BLUE);
         line(130+pq,360,180+pq,360);
    line(130+pq,360,130+pq,405);
    line(80+pq,405,180+pq,405);
    line(180+pq,360,180+pq,405);
    floodfill(131+pq,370,WHITE);
    }
pq=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(80,405,130,405);
    line(80,450,80,450);
    line(80,450,130,450);
    line(130,405,130,450);
    floodfill(81,415,WHITE);
    for(qr=0;qr<4;qr++)
    {
    rs+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+rs,405,130+rs,405);
    line(80+rs,450,80+rs,450);
    line(80+rs,450,130+rs,450);
    line(130+rs,405,130+rs,450);
    floodfill(81+rs,415,WHITE);
    }
    rs=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,405,180,405);
    line(130,405,130,450);
    line(130,450,180,450);
    line(180,405,180,450);
    floodfill(131,415,WHITE);

    for(st=0;st<4;st++)
    {
        tu+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+tu,405,180+tu,405);
    line(130+tu,405,130+tu,450);
    line(130+tu,450,180+tu,450);
    line(180+tu,405,180+tu,450);
    floodfill(131+tu,415,WHITE);
    }
    tu=0;










    ////////////////numbers/////////////




outtextxy(103,420,"1");  ///1st line
outtextxy(153,420,"2");
outtextxy(203,420,"3");
outtextxy(253,420,"4");
outtextxy(303,420,"5");
outtextxy(353,420,"6");
outtextxy(403,420,"7");
outtextxy(453,420,"8");
outtextxy(503,420,"9");
outtextxy(553,420,"10");


outtextxy(103,375,"20");  ///2nd line
outtextxy(153,375,"19");
outtextxy(203,375,"18");
outtextxy(253,375,"17");
outtextxy(303,375,"16");
outtextxy(353,375,"15");
outtextxy(403,375,"14");
outtextxy(453,375,"13");
outtextxy(503,375,"12");
outtextxy(553,375,"11");


outtextxy(103,335,"21");  ///3rd line
outtextxy(153,335,"22");
outtextxy(203,335,"23");
outtextxy(253,335,"24");
outtextxy(303,335,"25");
outtextxy(353,335,"26");
outtextxy(403,335,"27");
outtextxy(453,335,"28");
outtextxy(503,335,"29");
outtextxy(553,335,"30");



outtextxy(103,290,"40");  ///4th line
outtextxy(153,290,"39");
outtextxy(203,290,"38");
outtextxy(253,290,"37");
outtextxy(303,290,"36");
outtextxy(353,290,"35");
outtextxy(403,290,"34");
outtextxy(453,290,"33");
outtextxy(503,290,"32");
outtextxy(553,290,"31");


outtextxy(103,245,"41");  ///5th line
outtextxy(153,245,"42");
outtextxy(203,245,"43");
outtextxy(253,245,"44");
outtextxy(303,245,"45");
outtextxy(353,245,"46");
outtextxy(403,245,"47");
outtextxy(453,245,"48");
outtextxy(503,245,"49");
outtextxy(553,245,"50");


outtextxy(103,200,"60");  ///6th line
outtextxy(153,200,"59");
outtextxy(203,200,"58");
outtextxy(253,200,"57");
outtextxy(303,200,"56");
outtextxy(353,200,"55");
outtextxy(403,200,"54");
outtextxy(453,200,"53");
outtextxy(503,200,"52");
outtextxy(553,200,"51");


outtextxy(103,155,"61");  ///7th line
outtextxy(153,155,"62");
outtextxy(203,155,"63");
outtextxy(253,155,"64");
outtextxy(303,155,"65");
outtextxy(353,155,"66");
outtextxy(403,155,"67");
outtextxy(453,155,"68");
outtextxy(503,155,"69");
outtextxy(553,155,"70");


outtextxy(103,110,"80");  ///8th line
outtextxy(153,110,"79");
outtextxy(203,110,"78");
outtextxy(253,110,"77");
outtextxy(303,110,"76");
outtextxy(353,110,"75");
outtextxy(403,110,"74");
outtextxy(453,110,"73");
outtextxy(503,110,"72");
outtextxy(553,110,"71");


outtextxy(103,65,"81");  ///9th line
outtextxy(153,65,"82");
outtextxy(203,65,"83");
outtextxy(253,65,"84");
outtextxy(303,65,"85");
outtextxy(353,65,"86");
outtextxy(403,65,"87");
outtextxy(453,65,"88");
outtextxy(503,65,"89");
outtextxy(553,65,"90");


outtextxy(103,20,"100");  ///10th line
outtextxy(153,20,"99");
outtextxy(203,20,"98");
outtextxy(253,20,"97");
outtextxy(303,20,"96");
outtextxy(353,20,"95");
outtextxy(403,20,"94");
outtextxy(453,20,"93");
outtextxy(503,20,"92");
outtextxy(553,20,"91");










////////////////snakes//////
setcolor(RED);
setlinestyle(0,0,5);
arc(100,100,320,70,50);
circle(115,53,5);
arc(154,179,110,220,50);




setcolor(RED);
setlinestyle(0,0,5);
arc(250,250,320,70,50);
circle(265,203,5);
arc(304,329,110,280,50);



setcolor(RED);
setlinestyle(0,0,5);

 arc(400,180,320,80,100);
 circle(415,80,5);
    arc(509,338,110,233,100);





    ////////ladders///////





setcolor(GREEN);
setlinestyle(0,0,5);


line(185,40,285,175);
line(215,25,315,160);
line(210,67,230,52);
line(240,110,260,92);
line(270,153,295,132);

setcolor(GREEN);
setlinestyle(0,0,5);

line(85,265,185,400);
line(115,260,215,385);
line(110,302,130,277);
line(140,345,160,317);
line(170,387,195,357);

setcolor(GREEN);
setlinestyle(0,0,5);


line(533,170,537,440);
line(572,170,577,440);
line(535,230,575,232);
line(535,320,575,322);
line(535,410,575,412);



line(383,110,387,250);
line(418,110,422,250);
line(383,140,418,144);
line(383,210,418,214);






setfillstyle(SOLID_FILL,RED);
floodfill(1 , 1,WHITE);




                    ///////////////end///////////////






              setfillstyle(SOLID_FILL,BLUE);
setcolor(BLUE);
line(15,120,65,120);
line(15,120,15,165);
line(65,120,65,165);
line(15,165,65,165);
              setcolor(WHITE);
circle(25,127,3);
circle(55,158,3);
circle(40,143,3);

   ////////////////////////////////////////////////////////////////////player//////////////////////////////////////////




if(pos==550 && poss==423)
   {
       poss=378;
       pos=600;
   }

///////////here
if(poss==378) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }


    if(poss==423 && pos!=600)
    {


      pos=pos+50*ch;
    }
 if(ch==2 && pos==600)
    {
        poss=378;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=378;
        pos=500;
    }
if(ch==3 && pos==600)
    {
        poss=378;
        pos=550;
    }

    if(ch==4 && pos==600)
    {
        poss=378;
        pos=550;
    }
    if(ch==4 && pos==650)
    {
        poss=378;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=378;
        pos=450;
    }

   if( pos==(100-50*ch) && poss==378)
   {
       poss=333;
       pos=50;
   }
if(poss==333) //&& pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=333;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=333;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=333;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=330;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=333;
        pos=100;
    }
    if(ch==4 && pos==50)
    {
        poss=333;
        pos=100;
    }
    if(ch==4 && pos==0)
    {
        poss=333;
        pos=150;
    }
    if(ch==4 && pos==-50)
    {
        poss=333;
        pos=200;
    }
    if(ch==4 && pos==-100)
    {
        poss=333;
        pos=250;
    }

if(pos==550+(50*ch) && poss==333)
   {
       poss=288;
       pos=600;
   }

///////////here
if(poss==288) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }



 if(ch==2 && pos==600)
    {
        poss=288;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=288;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=288;
        pos=500;
    }

    if(ch==4 && pos==650)
    {
        poss=288;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=288;
        pos=450;
    }
    if(ch==4 && pos==750)
    {
        poss=288;
        pos=400;
    }




  ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==288)
   {
       poss=243;
       pos=50;
   }
if(poss==243 && pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=243;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=243;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=243;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=243;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=243;
        pos=100;
    }
    if(ch==4 && pos==50)
    {
        poss=243;
        pos=100;
    }
    if(ch==4 && pos==0)
    {
        poss=243;
        pos=150;
    }
    if(ch==4 && pos==-50)
    {
        poss=243;
        pos=200;
    }
    if(ch==4 && pos==-100)
    {
        poss=243;
        pos=250;
    }


if(pos==550+(50*ch) && poss==243)
   {
       poss=198;
       pos=600;
   }

///////////here
if(poss==198) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }



 if(ch==2 && pos==600)
    {
        poss=198;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=198;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=198;
        pos=500;
    }

    if(ch==4 && pos==650)
    {
        poss=198;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=198;
        pos=450;
    }
    if(ch==4 && pos==750)
    {
        poss=198;
        pos=400;
    }


   if( pos==(100-50*ch) && poss==198)
   {
       poss=153;
       pos=50;
   }
if(poss==153 && pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=153;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=153;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=153;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=153;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=153;
        pos=100;
    }
    if(ch==4 && pos==50)
    {
        poss=153;
        pos=100;
    }
    if(ch==4 && pos==0)
    {
        poss=153;
        pos=150;
    }
    if(ch==4 && pos==-50)
    {
        poss=153;
        pos=200;
    }
    if(ch==4 && pos==-100)
    {
        poss=153;
        pos=250;
    }

if(pos==550+(50*ch) && poss==153)
   {
       poss=108;
       pos=600;
   }

///////////here
if(poss==108) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }



 if(ch==2 && pos==600)
    {
        poss=108;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=108;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=108;
        pos=500;
    }

    if(ch==4 && pos==650)
    {
        poss=108;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=108;
        pos=450;
    }
    if(ch==4 && pos==750)
    {
        poss=108;
        pos=400;
    }

  ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==108)
   {
       poss=63;
       pos=50;
   }
if(poss==63 && pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=63;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=63;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=63;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=63;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=63;
        pos=100;
    }
    if(ch==4 && pos==50)
    {
        poss=63;
        pos=100;
    }
    if(ch==4 && pos==0)
    {
        poss=63;
        pos=150;
    }
    if(ch==4 && pos==-50)
    {
        poss=63;
        pos=200;
    }
    if(ch==4 && pos==-100)
    {
        poss=63;
        pos=250;
    }



               if(pos==550+(50*ch) && poss==63)
   {
       poss=18;
       pos=600;
   }




if(poss==18 && pos>200) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }

if(poss==18 && pos<100)
{
    pos=100;
     settextstyle(3,0,0);
    setcolor(BLUE);
    outtextxy(100,200,"PLAYER 1ST WINS");

}

if(ch==2 && pos==600)
    {
        poss=18;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=18;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=18;
        pos=500;
    }

    if(ch==4 && pos==650)
    {
        poss=18;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=18;
        pos=450;
    }
    if(ch==4 && pos==750)
    {
        poss=18;
        pos=400;
    }




  if(poss==423 && pos==550)
     {
         poss=153;
         pos=550;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }




      if(poss==378 && pos==200)
     {
         poss=243;
         pos=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }


     if(poss==243 && pos==400)
     {
         poss=108;
         pos=400;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }
      if(poss==153 && pos==300)
     {
         poss=18;
         pos=200;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }

      if(poss==63 && pos==100)
     {
         poss=198;
         pos=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(poss==198 && pos==250)
     {
         poss=378;
         pos=300;
           settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(poss==63 && pos==400)
     {
         poss=423;
         pos=450;  settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }                         //player1(&ch);
  settextstyle(0,0,7);
    setcolor(WHITE);
    circle(pos,poss,17);



break;



  case 4:  cleardevice();

initgraph(&gd, &gm, NULL);
    line(0,0,0,700);
    for(i=0;i<11;i++)
    {
        j+=50;
        line(30+j,0,30+j,450);
    }
    j=0;
    line(0,0,700,0);
    for(g=0;g<11;g++)
    {
        k+=45;
        line(80,0+k,580,0+k);

    }
         k=0;





///////////////new for clr////////


setfillstyle(SOLID_FILL,YELLOW);

    line(80,0,130,0);
    line(80,0,80,45);
    line(80,45,130,45);
    line(130,0,130,45);
    floodfill(81,10,WHITE);
    for(y=0;y<4;y++)
    {
        a+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+a,0,130+a,0);
    line(80+a,0,80+a,45);
    line(80+a,45,130+a,45);
    line(130+a,0,130+a,45);
    floodfill(81+a,10,WHITE);
    }
    a=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(130,0,180,0);
    line(130,0,130,45);
    line(80,45,180,45);
    line(180,0,180,45);
    floodfill(131,10,WHITE);

    for(z=0;z<4;z++)
    {
        b+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+b,0,180+b,0);
    line(130+b,0,130+b,45);
    line(180+b,45,180+b,45);
    line(180+b,0,180+b,45);
    floodfill(131+b,10,WHITE);
    }
    b=0;

    setfillstyle(SOLID_FILL,BLUE);
    line(80,45,130,45);
    line(80,45,80,90);
    line(80,90,130,90);
    line(130,45,130,90);
    floodfill(81,55,WHITE);
    for(e=0;e<4;e++)
    {
        c+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+c,45,130+c,45);
    line(80+c,45,80+c,90);
    line(80+c,90,130+c,90);
    line(130+c,45,130+c,90);
    floodfill(81+c,55,WHITE);
    }
c=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,45,180,45);
    line(130,45,130,90);
    line(80,90,180,90);
    line(180,45,180,90);
    floodfill(131,50,WHITE);

    for(f=0;f<4;f++)
    {
        d+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+d,45,180+d,45);
    line(130+d,45,130+d,90);
    line(80+d,90,180+d,90);
    line(180+d,45,180+d,90);
    floodfill(131+d,55,WHITE);

    }
d=0;


        setfillstyle(SOLID_FILL,YELLOW);
    line(80,90,130,90);
    line(80,135,80,135);
    line(80,135,130,135);
    line(130,90,130,135);
    floodfill(81,100,WHITE);
    for(m=0;m<4;m++)
    {
        h+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+h,90,130+h,90);
    line(80+h,135,80+h,135);
    line(80+h,135,130+h,135);
    line(130+h,90,130+h,135);
    floodfill(81+h,100,WHITE);
    }

h=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(130,90,180,90);
    line(130,90,130,135);
    line(80,135,180,135);
    line(180,90,180,135);
    floodfill(131,100,WHITE);

    for(n=0;n<4;n++)
    {
        l+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+l,90,180+l,90);
    line(130+l,90,130+l,135);
    line(80+l,135,180+l,135);
    line(180+l,90,180+l,135);
    floodfill(131+l,100,WHITE);

    }
l=0;


        setfillstyle(SOLID_FILL,BLUE);
    line(80,135,130,135);
    line(80,180,80,180);
    line(80,180,130,180);
    line(130,135,130,180);
    floodfill(81,145,WHITE);
    for(o=0;o<4;o++)
    {
        p+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+p,135,130+p,135);
    line(80+p,180,80+p,180);
    line(80+p,180,130+p,180);
    line(130+p,135,130+p,180);
    floodfill(81+p,145,WHITE);
    }
p=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,135,180,135);
    line(130,135,130,180);
    line(80,180,180,180);
    line(180,135,180,180);
    floodfill(131,145,WHITE);

    for(q=0;q<4;q++)
    {
        r+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+r,135,180+r,135);
    line(130+r,135,130+r,180);
    line(80+r,180,180+r,180);
    line(180+r,135,180+r,180);
    floodfill(131+r,145,WHITE);

    }
r=0;

setfillstyle(SOLID_FILL,YELLOW);
    line(80,180,130,180);
    line(80,225,80,225);
    line(80,225,130,225);
    line(130,180,130,225);
    floodfill(81,190,WHITE);
    for(s=0;s<4;s++)
    {
        t+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+t,180,130+t,180);
    line(80+t,225,80+t,225);
    line(80+t,225,130+t,225);
    line(130+t,180,130+t,225);
    floodfill(81+t,190,WHITE);
    }
t=0;

 setfillstyle(SOLID_FILL,BLUE);
    line(130,180,180,180);
    line(130,180,130,225);
    line(80,225,180,225);
    line(180,180,180,225);
    floodfill(131,190,WHITE);

    for(u=0;u<4;u++)
    {
        v+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+v,180,180+v,180);
    line(130+v,180,130+v,225);
    line(80+v,225,180+v,225);
    line(180+v,180,180+v,225);
    floodfill(131+v,190,WHITE);
    }

    v=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(80,225,130,225);
    line(80,270,80,270);
    line(80,270,130,270);
    line(130,225,130,270);
    floodfill(81,235,WHITE);
    for(ab=0;ab<4;ab++)
    {
        bc+=100;
setfillstyle(SOLID_FILL,BLUE);
 line(80+bc,225,130+bc,225);
    line(80+bc,270,80+bc,270);
    line(80+bc,270,130+bc,270);
    line(130+bc,225,130+bc,270);
    floodfill(81+bc,235,WHITE);
    }
    bc=0;



setfillstyle(SOLID_FILL,YELLOW);
    line(130,225,180,225);
    line(130,225,130,270);
    line(80,270,180,270);
    line(180,225,180,270);
    floodfill(131,235,WHITE);

    for(cd=0;cd<4;cd++)
    {
        de+=100;
         setfillstyle(SOLID_FILL,YELLOW);
          line(130+de,225,180+de,225);
    line(130+de,225,130+de,270);
    line(80+de,270,180+de,270);
    line(180+de,225,180+de,270);
    floodfill(131+de,235,WHITE);
    }
de=0;

        setfillstyle(SOLID_FILL,YELLOW);
    line(80,270,130,270);
    line(80,315,80,315);
    line(80,315,130,315);
    line(130,270,130,315);
    floodfill(81,280,WHITE);
    for(ef=0;ef<4;ef++)
    {
        fg+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+fg,270,130+fg,270);
    line(80+fg,315,80+fg,315);
    line(80+fg,315,130+fg,315);
    line(130+fg,270,130+fg,315);
    floodfill(81+fg,280,WHITE);
    }
fg=0;

setfillstyle(SOLID_FILL,BLUE);
    line(130,270,180,270);
    line(130,270,130,315);
    line(80,315,180,315);
    line(180,270,180,315);
    floodfill(131,280,WHITE);

    for(gh=0;gh<4;gh++)
    {
        hi+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+hi,270,180+hi,270);
    line(130+hi,270,130+hi,315);
    line(80+hi,315,180+hi,315);
    line(180+hi,270,180+hi,315);
    floodfill(131+hi,280,WHITE);
    }
    hi=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(80,315,130,315);
    line(80,360,80,360);
    line(80,360,130,360);
    line(130,315,130,360);
    floodfill(81,325,WHITE);
    for(ij=0;ij<4;ij++)
    {
        jk+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+jk,315,130+jk,315);
    line(80+jk,360,80+jk,360);
    line(80+jk,360,130+jk,360);
    line(130+jk,315,130+jk,360);
    floodfill(81+jk,325,WHITE);
    }
    jk=0;


    setfillstyle(SOLID_FILL,YELLOW);
    line(130,315,180,315);
    line(130,315,130,360);
    line(80,360,180,360);
    line(180,315,180,360);
    floodfill(131,325,WHITE);

    for(kl=0;kl<4;kl++)
    {
        lm+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+lm,315,180+lm,315);
    line(130+lm,315,130+lm,360);
    line(80+lm,360,180+lm,360);
    line(180+lm,315,180+lm,360);
    floodfill(131+lm,325,WHITE);
    }
lm=0;


     setfillstyle(SOLID_FILL,YELLOW);
    line(80,360,130,360);
    line(80,405,80,405);
    line(80,405,130,405);
    line(130,360,130,405);
    floodfill(81,370,WHITE);
    for(mn=0;mn<4;mn++)
    {
        no+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+no,360,130+no,360);
    line(80+no,405,80+no,405);
    line(80+no,405,130+no,405);
    line(130+no,360,130+no,405);
    floodfill(81+no,370,WHITE);
    }
no=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(130,360,180,360);
    line(130,360,130,405);
    line(80,405,180,405);
    line(180,360,180,405);
    floodfill(131,370,WHITE);

    for(op=0;op<4;op++)
    {
        pq+=100;
         setfillstyle(SOLID_FILL,BLUE);
         line(130+pq,360,180+pq,360);
    line(130+pq,360,130+pq,405);
    line(80+pq,405,180+pq,405);
    line(180+pq,360,180+pq,405);
    floodfill(131+pq,370,WHITE);
    }
pq=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(80,405,130,405);
    line(80,450,80,450);
    line(80,450,130,450);
    line(130,405,130,450);
    floodfill(81,415,WHITE);
    for(qr=0;qr<4;qr++)
    {
    rs+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+rs,405,130+rs,405);
    line(80+rs,450,80+rs,450);
    line(80+rs,450,130+rs,450);
    line(130+rs,405,130+rs,450);
    floodfill(81+rs,415,WHITE);
    }
    rs=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,405,180,405);
    line(130,405,130,450);
    line(130,450,180,450);
    line(180,405,180,450);
    floodfill(131,415,WHITE);

    for(st=0;st<4;st++)
    {
        tu+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+tu,405,180+tu,405);
    line(130+tu,405,130+tu,450);
    line(130+tu,450,180+tu,450);
    line(180+tu,405,180+tu,450);
    floodfill(131+tu,415,WHITE);
    }
    tu=0;










    ////////////////numbers/////////////




outtextxy(103,420,"1");  ///1st line
outtextxy(153,420,"2");
outtextxy(203,420,"3");
outtextxy(253,420,"4");
outtextxy(303,420,"5");
outtextxy(353,420,"6");
outtextxy(403,420,"7");
outtextxy(453,420,"8");
outtextxy(503,420,"9");
outtextxy(553,420,"10");


outtextxy(103,375,"20");  ///2nd line
outtextxy(153,375,"19");
outtextxy(203,375,"18");
outtextxy(253,375,"17");
outtextxy(303,375,"16");
outtextxy(353,375,"15");
outtextxy(403,375,"14");
outtextxy(453,375,"13");
outtextxy(503,375,"12");
outtextxy(553,375,"11");


outtextxy(103,335,"21");  ///3rd line
outtextxy(153,335,"22");
outtextxy(203,335,"23");
outtextxy(253,335,"24");
outtextxy(303,335,"25");
outtextxy(353,335,"26");
outtextxy(403,335,"27");
outtextxy(453,335,"28");
outtextxy(503,335,"29");
outtextxy(553,335,"30");



outtextxy(103,290,"40");  ///4th line
outtextxy(153,290,"39");
outtextxy(203,290,"38");
outtextxy(253,290,"37");
outtextxy(303,290,"36");
outtextxy(353,290,"35");
outtextxy(403,290,"34");
outtextxy(453,290,"33");
outtextxy(503,290,"32");
outtextxy(553,290,"31");


outtextxy(103,245,"41");  ///5th line
outtextxy(153,245,"42");
outtextxy(203,245,"43");
outtextxy(253,245,"44");
outtextxy(303,245,"45");
outtextxy(353,245,"46");
outtextxy(403,245,"47");
outtextxy(453,245,"48");
outtextxy(503,245,"49");
outtextxy(553,245,"50");


outtextxy(103,200,"60");  ///6th line
outtextxy(153,200,"59");
outtextxy(203,200,"58");
outtextxy(253,200,"57");
outtextxy(303,200,"56");
outtextxy(353,200,"55");
outtextxy(403,200,"54");
outtextxy(453,200,"53");
outtextxy(503,200,"52");
outtextxy(553,200,"51");


outtextxy(103,155,"61");  ///7th line
outtextxy(153,155,"62");
outtextxy(203,155,"63");
outtextxy(253,155,"64");
outtextxy(303,155,"65");
outtextxy(353,155,"66");
outtextxy(403,155,"67");
outtextxy(453,155,"68");
outtextxy(503,155,"69");
outtextxy(553,155,"70");


outtextxy(103,110,"80");  ///8th line
outtextxy(153,110,"79");
outtextxy(203,110,"78");
outtextxy(253,110,"77");
outtextxy(303,110,"76");
outtextxy(353,110,"75");
outtextxy(403,110,"74");
outtextxy(453,110,"73");
outtextxy(503,110,"72");
outtextxy(553,110,"71");


outtextxy(103,65,"81");  ///9th line
outtextxy(153,65,"82");
outtextxy(203,65,"83");
outtextxy(253,65,"84");
outtextxy(303,65,"85");
outtextxy(353,65,"86");
outtextxy(403,65,"87");
outtextxy(453,65,"88");
outtextxy(503,65,"89");
outtextxy(553,65,"90");


outtextxy(103,20,"100");  ///10th line
outtextxy(153,20,"99");
outtextxy(203,20,"98");
outtextxy(253,20,"97");
outtextxy(303,20,"96");
outtextxy(353,20,"95");
outtextxy(403,20,"94");
outtextxy(453,20,"93");
outtextxy(503,20,"92");
outtextxy(553,20,"91");










////////////////snakes//////
setcolor(RED);
setlinestyle(0,0,5);
arc(100,100,320,70,50);
circle(115,53,5);
arc(154,179,110,220,50);




setcolor(RED);
setlinestyle(0,0,5);
arc(250,250,320,70,50);
circle(265,203,5);
arc(304,329,110,280,50);



setcolor(RED);
setlinestyle(0,0,5);

 arc(400,180,320,80,100);
 circle(415,80,5);
    arc(509,338,110,233,100);





    ////////ladders///////





setcolor(GREEN);
setlinestyle(0,0,5);


line(185,40,285,175);
line(215,25,315,160);
line(210,67,230,52);
line(240,110,260,92);
line(270,153,295,132);

setcolor(GREEN);
setlinestyle(0,0,5);

line(85,265,185,400);
line(115,260,215,385);
line(110,302,130,277);
line(140,345,160,317);
line(170,387,195,357);

setcolor(GREEN);
setlinestyle(0,0,5);


line(533,170,537,440);
line(572,170,577,440);
line(535,230,575,232);
line(535,320,575,322);
line(535,410,575,412);



line(383,110,387,250);
line(418,110,422,250);
line(383,140,418,144);
line(383,210,418,214);






setfillstyle(SOLID_FILL,RED);
floodfill(1 , 1,WHITE);




                    ///////////////end///////////////









              setfillstyle(SOLID_FILL,BLUE);
setcolor(BLUE);
line(15,120,65,120);
line(15,120,15,165);
line(65,120,65,165);
line(15,165,65,165);
              setcolor(WHITE);
circle(25,127,3);
circle(55,158,3);
circle(55,127,3);
circle(25,158,3);



   ////////////////////////////////////////////////////////////////////player//////////////////////////////////////////




if(pos==550 && poss==423)
   {
       poss=378;
       pos=600;
   }

///////////here
if(poss==378) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }


    if(poss==423 && pos!=600)
    {


      pos=pos+50*ch;
    }
 if(ch==2 && pos==600)
    {
        poss=378;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=378;
        pos=500;
    }
if(ch==3 && pos==600)
    {
        poss=378;
        pos=550;
    }

    if(ch==4 && pos==600)
    {
        poss=378;
        pos=550;
    }
    if(ch==4 && pos==650)
    {
        poss=378;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=378;
        pos=450;
    }
    if(ch==5 && pos==600)
    {
        poss=378;
        pos=550;
    }
    if(ch==5 && pos==650)
    {
        poss=378;
        pos=500;
    }
    if(ch==5 && pos==700)
    {
        poss=378;
        pos=450;
    }
    if(ch==5 && pos==750)
    {
        poss=378;
        pos=400;
    }

                       ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==378)
   {
       poss=333;
       pos=50;
   }
if(poss==333) //&& pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=333;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=333;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=333;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=330;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=333;
        pos=100;
    }
    if(ch==4 && pos==50)
    {
        poss=333;
        pos=100;
    }
    if(ch==4 && pos==0)
    {
        poss=333;
        pos=150;
    }
    if(ch==4 && pos==-50)
    {
        poss=333;
        pos=200;
    }
    if(ch==4 && pos==-100)
    {
        poss=333;
        pos=250;
    }
    if(ch==5 && pos==50)
    {
        poss=333;
        pos=100;
    }
    if(ch==5 && pos==0)
    {
        poss=333;
        pos=150;
    }
    if(ch==5 && pos==-50)
    {
        poss=333;
        pos=200;
    }
     if(ch==5 && pos==-100)
    {
        poss=333;
        pos=250;
    }
    if(ch==6 && pos==50)
    {
        poss=333;
        pos=100;
    }
     if(ch==6 && pos==0)
    {
        poss=333;
        pos=150;
    }
    if(ch==6 && pos==-50)
    {
        poss=333;
        pos=200;
    }
    if(ch==6 && pos==-100)
    {
        poss=333;
        pos=250;
    }

if(ch==6 && pos==-150)
    {
        poss=333;
        pos=300;
    }


                /////////////////////////////////////////////////from here

if(pos==550+(50*ch) && poss==333)
   {
       poss=288;
       pos=600;
   }

///////////here
if(poss==288) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }



 if(ch==2 && pos==600)
    {
        poss=288;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=288;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=288;
        pos=500;
    }

    if(ch==4 && pos==650)
    {
        poss=288;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=288;
        pos=450;
    }
    if(ch==4 && pos==750)
    {
        poss=288;
        pos=400;
    }
    if(ch==5 && pos==600)
    {
        poss=288;
        pos=550;
    }
    if(ch==5 && pos==650)
    {
        poss=288;
        pos=500;
    }
    if(ch==5 && pos==700)
    {
        poss=288;
        pos=450;
    }
    if(ch==5 && pos==750)
    {
        poss=288;
        pos=400;
    }




  ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==288)
   {
       poss=243;
       pos=50;
   }
if(poss==243 && pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=243;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=243;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=243;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=243;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=243;
        pos=100;
    }
    if(ch==4 && pos==50)
    {
        poss=243;
        pos=100;
    }
    if(ch==4 && pos==0)
    {
        poss=243;
        pos=150;
    }
    if(ch==4 && pos==-50)
    {
        poss=243;
        pos=200;
    }
    if(ch==4 && pos==-100)
    {
        poss=243;
        pos=250;
    }
    if(ch==5 && pos==50)
    {
        poss=243;
        pos=100;
    }
    if(ch==5 && pos==0)
    {
        poss=243;
        pos=150;
    }
    if(ch==5 && pos==-50)
    {
        poss=243;
        pos=200;
    }
     if(ch==5 && pos==-100)
    {
        poss=243;
        pos=250;
    }

if(pos==550+(50*ch) && poss==243)
   {
       poss=198;
       pos=600;
   }

///////////here
if(poss==198) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }



 if(ch==2 && pos==600)
    {
        poss=198;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=198;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=198;
        pos=500;
    }

    if(ch==4 && pos==650)
    {
        poss=198;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=198;
        pos=450;
    }
    if(ch==4 && pos==750)
    {
        poss=198;
        pos=400;
    }
    if(ch==5 && pos==600)
    {
        poss=198;
        pos=550;
    }
    if(ch==5 && pos==650)
    {
        poss=198;
        pos=500;
    }
    if(ch==5 && pos==700)
    {
        poss=198;
        pos=450;
    }
    if(ch==5 && pos==750)
    {
        poss=198;
        pos=400;
    }



  ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==198)
   {
       poss=153;
       pos=50;
   }
if(poss==153 && pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=153;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=153;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=153;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=153;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=153;
        pos=100;
    }
    if(ch==4 && pos==50)
    {
        poss=153;
        pos=100;
    }
    if(ch==4 && pos==0)
    {
        poss=153;
        pos=150;
    }
    if(ch==4 && pos==-50)
    {
        poss=153;
        pos=200;
    }
    if(ch==4 && pos==-100)
    {
        poss=153;
        pos=250;
    }
    if(ch==5 && pos==50)
    {
        poss=153;
        pos=100;
    }
    if(ch==5 && pos==0)
    {
        poss=153;
        pos=150;
    }
    if(ch==5 && pos==-50)
    {
        poss=153;
        pos=200;
    }
     if(ch==5 && pos==-100)
    {
        poss=153;
        pos=250;
    }


if(pos==550+(50*ch) && poss==153)
   {
       poss=108;
       pos=600;
   }

///////////here
if(poss==108) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }



 if(ch==2 && pos==600)
    {
        poss=108;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=108;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=108;
        pos=500;
    }

    if(ch==4 && pos==650)
    {
        poss=108;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=108;
        pos=450;
    }
    if(ch==4 && pos==750)
    {
        poss=108;
        pos=400;
    }
    if(ch==5 && pos==600)
    {
        poss=108;
        pos=550;
    }
    if(ch==5 && pos==650)
    {
        poss=108;
        pos=500;
    }
    if(ch==5 && pos==700)
    {
        poss=108;
        pos=450;
    }
    if(ch==5 && pos==750)
    {
        poss=108;
        pos=400;
    }

  ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==108)
   {
       poss=63;
       pos=50;
   }
if(poss==63 && pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=63;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=63;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=63;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=63;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=63;
        pos=100;
    }
    if(ch==4 && pos==50)
    {
        poss=63;
        pos=100;
    }
    if(ch==4 && pos==0)
    {
        poss=63;
        pos=150;
    }
    if(ch==4 && pos==-50)
    {
        poss=63;
        pos=200;
    }
    if(ch==4 && pos==-100)
    {
        poss=63;
        pos=250;
    }
    if(ch==5 && pos==50)
    {
        poss=63;
        pos=100;
    }
    if(ch==5 && pos==0)
    {
        poss=63;
        pos=150;
    }
    if(ch==5 && pos==-50)
    {
        poss=63;
        pos=200;
    }
     if(ch==5 && pos==-100)
    {
        poss=63;
        pos=250;
    }




               if(pos==550+(50*ch) && poss==63)
   {
       poss=18;
       pos=600;
   }




if(poss==18 && pos>250) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }

if(poss==18 && pos<100)
{
    pos=100;

}

if(ch==2 && pos==600)
    {
        poss=18;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=18;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=18;
        pos=500;
    }

    if(ch==4 && pos==650)
    {
        poss=18;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=18;
        pos=450;
    }
    if(ch==4 && pos==750)
    {
        poss=18;
        pos=400;
    }
    if(ch==5 && pos==600)
    {
        poss=108;
        pos=550;
    }
    if(ch==5 && pos==650)
    {
        poss=108;
        pos=500;
    }
    if(ch==5 && pos==700)
    {
        poss=108;
        pos=450;
    }
    if(ch==5 && pos==750)
    {
        poss=108;
        pos=400;
    }






  if(poss==423 && pos==550)
     {
         poss=153;
         pos=550;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }




      if(poss==378 && pos==200)
     {
         poss=243;
         pos=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }


     if(poss==243 && pos==400)
     {
         poss=108;
         pos=400;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }
      if(poss==153 && pos==300)
     {
         poss=18;
         pos=200;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }

      if(poss==63 && pos==100)
     {
         poss=198;
         pos=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(poss==198 && pos==250)
     {
         poss=378;
         pos=300;
           settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(poss==63 && pos==400)
     {
         poss=423;
         pos=450;  settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }




settextstyle(0,0,7);
    setcolor(WHITE);
    circle(pos,poss,17);
break;

case 5:cleardevice();




              /////////////start////////




initgraph(&gd, &gm, NULL);
    line(0,0,0,700);
    for(i=0;i<11;i++)
    {
        j+=50;
        line(30+j,0,30+j,450);
    }
    j=0;
    line(0,0,700,0);
    for(g=0;g<11;g++)
    {
        k+=45;
        line(80,0+k,580,0+k);

    }
         k=0;





///////////////new for clr////////


setfillstyle(SOLID_FILL,YELLOW);

    line(80,0,130,0);
    line(80,0,80,45);
    line(80,45,130,45);
    line(130,0,130,45);
    floodfill(81,10,WHITE);
    for(y=0;y<4;y++)
    {
        a+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+a,0,130+a,0);
    line(80+a,0,80+a,45);
    line(80+a,45,130+a,45);
    line(130+a,0,130+a,45);
    floodfill(81+a,10,WHITE);
    }
    a=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(130,0,180,0);
    line(130,0,130,45);
    line(80,45,180,45);
    line(180,0,180,45);
    floodfill(131,10,WHITE);

    for(z=0;z<4;z++)
    {
        b+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+b,0,180+b,0);
    line(130+b,0,130+b,45);
    line(180+b,45,180+b,45);
    line(180+b,0,180+b,45);
    floodfill(131+b,10,WHITE);
    }
    b=0;

    setfillstyle(SOLID_FILL,BLUE);
    line(80,45,130,45);
    line(80,45,80,90);
    line(80,90,130,90);
    line(130,45,130,90);
    floodfill(81,55,WHITE);
    for(e=0;e<4;e++)
    {
        c+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+c,45,130+c,45);
    line(80+c,45,80+c,90);
    line(80+c,90,130+c,90);
    line(130+c,45,130+c,90);
    floodfill(81+c,55,WHITE);
    }
c=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,45,180,45);
    line(130,45,130,90);
    line(80,90,180,90);
    line(180,45,180,90);
    floodfill(131,50,WHITE);

    for(f=0;f<4;f++)
    {
        d+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+d,45,180+d,45);
    line(130+d,45,130+d,90);
    line(80+d,90,180+d,90);
    line(180+d,45,180+d,90);
    floodfill(131+d,55,WHITE);

    }
d=0;


        setfillstyle(SOLID_FILL,YELLOW);
    line(80,90,130,90);
    line(80,135,80,135);
    line(80,135,130,135);
    line(130,90,130,135);
    floodfill(81,100,WHITE);
    for(m=0;m<4;m++)
    {
        h+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+h,90,130+h,90);
    line(80+h,135,80+h,135);
    line(80+h,135,130+h,135);
    line(130+h,90,130+h,135);
    floodfill(81+h,100,WHITE);
    }

h=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(130,90,180,90);
    line(130,90,130,135);
    line(80,135,180,135);
    line(180,90,180,135);
    floodfill(131,100,WHITE);

    for(n=0;n<4;n++)
    {
        l+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+l,90,180+l,90);
    line(130+l,90,130+l,135);
    line(80+l,135,180+l,135);
    line(180+l,90,180+l,135);
    floodfill(131+l,100,WHITE);

    }
l=0;


        setfillstyle(SOLID_FILL,BLUE);
    line(80,135,130,135);
    line(80,180,80,180);
    line(80,180,130,180);
    line(130,135,130,180);
    floodfill(81,145,WHITE);
    for(o=0;o<4;o++)
    {
        p+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+p,135,130+p,135);
    line(80+p,180,80+p,180);
    line(80+p,180,130+p,180);
    line(130+p,135,130+p,180);
    floodfill(81+p,145,WHITE);
    }
p=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,135,180,135);
    line(130,135,130,180);
    line(80,180,180,180);
    line(180,135,180,180);
    floodfill(131,145,WHITE);

    for(q=0;q<4;q++)
    {
        r+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+r,135,180+r,135);
    line(130+r,135,130+r,180);
    line(80+r,180,180+r,180);
    line(180+r,135,180+r,180);
    floodfill(131+r,145,WHITE);

    }
r=0;

setfillstyle(SOLID_FILL,YELLOW);
    line(80,180,130,180);
    line(80,225,80,225);
    line(80,225,130,225);
    line(130,180,130,225);
    floodfill(81,190,WHITE);
    for(s=0;s<4;s++)
    {
        t+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+t,180,130+t,180);
    line(80+t,225,80+t,225);
    line(80+t,225,130+t,225);
    line(130+t,180,130+t,225);
    floodfill(81+t,190,WHITE);
    }
t=0;

 setfillstyle(SOLID_FILL,BLUE);
    line(130,180,180,180);
    line(130,180,130,225);
    line(80,225,180,225);
    line(180,180,180,225);
    floodfill(131,190,WHITE);

    for(u=0;u<4;u++)
    {
        v+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+v,180,180+v,180);
    line(130+v,180,130+v,225);
    line(80+v,225,180+v,225);
    line(180+v,180,180+v,225);
    floodfill(131+v,190,WHITE);
    }

    v=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(80,225,130,225);
    line(80,270,80,270);
    line(80,270,130,270);
    line(130,225,130,270);
    floodfill(81,235,WHITE);
    for(ab=0;ab<4;ab++)
    {
        bc+=100;
setfillstyle(SOLID_FILL,BLUE);
 line(80+bc,225,130+bc,225);
    line(80+bc,270,80+bc,270);
    line(80+bc,270,130+bc,270);
    line(130+bc,225,130+bc,270);
    floodfill(81+bc,235,WHITE);
    }
    bc=0;



setfillstyle(SOLID_FILL,YELLOW);
    line(130,225,180,225);
    line(130,225,130,270);
    line(80,270,180,270);
    line(180,225,180,270);
    floodfill(131,235,WHITE);

    for(cd=0;cd<4;cd++)
    {
        de+=100;
         setfillstyle(SOLID_FILL,YELLOW);
          line(130+de,225,180+de,225);
    line(130+de,225,130+de,270);
    line(80+de,270,180+de,270);
    line(180+de,225,180+de,270);
    floodfill(131+de,235,WHITE);
    }
de=0;

        setfillstyle(SOLID_FILL,YELLOW);
    line(80,270,130,270);
    line(80,315,80,315);
    line(80,315,130,315);
    line(130,270,130,315);
    floodfill(81,280,WHITE);
    for(ef=0;ef<4;ef++)
    {
        fg+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+fg,270,130+fg,270);
    line(80+fg,315,80+fg,315);
    line(80+fg,315,130+fg,315);
    line(130+fg,270,130+fg,315);
    floodfill(81+fg,280,WHITE);
    }
fg=0;

setfillstyle(SOLID_FILL,BLUE);
    line(130,270,180,270);
    line(130,270,130,315);
    line(80,315,180,315);
    line(180,270,180,315);
    floodfill(131,280,WHITE);

    for(gh=0;gh<4;gh++)
    {
        hi+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+hi,270,180+hi,270);
    line(130+hi,270,130+hi,315);
    line(80+hi,315,180+hi,315);
    line(180+hi,270,180+hi,315);
    floodfill(131+hi,280,WHITE);
    }
    hi=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(80,315,130,315);
    line(80,360,80,360);
    line(80,360,130,360);
    line(130,315,130,360);
    floodfill(81,325,WHITE);
    for(ij=0;ij<4;ij++)
    {
        jk+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+jk,315,130+jk,315);
    line(80+jk,360,80+jk,360);
    line(80+jk,360,130+jk,360);
    line(130+jk,315,130+jk,360);
    floodfill(81+jk,325,WHITE);
    }
    jk=0;


    setfillstyle(SOLID_FILL,YELLOW);
    line(130,315,180,315);
    line(130,315,130,360);
    line(80,360,180,360);
    line(180,315,180,360);
    floodfill(131,325,WHITE);

    for(kl=0;kl<4;kl++)
    {
        lm+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+lm,315,180+lm,315);
    line(130+lm,315,130+lm,360);
    line(80+lm,360,180+lm,360);
    line(180+lm,315,180+lm,360);
    floodfill(131+lm,325,WHITE);
    }
lm=0;


     setfillstyle(SOLID_FILL,YELLOW);
    line(80,360,130,360);
    line(80,405,80,405);
    line(80,405,130,405);
    line(130,360,130,405);
    floodfill(81,370,WHITE);
    for(mn=0;mn<4;mn++)
    {
        no+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+no,360,130+no,360);
    line(80+no,405,80+no,405);
    line(80+no,405,130+no,405);
    line(130+no,360,130+no,405);
    floodfill(81+no,370,WHITE);
    }
no=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(130,360,180,360);
    line(130,360,130,405);
    line(80,405,180,405);
    line(180,360,180,405);
    floodfill(131,370,WHITE);

    for(op=0;op<4;op++)
    {
        pq+=100;
         setfillstyle(SOLID_FILL,BLUE);
         line(130+pq,360,180+pq,360);
    line(130+pq,360,130+pq,405);
    line(80+pq,405,180+pq,405);
    line(180+pq,360,180+pq,405);
    floodfill(131+pq,370,WHITE);
    }
pq=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(80,405,130,405);
    line(80,450,80,450);
    line(80,450,130,450);
    line(130,405,130,450);
    floodfill(81,415,WHITE);
    for(qr=0;qr<4;qr++)
    {
    rs+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+rs,405,130+rs,405);
    line(80+rs,450,80+rs,450);
    line(80+rs,450,130+rs,450);
    line(130+rs,405,130+rs,450);
    floodfill(81+rs,415,WHITE);
    }
    rs=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,405,180,405);
    line(130,405,130,450);
    line(130,450,180,450);
    line(180,405,180,450);
    floodfill(131,415,WHITE);

    for(st=0;st<4;st++)
    {
        tu+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+tu,405,180+tu,405);
    line(130+tu,405,130+tu,450);
    line(130+tu,450,180+tu,450);
    line(180+tu,405,180+tu,450);
    floodfill(131+tu,415,WHITE);
    }
    tu=0;










    ////////////////numbers/////////////




outtextxy(103,420,"1");  ///1st line
outtextxy(153,420,"2");
outtextxy(203,420,"3");
outtextxy(253,420,"4");
outtextxy(303,420,"5");
outtextxy(353,420,"6");
outtextxy(403,420,"7");
outtextxy(453,420,"8");
outtextxy(503,420,"9");
outtextxy(553,420,"10");


outtextxy(103,375,"20");  ///2nd line
outtextxy(153,375,"19");
outtextxy(203,375,"18");
outtextxy(253,375,"17");
outtextxy(303,375,"16");
outtextxy(353,375,"15");
outtextxy(403,375,"14");
outtextxy(453,375,"13");
outtextxy(503,375,"12");
outtextxy(553,375,"11");


outtextxy(103,335,"21");  ///3rd line
outtextxy(153,335,"22");
outtextxy(203,335,"23");
outtextxy(253,335,"24");
outtextxy(303,335,"25");
outtextxy(353,335,"26");
outtextxy(403,335,"27");
outtextxy(453,335,"28");
outtextxy(503,335,"29");
outtextxy(553,335,"30");



outtextxy(103,290,"40");  ///4th line
outtextxy(153,290,"39");
outtextxy(203,290,"38");
outtextxy(253,290,"37");
outtextxy(303,290,"36");
outtextxy(353,290,"35");
outtextxy(403,290,"34");
outtextxy(453,290,"33");
outtextxy(503,290,"32");
outtextxy(553,290,"31");


outtextxy(103,245,"41");  ///5th line
outtextxy(153,245,"42");
outtextxy(203,245,"43");
outtextxy(253,245,"44");
outtextxy(303,245,"45");
outtextxy(353,245,"46");
outtextxy(403,245,"47");
outtextxy(453,245,"48");
outtextxy(503,245,"49");
outtextxy(553,245,"50");


outtextxy(103,200,"60");  ///6th line
outtextxy(153,200,"59");
outtextxy(203,200,"58");
outtextxy(253,200,"57");
outtextxy(303,200,"56");
outtextxy(353,200,"55");
outtextxy(403,200,"54");
outtextxy(453,200,"53");
outtextxy(503,200,"52");
outtextxy(553,200,"51");


outtextxy(103,155,"61");  ///7th line
outtextxy(153,155,"62");
outtextxy(203,155,"63");
outtextxy(253,155,"64");
outtextxy(303,155,"65");
outtextxy(353,155,"66");
outtextxy(403,155,"67");
outtextxy(453,155,"68");
outtextxy(503,155,"69");
outtextxy(553,155,"70");


outtextxy(103,110,"80");  ///8th line
outtextxy(153,110,"79");
outtextxy(203,110,"78");
outtextxy(253,110,"77");
outtextxy(303,110,"76");
outtextxy(353,110,"75");
outtextxy(403,110,"74");
outtextxy(453,110,"73");
outtextxy(503,110,"72");
outtextxy(553,110,"71");


outtextxy(103,65,"81");  ///9th line
outtextxy(153,65,"82");
outtextxy(203,65,"83");
outtextxy(253,65,"84");
outtextxy(303,65,"85");
outtextxy(353,65,"86");
outtextxy(403,65,"87");
outtextxy(453,65,"88");
outtextxy(503,65,"89");
outtextxy(553,65,"90");


outtextxy(103,20,"100");  ///10th line
outtextxy(153,20,"99");
outtextxy(203,20,"98");
outtextxy(253,20,"97");
outtextxy(303,20,"96");
outtextxy(353,20,"95");
outtextxy(403,20,"94");
outtextxy(453,20,"93");
outtextxy(503,20,"92");
outtextxy(553,20,"91");










////////////////snakes//////
setcolor(RED);
setlinestyle(0,0,5);
arc(100,100,320,70,50);
circle(115,53,5);
arc(154,179,110,220,50);




setcolor(RED);
setlinestyle(0,0,5);
arc(250,250,320,70,50);
circle(265,203,5);
arc(304,329,110,280,50);



setcolor(RED);
setlinestyle(0,0,5);

 arc(400,180,320,80,100);
 circle(415,80,5);
    arc(509,338,110,233,100);





    ////////ladders///////





setcolor(GREEN);
setlinestyle(0,0,5);


line(185,40,285,175);
line(215,25,315,160);
line(210,67,230,52);
line(240,110,260,92);
line(270,153,295,132);

setcolor(GREEN);
setlinestyle(0,0,5);

line(85,265,185,400);
line(115,260,215,385);
line(110,302,130,277);
line(140,345,160,317);
line(170,387,195,357);

setcolor(GREEN);
setlinestyle(0,0,5);


line(533,170,537,440);
line(572,170,577,440);
line(535,230,575,232);
line(535,320,575,322);
line(535,410,575,412);



line(383,110,387,250);
line(418,110,422,250);
line(383,140,418,144);
line(383,210,418,214);






setfillstyle(SOLID_FILL,RED);
floodfill(1 , 1,WHITE);


              setfillstyle(SOLID_FILL,BLUE);
setcolor(BLUE);
line(15,120,65,120);
line(15,120,15,165);
line(65,120,65,165);
line(15,165,65,165);
              setcolor(WHITE);
circle(25,127,3);
circle(55,158,3);
circle(55,127,3);
circle(40,143,3);
circle(25,158,3);



   ////////////////////////////////////////////////////////////////////player//////////////////////////////////////////




if(pos==550 && poss==423)
   {
       poss=378;
       pos=600;
   }

///////////here
if(poss==378) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }


    if(poss==423 && pos!=600)
    {


      pos=pos+50*ch;
    }
 if(ch==2 && pos==600)
    {
        poss=378;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=378;
        pos=500;
    }
if(ch==3 && pos==600)
    {
        poss=378;
        pos=550;
    }

    if(ch==4 && pos==600)
    {
        poss=378;
        pos=550;
    }
    if(ch==4 && pos==650)
    {
        poss=378;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=378;
        pos=450;
    }
    if(ch==5 && pos==600)
    {
        poss=378;
        pos=550;
    }
    if(ch==5 && pos==650)
    {
        poss=378;
        pos=500;
    }
    if(ch==5 && pos==700)
    {
        poss=378;
        pos=450;
    }
    if(ch==5 && pos==750)
    {
        poss=378;
        pos=400;
    }
    if(ch==6 && pos==600)
    {
        poss=378;
        pos=550;
    }
     if(ch==6 && pos==650)
    {
        poss=378;
        pos=500;
    }
    if(ch==6 && pos==700)
    {
        poss=378;
        pos=450;
    }
    if(ch==6 && pos==750)
    {
        poss=378;
        pos=400;
    }

if(ch==6 && pos==800)
    {
        poss=378;
        pos=350;
    }


                       ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==378)
   {
       poss=333;
       pos=50;
   }
if(poss==333) //&& pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=333;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=333;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=333;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=330;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=333;
        pos=100;
    }
    if(ch==4 && pos==50)
    {
        poss=333;
        pos=100;
    }
    if(ch==4 && pos==0)
    {
        poss=333;
        pos=150;
    }
    if(ch==4 && pos==-50)
    {
        poss=333;
        pos=200;
    }
    if(ch==4 && pos==-100)
    {
        poss=333;
        pos=250;
    }
    if(ch==5 && pos==50)
    {
        poss=333;
        pos=100;
    }
    if(ch==5 && pos==0)
    {
        poss=333;
        pos=150;
    }
    if(ch==5 && pos==-50)
    {
        poss=333;
        pos=200;
    }
     if(ch==5 && pos==-100)
    {
        poss=333;
        pos=250;
    }
    if(ch==6 && pos==50)
    {
        poss=333;
        pos=100;
    }
     if(ch==6 && pos==0)
    {
        poss=333;
        pos=150;
    }
    if(ch==6 && pos==-50)
    {
        poss=333;
        pos=200;
    }
    if(ch==6 && pos==-100)
    {
        poss=333;
        pos=250;
    }

if(ch==6 && pos==-150)
    {
        poss=333;
        pos=300;
    }


                /////////////////////////////////////////////////from here

if(pos==550+(50*ch) && poss==333)
   {
       poss=288;
       pos=600;
   }

///////////here
if(poss==288) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }



 if(ch==2 && pos==600)
    {
        poss=288;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=288;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=288;
        pos=500;
    }

    if(ch==4 && pos==650)
    {
        poss=288;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=288;
        pos=450;
    }
    if(ch==4 && pos==750)
    {
        poss=288;
        pos=400;
    }
    if(ch==5 && pos==600)
    {
        poss=288;
        pos=550;
    }
    if(ch==5 && pos==650)
    {
        poss=288;
        pos=500;
    }
    if(ch==5 && pos==700)
    {
        poss=288;
        pos=450;
    }
    if(ch==5 && pos==750)
    {
        poss=288;
        pos=400;
    }
    if(ch==6 && pos==600)
    {
        poss=288;
        pos=550;
    }
     if(ch==6 && pos==650)
    {
        poss=288;
        pos=500;
    }
    if(ch==6 && pos==700)
    {
        poss=288;
        pos=450;
    }
    if(ch==6 && pos==750)
    {
        poss=288;
        pos=400;
    }

if(ch==6 && pos==800)
    {
        poss=288;
        pos=350;
    }



  ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==288)
   {
       poss=243;
       pos=50;
   }
if(poss==243 && pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=243;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=243;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=243;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=243;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=243;
        pos=100;
    }
    if(ch==4 && pos==50)
    {
        poss=243;
        pos=100;
    }
    if(ch==4 && pos==0)
    {
        poss=243;
        pos=150;
    }
    if(ch==4 && pos==-50)
    {
        poss=243;
        pos=200;
    }
    if(ch==4 && pos==-100)
    {
        poss=243;
        pos=250;
    }
    if(ch==5 && pos==50)
    {
        poss=243;
        pos=100;
    }
    if(ch==5 && pos==0)
    {
        poss=243;
        pos=150;
    }
    if(ch==5 && pos==-50)
    {
        poss=243;
        pos=200;
    }
     if(ch==5 && pos==-100)
    {
        poss=243;
        pos=250;
    }
    if(ch==6 && pos==50)
    {
        poss=243;
        pos=100;
    }
     if(ch==6 && pos==0)
    {
        poss=243;
        pos=150;
    }
    if(ch==6 && pos==-50)
    {
        poss=243;
        pos=200;
    }
    if(ch==6 && pos==-100)
    {
        poss=243;
        pos=250;
    }

if(ch==6 && pos==-150)
    {
        poss=243;
        pos=300;
    }









                /////////////////////////////////////////////////from here

if(pos==550+(50*ch) && poss==243)
   {
       poss=198;
       pos=600;
   }

///////////here
if(poss==198) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }



 if(ch==2 && pos==600)
    {
        poss=198;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=198;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=198;
        pos=500;
    }

    if(ch==4 && pos==650)
    {
        poss=198;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=198;
        pos=450;
    }
    if(ch==4 && pos==750)
    {
        poss=198;
        pos=400;
    }
    if(ch==5 && pos==600)
    {
        poss=198;
        pos=550;
    }
    if(ch==5 && pos==650)
    {
        poss=198;
        pos=500;
    }
    if(ch==5 && pos==700)
    {
        poss=198;
        pos=450;
    }
    if(ch==5 && pos==750)
    {
        poss=198;
        pos=400;
    }
    if(ch==6 && pos==600)
    {
        poss=198;
        pos=550;
    }
     if(ch==6 && pos==650)
    {
        poss=198;
        pos=500;
    }
    if(ch==6 && pos==700)
    {
        poss=198;
        pos=450;
    }
    if(ch==6 && pos==750)
    {
        poss=198;
        pos=400;
    }

if(ch==6 && pos==800)
    {
        poss=198;
        pos=350;
    }



  ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==198)
   {
       poss=153;
       pos=50;
   }
if(poss==153 && pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=153;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=153;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=153;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=153;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=153;
        pos=100;
    }
    if(ch==4 && pos==50)
    {
        poss=153;
        pos=100;
    }
    if(ch==4 && pos==0)
    {
        poss=153;
        pos=150;
    }
    if(ch==4 && pos==-50)
    {
        poss=153;
        pos=200;
    }
    if(ch==4 && pos==-100)
    {
        poss=153;
        pos=250;
    }
    if(ch==5 && pos==50)
    {
        poss=153;
        pos=100;
    }
    if(ch==5 && pos==0)
    {
        poss=153;
        pos=150;
    }
    if(ch==5 && pos==-50)
    {
        poss=153;
        pos=200;
    }
     if(ch==5 && pos==-100)
    {
        poss=153;
        pos=250;
    }
    if(ch==6 && pos==50)
    {
        poss=153;
        pos=100;
    }
     if(ch==6 && pos==0)
    {
        poss=153;
        pos=150;
    }
    if(ch==6 && pos==-50)
    {
        poss=153;
        pos=200;
    }
    if(ch==6 && pos==-100)
    {
        poss=153;
        pos=250;
    }

if(ch==6 && pos==-150)
    {
        poss=153;
        pos=300;
    }



                /////////////////////////////////////////////////from here

if(pos==550+(50*ch) && poss==153)
   {
       poss=108;
       pos=600;
   }

///////////here
if(poss==108) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }



 if(ch==2 && pos==600)
    {
        poss=108;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=108;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=108;
        pos=500;
    }

    if(ch==4 && pos==650)
    {
        poss=108;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=108;
        pos=450;
    }
    if(ch==4 && pos==750)
    {
        poss=108;
        pos=400;
    }
    if(ch==5 && pos==600)
    {
        poss=108;
        pos=550;
    }
    if(ch==5 && pos==650)
    {
        poss=108;
        pos=500;
    }
    if(ch==5 && pos==700)
    {
        poss=108;
        pos=450;
    }
    if(ch==5 && pos==750)
    {
        poss=108;
        pos=400;
    }
    if(ch==6 && pos==600)
    {
        poss=108;
        pos=550;
    }
     if(ch==6 && pos==650)
    {
        poss=108;
        pos=500;
    }
    if(ch==6 && pos==700)
    {
        poss=108;
        pos=450;
    }
    if(ch==6 && pos==750)
    {
        poss=108;
        pos=400;
    }

if(ch==6 && pos==800)
    {
        poss=108;
        pos=350;
    }



  ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==108)
   {
       poss=63;
       pos=50;
   }
if(poss==63 && pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=63;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=63;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=63;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=63;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=63;
        pos=100;
    }
    if(ch==4 && pos==50)
    {
        poss=63;
        pos=100;
    }
    if(ch==4 && pos==0)
    {
        poss=63;
        pos=150;
    }
    if(ch==4 && pos==-50)
    {
        poss=63;
        pos=200;
    }
    if(ch==4 && pos==-100)
    {
        poss=63;
        pos=250;
    }
    if(ch==5 && pos==50)
    {
        poss=63;
        pos=100;
    }
    if(ch==5 && pos==0)
    {
        poss=63;
        pos=150;
    }
    if(ch==5 && pos==-50)
    {
        poss=63;
        pos=200;
    }
     if(ch==5 && pos==-100)
    {
        poss=63;
        pos=250;
    }
    if(ch==6 && pos==50)
    {
        poss=63;
        pos=100;
    }
     if(ch==6 && pos==0)
    {
        poss=63;
        pos=150;
    }
    if(ch==6 && pos==-50)
    {
        poss=63;
        pos=200;
    }
    if(ch==6 && pos==-100)
    {
        poss=63;
        pos=250;
    }

if(ch==6 && pos==-150)
    {
        poss=63;
        pos=300;
    }
//////////////////////////////////////////////////////////////////////here




               if(pos==550+(50*ch) && poss==63)
   {
       poss=18;
       pos=600;
   }




if(poss==18 && pos>300)///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }

if(poss==18 && pos<100)
{
    pos=100;

}

if(ch==2 && pos==600)
    {
        poss=18;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=18;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=18;
        pos=500;
    }

    if(ch==4 && pos==650)
    {
        poss=18;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=18;
        pos=450;
    }
    if(ch==4 && pos==750)
    {
        poss=18;
        pos=400;
    }
    if(ch==5 && pos==600)
    {
        poss=18;
        pos=550;
    }
    if(ch==5 && pos==650)
    {
        poss=18;
        pos=500;
    }
    if(ch==5 && pos==700)
    {
        poss=18;
        pos=450;
    }
    if(ch==5 && pos==750)
    {
        poss=18;
        pos=400;
    }
    if(ch==6 && pos==600)
    {
        poss=18;
        pos=550;
    }
     if(ch==6 && pos==650)
    {
        poss=18;
        pos=500;
    }
    if(ch==6 && pos==700)
    {
        poss=18;
        pos=450;
    }
    if(ch==6 && pos==750)
    {
        poss=18;
        pos=400;
    }

if(ch==6 && pos==800)
    {
        poss=18;
        pos=350;
    }





  if(poss==423 && pos==550)
     {
         poss=153;
         pos=550;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }




      if(poss==378 && pos==200)
     {
         poss=243;
         pos=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }


     if(poss==243 && pos==400)
     {
         poss=108;
         pos=400;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }
      if(poss==153 && pos==300)
     {
         poss=18;
         pos=200;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }

      if(poss==63 && pos==100)
     {
         poss=198;
         pos=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(poss==198 && pos==250)
     {
         poss=378;
         pos=300;
           settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(poss==63 && pos==400)
     {
         poss=423;
         pos=450;  settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }

settextstyle(0,0,7);
    setcolor(WHITE);
    circle(pos,poss,17);

break;


 case 6:cleardevice();




                       /////////////start////////




initgraph(&gd, &gm, NULL);
    line(0,0,0,700);
    for(i=0;i<11;i++)
    {
        j+=50;
        line(30+j,0,30+j,450);
    }
    j=0;
    line(0,0,700,0);
    for(g=0;g<11;g++)
    {
        k+=45;
        line(80,0+k,580,0+k);

    }
         k=0;





///////////////new for clr////////


setfillstyle(SOLID_FILL,YELLOW);

    line(80,0,130,0);
    line(80,0,80,45);
    line(80,45,130,45);
    line(130,0,130,45);
    floodfill(81,10,WHITE);
    for(y=0;y<4;y++)
    {
        a+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+a,0,130+a,0);
    line(80+a,0,80+a,45);
    line(80+a,45,130+a,45);
    line(130+a,0,130+a,45);
    floodfill(81+a,10,WHITE);
    }
    a=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(130,0,180,0);
    line(130,0,130,45);
    line(80,45,180,45);
    line(180,0,180,45);
    floodfill(131,10,WHITE);

    for(z=0;z<4;z++)
    {
        b+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+b,0,180+b,0);
    line(130+b,0,130+b,45);
    line(180+b,45,180+b,45);
    line(180+b,0,180+b,45);
    floodfill(131+b,10,WHITE);
    }
    b=0;

    setfillstyle(SOLID_FILL,BLUE);
    line(80,45,130,45);
    line(80,45,80,90);
    line(80,90,130,90);
    line(130,45,130,90);
    floodfill(81,55,WHITE);
    for(e=0;e<4;e++)
    {
        c+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+c,45,130+c,45);
    line(80+c,45,80+c,90);
    line(80+c,90,130+c,90);
    line(130+c,45,130+c,90);
    floodfill(81+c,55,WHITE);
    }
c=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,45,180,45);
    line(130,45,130,90);
    line(80,90,180,90);
    line(180,45,180,90);
    floodfill(131,50,WHITE);

    for(f=0;f<4;f++)
    {
        d+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+d,45,180+d,45);
    line(130+d,45,130+d,90);
    line(80+d,90,180+d,90);
    line(180+d,45,180+d,90);
    floodfill(131+d,55,WHITE);

    }
d=0;


        setfillstyle(SOLID_FILL,YELLOW);
    line(80,90,130,90);
    line(80,135,80,135);
    line(80,135,130,135);
    line(130,90,130,135);
    floodfill(81,100,WHITE);
    for(m=0;m<4;m++)
    {
        h+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+h,90,130+h,90);
    line(80+h,135,80+h,135);
    line(80+h,135,130+h,135);
    line(130+h,90,130+h,135);
    floodfill(81+h,100,WHITE);
    }

h=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(130,90,180,90);
    line(130,90,130,135);
    line(80,135,180,135);
    line(180,90,180,135);
    floodfill(131,100,WHITE);

    for(n=0;n<4;n++)
    {
        l+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+l,90,180+l,90);
    line(130+l,90,130+l,135);
    line(80+l,135,180+l,135);
    line(180+l,90,180+l,135);
    floodfill(131+l,100,WHITE);

    }
l=0;


        setfillstyle(SOLID_FILL,BLUE);
    line(80,135,130,135);
    line(80,180,80,180);
    line(80,180,130,180);
    line(130,135,130,180);
    floodfill(81,145,WHITE);
    for(o=0;o<4;o++)
    {
        p+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+p,135,130+p,135);
    line(80+p,180,80+p,180);
    line(80+p,180,130+p,180);
    line(130+p,135,130+p,180);
    floodfill(81+p,145,WHITE);
    }
p=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,135,180,135);
    line(130,135,130,180);
    line(80,180,180,180);
    line(180,135,180,180);
    floodfill(131,145,WHITE);

    for(q=0;q<4;q++)
    {
        r+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+r,135,180+r,135);
    line(130+r,135,130+r,180);
    line(80+r,180,180+r,180);
    line(180+r,135,180+r,180);
    floodfill(131+r,145,WHITE);

    }
r=0;

setfillstyle(SOLID_FILL,YELLOW);
    line(80,180,130,180);
    line(80,225,80,225);
    line(80,225,130,225);
    line(130,180,130,225);
    floodfill(81,190,WHITE);
    for(s=0;s<4;s++)
    {
        t+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+t,180,130+t,180);
    line(80+t,225,80+t,225);
    line(80+t,225,130+t,225);
    line(130+t,180,130+t,225);
    floodfill(81+t,190,WHITE);
    }
t=0;

 setfillstyle(SOLID_FILL,BLUE);
    line(130,180,180,180);
    line(130,180,130,225);
    line(80,225,180,225);
    line(180,180,180,225);
    floodfill(131,190,WHITE);

    for(u=0;u<4;u++)
    {
        v+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+v,180,180+v,180);
    line(130+v,180,130+v,225);
    line(80+v,225,180+v,225);
    line(180+v,180,180+v,225);
    floodfill(131+v,190,WHITE);
    }

    v=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(80,225,130,225);
    line(80,270,80,270);
    line(80,270,130,270);
    line(130,225,130,270);
    floodfill(81,235,WHITE);
    for(ab=0;ab<4;ab++)
    {
        bc+=100;
setfillstyle(SOLID_FILL,BLUE);
 line(80+bc,225,130+bc,225);
    line(80+bc,270,80+bc,270);
    line(80+bc,270,130+bc,270);
    line(130+bc,225,130+bc,270);
    floodfill(81+bc,235,WHITE);
    }
    bc=0;



setfillstyle(SOLID_FILL,YELLOW);
    line(130,225,180,225);
    line(130,225,130,270);
    line(80,270,180,270);
    line(180,225,180,270);
    floodfill(131,235,WHITE);

    for(cd=0;cd<4;cd++)
    {
        de+=100;
         setfillstyle(SOLID_FILL,YELLOW);
          line(130+de,225,180+de,225);
    line(130+de,225,130+de,270);
    line(80+de,270,180+de,270);
    line(180+de,225,180+de,270);
    floodfill(131+de,235,WHITE);
    }
de=0;

        setfillstyle(SOLID_FILL,YELLOW);
    line(80,270,130,270);
    line(80,315,80,315);
    line(80,315,130,315);
    line(130,270,130,315);
    floodfill(81,280,WHITE);
    for(ef=0;ef<4;ef++)
    {
        fg+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+fg,270,130+fg,270);
    line(80+fg,315,80+fg,315);
    line(80+fg,315,130+fg,315);
    line(130+fg,270,130+fg,315);
    floodfill(81+fg,280,WHITE);
    }
fg=0;

setfillstyle(SOLID_FILL,BLUE);
    line(130,270,180,270);
    line(130,270,130,315);
    line(80,315,180,315);
    line(180,270,180,315);
    floodfill(131,280,WHITE);

    for(gh=0;gh<4;gh++)
    {
        hi+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+hi,270,180+hi,270);
    line(130+hi,270,130+hi,315);
    line(80+hi,315,180+hi,315);
    line(180+hi,270,180+hi,315);
    floodfill(131+hi,280,WHITE);
    }
    hi=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(80,315,130,315);
    line(80,360,80,360);
    line(80,360,130,360);
    line(130,315,130,360);
    floodfill(81,325,WHITE);
    for(ij=0;ij<4;ij++)
    {
        jk+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+jk,315,130+jk,315);
    line(80+jk,360,80+jk,360);
    line(80+jk,360,130+jk,360);
    line(130+jk,315,130+jk,360);
    floodfill(81+jk,325,WHITE);
    }
    jk=0;


    setfillstyle(SOLID_FILL,YELLOW);
    line(130,315,180,315);
    line(130,315,130,360);
    line(80,360,180,360);
    line(180,315,180,360);
    floodfill(131,325,WHITE);

    for(kl=0;kl<4;kl++)
    {
        lm+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+lm,315,180+lm,315);
    line(130+lm,315,130+lm,360);
    line(80+lm,360,180+lm,360);
    line(180+lm,315,180+lm,360);
    floodfill(131+lm,325,WHITE);
    }
lm=0;


     setfillstyle(SOLID_FILL,YELLOW);
    line(80,360,130,360);
    line(80,405,80,405);
    line(80,405,130,405);
    line(130,360,130,405);
    floodfill(81,370,WHITE);
    for(mn=0;mn<4;mn++)
    {
        no+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+no,360,130+no,360);
    line(80+no,405,80+no,405);
    line(80+no,405,130+no,405);
    line(130+no,360,130+no,405);
    floodfill(81+no,370,WHITE);
    }
no=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(130,360,180,360);
    line(130,360,130,405);
    line(80,405,180,405);
    line(180,360,180,405);
    floodfill(131,370,WHITE);

    for(op=0;op<4;op++)
    {
        pq+=100;
         setfillstyle(SOLID_FILL,BLUE);
         line(130+pq,360,180+pq,360);
    line(130+pq,360,130+pq,405);
    line(80+pq,405,180+pq,405);
    line(180+pq,360,180+pq,405);
    floodfill(131+pq,370,WHITE);
    }
pq=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(80,405,130,405);
    line(80,450,80,450);
    line(80,450,130,450);
    line(130,405,130,450);
    floodfill(81,415,WHITE);
    for(qr=0;qr<4;qr++)
    {
    rs+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+rs,405,130+rs,405);
    line(80+rs,450,80+rs,450);
    line(80+rs,450,130+rs,450);
    line(130+rs,405,130+rs,450);
    floodfill(81+rs,415,WHITE);
    }
    rs=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,405,180,405);
    line(130,405,130,450);
    line(130,450,180,450);
    line(180,405,180,450);
    floodfill(131,415,WHITE);

    for(st=0;st<4;st++)
    {
        tu+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+tu,405,180+tu,405);
    line(130+tu,405,130+tu,450);
    line(130+tu,450,180+tu,450);
    line(180+tu,405,180+tu,450);
    floodfill(131+tu,415,WHITE);
    }
    tu=0;










    ////////////////numbers/////////////




outtextxy(103,420,"1");  ///1st line
outtextxy(153,420,"2");
outtextxy(203,420,"3");
outtextxy(253,420,"4");
outtextxy(303,420,"5");
outtextxy(353,420,"6");
outtextxy(403,420,"7");
outtextxy(453,420,"8");
outtextxy(503,420,"9");
outtextxy(553,420,"10");


outtextxy(103,375,"20");  ///2nd line
outtextxy(153,375,"19");
outtextxy(203,375,"18");
outtextxy(253,375,"17");
outtextxy(303,375,"16");
outtextxy(353,375,"15");
outtextxy(403,375,"14");
outtextxy(453,375,"13");
outtextxy(503,375,"12");
outtextxy(553,375,"11");


outtextxy(103,335,"21");  ///3rd line
outtextxy(153,335,"22");
outtextxy(203,335,"23");
outtextxy(253,335,"24");
outtextxy(303,335,"25");
outtextxy(353,335,"26");
outtextxy(403,335,"27");
outtextxy(453,335,"28");
outtextxy(503,335,"29");
outtextxy(553,335,"30");



outtextxy(103,290,"40");  ///4th line
outtextxy(153,290,"39");
outtextxy(203,290,"38");
outtextxy(253,290,"37");
outtextxy(303,290,"36");
outtextxy(353,290,"35");
outtextxy(403,290,"34");
outtextxy(453,290,"33");
outtextxy(503,290,"32");
outtextxy(553,290,"31");


outtextxy(103,245,"41");  ///5th line
outtextxy(153,245,"42");
outtextxy(203,245,"43");
outtextxy(253,245,"44");
outtextxy(303,245,"45");
outtextxy(353,245,"46");
outtextxy(403,245,"47");
outtextxy(453,245,"48");
outtextxy(503,245,"49");
outtextxy(553,245,"50");


outtextxy(103,200,"60");  ///6th line
outtextxy(153,200,"59");
outtextxy(203,200,"58");
outtextxy(253,200,"57");
outtextxy(303,200,"56");
outtextxy(353,200,"55");
outtextxy(403,200,"54");
outtextxy(453,200,"53");
outtextxy(503,200,"52");
outtextxy(553,200,"51");


outtextxy(103,155,"61");  ///7th line
outtextxy(153,155,"62");
outtextxy(203,155,"63");
outtextxy(253,155,"64");
outtextxy(303,155,"65");
outtextxy(353,155,"66");
outtextxy(403,155,"67");
outtextxy(453,155,"68");
outtextxy(503,155,"69");
outtextxy(553,155,"70");


outtextxy(103,110,"80");  ///8th line
outtextxy(153,110,"79");
outtextxy(203,110,"78");
outtextxy(253,110,"77");
outtextxy(303,110,"76");
outtextxy(353,110,"75");
outtextxy(403,110,"74");
outtextxy(453,110,"73");
outtextxy(503,110,"72");
outtextxy(553,110,"71");


outtextxy(103,65,"81");  ///9th line
outtextxy(153,65,"82");
outtextxy(203,65,"83");
outtextxy(253,65,"84");
outtextxy(303,65,"85");
outtextxy(353,65,"86");
outtextxy(403,65,"87");
outtextxy(453,65,"88");
outtextxy(503,65,"89");
outtextxy(553,65,"90");


outtextxy(103,20,"100");  ///10th line
outtextxy(153,20,"99");
outtextxy(203,20,"98");
outtextxy(253,20,"97");
outtextxy(303,20,"96");
outtextxy(353,20,"95");
outtextxy(403,20,"94");
outtextxy(453,20,"93");
outtextxy(503,20,"92");
outtextxy(553,20,"91");










////////////////snakes//////
setcolor(RED);
setlinestyle(0,0,5);
arc(100,100,320,70,50);
circle(115,53,5);
arc(154,179,110,220,50);




setcolor(RED);
setlinestyle(0,0,5);
arc(250,250,320,70,50);
circle(265,203,5);
arc(304,329,110,280,50);



setcolor(RED);
setlinestyle(0,0,5);

 arc(400,180,320,80,100);
 circle(415,80,5);
    arc(509,338,110,233,100);





    ////////ladders///////





setcolor(GREEN);
setlinestyle(0,0,5);


line(185,40,285,175);
line(215,25,315,160);
line(210,67,230,52);
line(240,110,260,92);
line(270,153,295,132);

setcolor(GREEN);
setlinestyle(0,0,5);

line(85,265,185,400);
line(115,260,215,385);
line(110,302,130,277);
line(140,345,160,317);
line(170,387,195,357);

setcolor(GREEN);
setlinestyle(0,0,5);


line(533,170,537,440);
line(572,170,577,440);
line(535,230,575,232);
line(535,320,575,322);
line(535,410,575,412);



line(383,110,387,250);
line(418,110,422,250);
line(383,140,418,144);
line(383,210,418,214);






setfillstyle(SOLID_FILL,RED);
floodfill(1 , 1,WHITE);




                    ///////////////end///////////////







              setfillstyle(SOLID_FILL,BLUE);
setcolor(BLUE);
line(15,120,65,120);
line(15,120,15,165);
line(65,120,65,165);
line(15,165,65,165);
              setcolor(WHITE);
circle(25,127,3);
circle(25,143,3);
circle(55,143,3);
circle(55,158,3);
circle(55,127,3);
circle(25,158,3);




   ////////////////////////////////////////////////////////////////////player//////////////////////////////////////////




if(pos==550 && poss==423)
   {
       poss=378;
       pos=600;
   }

///////////here
if(poss==378) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }


    if(poss==423 && pos!=600)
    {


      pos=pos+50*ch;
    }
 if(ch==2 && pos==600)
    {
        poss=378;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=378;
        pos=500;
    }
if(ch==3 && pos==600)
    {
        poss=378;
        pos=550;
    }

    if(ch==4 && pos==600)
    {
        poss=378;
        pos=550;
    }
    if(ch==4 && pos==650)
    {
        poss=378;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=378;
        pos=450;
    }
    if(ch==5 && pos==600)
    {
        poss=378;
        pos=550;
    }
    if(ch==5 && pos==650)
    {
        poss=378;
        pos=500;
    }
    if(ch==5 && pos==700)
    {
        poss=378;
        pos=450;
    }
    if(ch==5 && pos==750)
    {
        poss=378;
        pos=400;
    }
    if(ch==6 && pos==600)
    {
        poss=378;
        pos=550;
    }
     if(ch==6 && pos==650)
    {
        poss=378;
        pos=500;
    }
    if(ch==6 && pos==700)
    {
        poss=378;
        pos=450;
    }
    if(ch==6 && pos==750)
    {
        poss=378;
        pos=400;
    }

if(ch==6 && pos==800)
    {
        poss=378;
        pos=350;
    }


                       ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==378)
   {
       poss=333;
       pos=50;
   }
if(poss==333) //&& pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=333;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=333;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=333;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=330;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=333;
        pos=100;
    }
    if(ch==4 && pos==50)
    {
        poss=333;
        pos=100;
    }
    if(ch==4 && pos==0)
    {
        poss=333;
        pos=150;
    }
    if(ch==4 && pos==-50)
    {
        poss=333;
        pos=200;
    }
    if(ch==4 && pos==-100)
    {
        poss=333;
        pos=250;
    }
    if(ch==5 && pos==50)
    {
        poss=333;
        pos=100;
    }
    if(ch==5 && pos==0)
    {
        poss=333;
        pos=150;
    }
    if(ch==5 && pos==-50)
    {
        poss=333;
        pos=200;
    }
     if(ch==5 && pos==-100)
    {
        poss=333;
        pos=250;
    }
    if(ch==6 && pos==50)
    {
        poss=333;
        pos=100;
    }
     if(ch==6 && pos==0)
    {
        poss=333;
        pos=150;
    }
    if(ch==6 && pos==-50)
    {
        poss=333;
        pos=200;
    }
    if(ch==6 && pos==-100)
    {
        poss=333;
        pos=250;
    }

if(ch==6 && pos==-150)
    {
        poss=333;
        pos=300;
    }


                /////////////////////////////////////////////////from here

if(pos==550+(50*ch) && poss==333)
   {
       poss=288;
       pos=600;
   }

///////////here
if(poss==288) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }



 if(ch==2 && pos==600)
    {
        poss=288;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=288;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=288;
        pos=500;
    }

    if(ch==4 && pos==650)
    {
        poss=288;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=288;
        pos=450;
    }
    if(ch==4 && pos==750)
    {
        poss=288;
        pos=400;
    }
    if(ch==5 && pos==600)
    {
        poss=288;
        pos=550;
    }
    if(ch==5 && pos==650)
    {
        poss=288;
        pos=500;
    }
    if(ch==5 && pos==700)
    {
        poss=288;
        pos=450;
    }
    if(ch==5 && pos==750)
    {
        poss=288;
        pos=400;
    }
    if(ch==6 && pos==600)
    {
        poss=288;
        pos=550;
    }
     if(ch==6 && pos==650)
    {
        poss=288;
        pos=500;
    }
    if(ch==6 && pos==700)
    {
        poss=288;
        pos=450;
    }
    if(ch==6 && pos==750)
    {
        poss=288;
        pos=400;
    }

if(ch==6 && pos==800)
    {
        poss=288;
        pos=350;
    }



  ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==288)
   {
       poss=243;
       pos=50;
   }
if(poss==243 && pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=243;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=243;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=243;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=243;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=243;
        pos=100;
    }
    if(ch==4 && pos==50)
    {
        poss=243;
        pos=100;
    }
    if(ch==4 && pos==0)
    {
        poss=243;
        pos=150;
    }
    if(ch==4 && pos==-50)
    {
        poss=243;
        pos=200;
    }
    if(ch==4 && pos==-100)
    {
        poss=243;
        pos=250;
    }
    if(ch==5 && pos==50)
    {
        poss=243;
        pos=100;
    }
    if(ch==5 && pos==0)
    {
        poss=243;
        pos=150;
    }
    if(ch==5 && pos==-50)
    {
        poss=243;
        pos=200;
    }
     if(ch==5 && pos==-100)
    {
        poss=243;
        pos=250;
    }
    if(ch==6 && pos==50)
    {
        poss=243;
        pos=100;
    }
     if(ch==6 && pos==0)
    {
        poss=243;
        pos=150;
    }
    if(ch==6 && pos==-50)
    {
        poss=243;
        pos=200;
    }
    if(ch==6 && pos==-100)
    {
        poss=243;
        pos=250;
    }

if(ch==6 && pos==-150)
    {
        poss=243;
        pos=300;
    }









                /////////////////////////////////////////////////from here

if(pos==550+(50*ch) && poss==243)
   {
       poss=198;
       pos=600;
   }

///////////here
if(poss==198) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }



 if(ch==2 && pos==600)
    {
        poss=198;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=198;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=198;
        pos=500;
    }

    if(ch==4 && pos==650)
    {
        poss=198;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=198;
        pos=450;
    }
    if(ch==4 && pos==750)
    {
        poss=198;
        pos=400;
    }
    if(ch==5 && pos==600)
    {
        poss=198;
        pos=550;
    }
    if(ch==5 && pos==650)
    {
        poss=198;
        pos=500;
    }
    if(ch==5 && pos==700)
    {
        poss=198;
        pos=450;
    }
    if(ch==5 && pos==750)
    {
        poss=198;
        pos=400;
    }
    if(ch==6 && pos==600)
    {
        poss=198;
        pos=550;
    }
     if(ch==6 && pos==650)
    {
        poss=198;
        pos=500;
    }
    if(ch==6 && pos==700)
    {
        poss=198;
        pos=450;
    }
    if(ch==6 && pos==750)
    {
        poss=198;
        pos=400;
    }

if(ch==6 && pos==800)
    {
        poss=198;
        pos=350;
    }



  ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==198)
   {
       poss=153;
       pos=50;
   }
if(poss==153 && pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=153;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=153;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=153;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=153;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=153;
        pos=100;
    }
    if(ch==4 && pos==50)
    {
        poss=153;
        pos=100;
    }
    if(ch==4 && pos==0)
    {
        poss=153;
        pos=150;
    }
    if(ch==4 && pos==-50)
    {
        poss=153;
        pos=200;
    }
    if(ch==4 && pos==-100)
    {
        poss=153;
        pos=250;
    }
    if(ch==5 && pos==50)
    {
        poss=153;
        pos=100;
    }
    if(ch==5 && pos==0)
    {
        poss=153;
        pos=150;
    }
    if(ch==5 && pos==-50)
    {
        poss=153;
        pos=200;
    }
     if(ch==5 && pos==-100)
    {
        poss=153;
        pos=250;
    }
    if(ch==6 && pos==50)
    {
        poss=153;
        pos=100;
    }
     if(ch==6 && pos==0)
    {
        poss=153;
        pos=150;
    }
    if(ch==6 && pos==-50)
    {
        poss=153;
        pos=200;
    }
    if(ch==6 && pos==-100)
    {
        poss=153;
        pos=250;
    }

if(ch==6 && pos==-150)
    {
        poss=153;
        pos=300;
    }



                /////////////////////////////////////////////////from here

if(pos==550+(50*ch) && poss==153)
   {
       poss=108;
       pos=600;
   }

///////////here
if(poss==108) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }



 if(ch==2 && pos==600)
    {
        poss=108;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=108;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=108;
        pos=500;
    }

    if(ch==4 && pos==650)
    {
        poss=108;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=108;
        pos=450;
    }
    if(ch==4 && pos==750)
    {
        poss=108;
        pos=400;
    }
    if(ch==5 && pos==600)
    {
        poss=108;
        pos=550;
    }
    if(ch==5 && pos==650)
    {
        poss=108;
        pos=500;
    }
    if(ch==5 && pos==700)
    {
        poss=108;
        pos=450;
    }
    if(ch==5 && pos==750)
    {
        poss=108;
        pos=400;
    }
    if(ch==6 && pos==600)
    {
        poss=108;
        pos=550;
    }
     if(ch==6 && pos==650)
    {
        poss=108;
        pos=500;
    }
    if(ch==6 && pos==700)
    {
        poss=108;
        pos=450;
    }
    if(ch==6 && pos==750)
    {
        poss=108;
        pos=400;
    }

if(ch==6 && pos==800)
    {
        poss=108;
        pos=350;
    }



  ///////////////////////////////////2nd line

   if( pos==(100-50*ch) && poss==108)
   {
       poss=63;
       pos=50;
   }
if(poss==63 && pos!=650)
    {


      pos=pos+50*ch;
    }






    ////here
    if(ch==2 && pos==0)
   {
       poss=63;
       pos=150;
   }
 if(ch==2 && pos==50)
    {
        poss=63;
        pos=100;
    }
if(ch==3 && pos==-50)
    {
        poss=63;
        pos=200;
    }
if(ch==3 && pos==0)
    {
        poss=63;
        pos=150;
    }
if(ch==3 && pos==50)
    {
        poss=63;
        pos=100;
    }
    if(ch==4 && pos==50)
    {
        poss=63;
        pos=100;
    }
    if(ch==4 && pos==0)
    {
        poss=63;
        pos=150;
    }
    if(ch==4 && pos==-50)
    {
        poss=63;
        pos=200;
    }
    if(ch==4 && pos==-100)
    {
        poss=63;
        pos=250;
    }
    if(ch==5 && pos==50)
    {
        poss=63;
        pos=100;
    }
    if(ch==5 && pos==0)
    {
        poss=63;
        pos=150;
    }
    if(ch==5 && pos==-50)
    {
        poss=63;
        pos=200;
    }
     if(ch==5 && pos==-100)
    {
        poss=63;
        pos=250;
    }
    if(ch==6 && pos==50)
    {
        poss=63;
        pos=100;
    }
     if(ch==6 && pos==0)
    {
        poss=63;
        pos=150;
    }
    if(ch==6 && pos==-50)
    {
        poss=63;
        pos=200;
    }
    if(ch==6 && pos==-100)
    {
        poss=63;
        pos=250;
    }

if(ch==6 && pos==-150)
    {
        poss=63;
        pos=300;
    }
//////////////////////////////////////////////////////////////////////here




               if(pos==550+(50*ch) && poss==63)
   {
       poss=18;
       pos=600;
   }




if(poss==18 && pos>350) ///&& pos>100) ////&& pos!=50)
   {
       pos=pos-50*ch;
   }

if(poss==18 && pos<100)
{
    pos=100;


}

if(ch==2 && pos==600)
    {
        poss=18;
        pos=550;
    }
if(ch==3 && pos==600)
    {
        poss=18;
        pos=550;
    }
if(ch==3 && pos==650)
    {
        poss=18;
        pos=500;
    }

    if(ch==4 && pos==650)
    {
        poss=18;
        pos=500;
    }
    if(ch==4 && pos==700)
    {
        poss=18;
        pos=450;
    }
    if(ch==4 && pos==750)
    {
        poss=18;
        pos=400;
    }
    if(ch==5 && pos==600)
    {
        poss=18;
        pos=550;
    }
    if(ch==5 && pos==650)
    {
        poss=18;
        pos=500;
    }
    if(ch==5 && pos==700)
    {
        poss=18;
        pos=450;
    }
    if(ch==5 && pos==750)
    {
        poss=18;
        pos=400;
    }
    if(ch==6 && pos==600)
    {
        poss=18;
        pos=550;
    }
     if(ch==6 && pos==650)
    {
        poss=18;
        pos=500;
    }
    if(ch==6 && pos==700)
    {
        poss=18;
        pos=450;
    }
    if(ch==6 && pos==750)
    {
        poss=18;
        pos=400;
    }

if(ch==6 && pos==800)
    {
        poss=18;
        pos=350;
    }



  if(poss==423 && pos==550)
     {
         poss=153;
         pos=550;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }




      if(poss==378 && pos==200)
     {
         poss=243;
         pos=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }


     if(poss==243 && pos==400)
     {
         poss=108;
         pos=400;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }
      if(poss==153 && pos==300)
     {
         poss=18;
         pos=200;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }

      if(poss==63 && pos==100)
     {
         poss=198;
         pos=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(poss==198 && pos==250)
     {
         poss=378;
         pos=300;
           settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(poss==63 && pos==400)
     {
         poss=423;
         pos=450;  settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
settextstyle(0,0,7);
    setcolor(WHITE);
    circle(pos,poss,17);

break;



getch();

    }

    if(poss==18 && pos==100)
{

        settextstyle(3,0,0);
    setcolor(BLUE);
    outtextxy(100,200,"PLAYER 1ST WINS");

}

 }

 settextstyle(0,0,7);
    setcolor(GREEN);
    circle(y2,y1,17);
















                    //////////////////////////////////////////////player 2///////////////////////////////////////////////////////////////////////////////////     printf("player 2nd turn");
      scanf("%c",&yx);
    if(yx==10)
    {

srand(time(NULL));



    chh=(rand()%6)+1;

printf("PLAYER 2'S TURN\n");
    printf("no. on dice = %d\n",chh);

    switch(chh)
    {


        case 1:cleardevice();

                                             /////////////start////////



initgraph(&gd, &gm, NULL);




    line(0,0,0,700);
    for(i=0;i<11;i++)
    {
        j+=50;
        line(30+j,0,30+j,450);
    }
    j=0;
    line(0,0,700,0);
    for(g=0;g<11;g++)
    {
        k+=45;
        line(80,0+k,580,0+k);

    }
         k=0;





///////////////new for clr////////


setfillstyle(SOLID_FILL,YELLOW);

    line(80,0,130,0);
    line(80,0,80,45);
    line(80,45,130,45);
    line(130,0,130,45);
    floodfill(81,10,WHITE);
    for(y=0;y<4;y++)
    {
        a+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+a,0,130+a,0);
    line(80+a,0,80+a,45);
    line(80+a,45,130+a,45);
    line(130+a,0,130+a,45);
    floodfill(81+a,10,WHITE);
    }
    a=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(130,0,180,0);
    line(130,0,130,45);
    line(80,45,180,45);
    line(180,0,180,45);
    floodfill(131,10,WHITE);

    for(z=0;z<4;z++)
    {
        b+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+b,0,180+b,0);
    line(130+b,0,130+b,45);
    line(180+b,45,180+b,45);
    line(180+b,0,180+b,45);
    floodfill(131+b,10,WHITE);
    }
    b=0;

    setfillstyle(SOLID_FILL,BLUE);
    line(80,45,130,45);
    line(80,45,80,90);
    line(80,90,130,90);
    line(130,45,130,90);
    floodfill(81,55,WHITE);
    for(e=0;e<4;e++)
    {
        c+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+c,45,130+c,45);
    line(80+c,45,80+c,90);
    line(80+c,90,130+c,90);
    line(130+c,45,130+c,90);
    floodfill(81+c,55,WHITE);
    }
c=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,45,180,45);
    line(130,45,130,90);
    line(80,90,180,90);
    line(180,45,180,90);
    floodfill(131,50,WHITE);

    for(f=0;f<4;f++)
    {
        d+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+d,45,180+d,45);
    line(130+d,45,130+d,90);
    line(80+d,90,180+d,90);
    line(180+d,45,180+d,90);
    floodfill(131+d,55,WHITE);

    }
d=0;


        setfillstyle(SOLID_FILL,YELLOW);
    line(80,90,130,90);
    line(80,135,80,135);
    line(80,135,130,135);
    line(130,90,130,135);
    floodfill(81,100,WHITE);
    for(m=0;m<4;m++)
    {
        h+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+h,90,130+h,90);
    line(80+h,135,80+h,135);
    line(80+h,135,130+h,135);
    line(130+h,90,130+h,135);
    floodfill(81+h,100,WHITE);
    }

h=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(130,90,180,90);
    line(130,90,130,135);
    line(80,135,180,135);
    line(180,90,180,135);
    floodfill(131,100,WHITE);

    for(n=0;n<4;n++)
    {
        l+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+l,90,180+l,90);
    line(130+l,90,130+l,135);
    line(80+l,135,180+l,135);
    line(180+l,90,180+l,135);
    floodfill(131+l,100,WHITE);

    }
l=0;


        setfillstyle(SOLID_FILL,BLUE);
    line(80,135,130,135);
    line(80,180,80,180);
    line(80,180,130,180);
    line(130,135,130,180);
    floodfill(81,145,WHITE);
    for(o=0;o<4;o++)
    {
        p+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+p,135,130+p,135);
    line(80+p,180,80+p,180);
    line(80+p,180,130+p,180);
    line(130+p,135,130+p,180);
    floodfill(81+p,145,WHITE);
    }
p=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,135,180,135);
    line(130,135,130,180);
    line(80,180,180,180);
    line(180,135,180,180);
    floodfill(131,145,WHITE);

    for(q=0;q<4;q++)
    {
        r+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+r,135,180+r,135);
    line(130+r,135,130+r,180);
    line(80+r,180,180+r,180);
    line(180+r,135,180+r,180);
    floodfill(131+r,145,WHITE);

    }
r=0;

setfillstyle(SOLID_FILL,YELLOW);
    line(80,180,130,180);
    line(80,225,80,225);
    line(80,225,130,225);
    line(130,180,130,225);
    floodfill(81,190,WHITE);
    for(s=0;s<4;s++)
    {
        t+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+t,180,130+t,180);
    line(80+t,225,80+t,225);
    line(80+t,225,130+t,225);
    line(130+t,180,130+t,225);
    floodfill(81+t,190,WHITE);
    }
t=0;

 setfillstyle(SOLID_FILL,BLUE);
    line(130,180,180,180);
    line(130,180,130,225);
    line(80,225,180,225);
    line(180,180,180,225);
    floodfill(131,190,WHITE);

    for(u=0;u<4;u++)
    {
        v+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+v,180,180+v,180);
    line(130+v,180,130+v,225);
    line(80+v,225,180+v,225);
    line(180+v,180,180+v,225);
    floodfill(131+v,190,WHITE);
    }

    v=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(80,225,130,225);
    line(80,270,80,270);
    line(80,270,130,270);
    line(130,225,130,270);
    floodfill(81,235,WHITE);
    for(ab=0;ab<4;ab++)
    {
        bc+=100;
setfillstyle(SOLID_FILL,BLUE);
 line(80+bc,225,130+bc,225);
    line(80+bc,270,80+bc,270);
    line(80+bc,270,130+bc,270);
    line(130+bc,225,130+bc,270);
    floodfill(81+bc,235,WHITE);
    }
    bc=0;



setfillstyle(SOLID_FILL,YELLOW);
    line(130,225,180,225);
    line(130,225,130,270);
    line(80,270,180,270);
    line(180,225,180,270);
    floodfill(131,235,WHITE);

    for(cd=0;cd<4;cd++)
    {
        de+=100;
         setfillstyle(SOLID_FILL,YELLOW);
          line(130+de,225,180+de,225);
    line(130+de,225,130+de,270);
    line(80+de,270,180+de,270);
    line(180+de,225,180+de,270);
    floodfill(131+de,235,WHITE);
    }
de=0;

        setfillstyle(SOLID_FILL,YELLOW);
    line(80,270,130,270);
    line(80,315,80,315);
    line(80,315,130,315);
    line(130,270,130,315);
    floodfill(81,280,WHITE);
    for(ef=0;ef<4;ef++)
    {
        fg+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+fg,270,130+fg,270);
    line(80+fg,315,80+fg,315);
    line(80+fg,315,130+fg,315);
    line(130+fg,270,130+fg,315);
    floodfill(81+fg,280,WHITE);
    }
fg=0;

setfillstyle(SOLID_FILL,BLUE);
    line(130,270,180,270);
    line(130,270,130,315);
    line(80,315,180,315);
    line(180,270,180,315);
    floodfill(131,280,WHITE);

    for(gh=0;gh<4;gh++)
    {
        hi+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+hi,270,180+hi,270);
    line(130+hi,270,130+hi,315);
    line(80+hi,315,180+hi,315);
    line(180+hi,270,180+hi,315);
    floodfill(131+hi,280,WHITE);
    }
    hi=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(80,315,130,315);
    line(80,360,80,360);
    line(80,360,130,360);
    line(130,315,130,360);
    floodfill(81,325,WHITE);
    for(ij=0;ij<4;ij++)
    {
        jk+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+jk,315,130+jk,315);
    line(80+jk,360,80+jk,360);
    line(80+jk,360,130+jk,360);
    line(130+jk,315,130+jk,360);
    floodfill(81+jk,325,WHITE);
    }
    jk=0;


    setfillstyle(SOLID_FILL,YELLOW);
    line(130,315,180,315);
    line(130,315,130,360);
    line(80,360,180,360);
    line(180,315,180,360);
    floodfill(131,325,WHITE);

    for(kl=0;kl<4;kl++)
    {
        lm+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+lm,315,180+lm,315);
    line(130+lm,315,130+lm,360);
    line(80+lm,360,180+lm,360);
    line(180+lm,315,180+lm,360);
    floodfill(131+lm,325,WHITE);
    }
lm=0;


     setfillstyle(SOLID_FILL,YELLOW);
    line(80,360,130,360);
    line(80,405,80,405);
    line(80,405,130,405);
    line(130,360,130,405);
    floodfill(81,370,WHITE);
    for(mn=0;mn<4;mn++)
    {
        no+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+no,360,130+no,360);
    line(80+no,405,80+no,405);
    line(80+no,405,130+no,405);
    line(130+no,360,130+no,405);
    floodfill(81+no,370,WHITE);
    }
no=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(130,360,180,360);
    line(130,360,130,405);
    line(80,405,180,405);
    line(180,360,180,405);
    floodfill(131,370,WHITE);

    for(op=0;op<4;op++)
    {
        pq+=100;
         setfillstyle(SOLID_FILL,BLUE);
         line(130+pq,360,180+pq,360);
    line(130+pq,360,130+pq,405);
    line(80+pq,405,180+pq,405);
    line(180+pq,360,180+pq,405);
    floodfill(131+pq,370,WHITE);
    }
pq=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(80,405,130,405);
    line(80,450,80,450);
    line(80,450,130,450);
    line(130,405,130,450);
    floodfill(81,415,WHITE);
    for(qr=0;qr<4;qr++)
    {
    rs+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+rs,405,130+rs,405);
    line(80+rs,450,80+rs,450);
    line(80+rs,450,130+rs,450);
    line(130+rs,405,130+rs,450);
    floodfill(81+rs,415,WHITE);
    }
    rs=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,405,180,405);
    line(130,405,130,450);
    line(130,450,180,450);
    line(180,405,180,450);
    floodfill(131,415,WHITE);

    for(st=0;st<4;st++)
    {
        tu+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+tu,405,180+tu,405);
    line(130+tu,405,130+tu,450);
    line(130+tu,450,180+tu,450);
    line(180+tu,405,180+tu,450);
    floodfill(131+tu,415,WHITE);
    }
    tu=0;










    ////////////////numbers/////////////




outtextxy(103,420,"1");  ///1st line
outtextxy(153,420,"2");
outtextxy(203,420,"3");
outtextxy(253,420,"4");
outtextxy(303,420,"5");
outtextxy(353,420,"6");
outtextxy(403,420,"7");
outtextxy(453,420,"8");
outtextxy(503,420,"9");
outtextxy(553,420,"10");


outtextxy(103,375,"20");  ///2nd line
outtextxy(153,375,"19");
outtextxy(203,375,"18");
outtextxy(253,375,"17");
outtextxy(303,375,"16");
outtextxy(353,375,"15");
outtextxy(403,375,"14");
outtextxy(453,375,"13");
outtextxy(503,375,"12");
outtextxy(553,375,"11");


outtextxy(103,335,"21");  ///3rd line
outtextxy(153,335,"22");
outtextxy(203,335,"23");
outtextxy(253,335,"24");
outtextxy(303,335,"25");
outtextxy(353,335,"26");
outtextxy(403,335,"27");
outtextxy(453,335,"28");
outtextxy(503,335,"29");
outtextxy(553,335,"30");



outtextxy(103,290,"40");  ///4th line
outtextxy(153,290,"39");
outtextxy(203,290,"38");
outtextxy(253,290,"37");
outtextxy(303,290,"36");
outtextxy(353,290,"35");
outtextxy(403,290,"34");
outtextxy(453,290,"33");
outtextxy(503,290,"32");
outtextxy(553,290,"31");


outtextxy(103,245,"41");  ///5th line
outtextxy(153,245,"42");
outtextxy(203,245,"43");
outtextxy(253,245,"44");
outtextxy(303,245,"45");
outtextxy(353,245,"46");
outtextxy(403,245,"47");
outtextxy(453,245,"48");
outtextxy(503,245,"49");
outtextxy(553,245,"50");


outtextxy(103,200,"60");  ///6th line
outtextxy(153,200,"59");
outtextxy(203,200,"58");
outtextxy(253,200,"57");
outtextxy(303,200,"56");
outtextxy(353,200,"55");
outtextxy(403,200,"54");
outtextxy(453,200,"53");
outtextxy(503,200,"52");
outtextxy(553,200,"51");


outtextxy(103,155,"61");  ///7th line
outtextxy(153,155,"62");
outtextxy(203,155,"63");
outtextxy(253,155,"64");
outtextxy(303,155,"65");
outtextxy(353,155,"66");
outtextxy(403,155,"67");
outtextxy(453,155,"68");
outtextxy(503,155,"69");
outtextxy(553,155,"70");


outtextxy(103,110,"80");  ///8th line
outtextxy(153,110,"79");
outtextxy(203,110,"78");
outtextxy(253,110,"77");
outtextxy(303,110,"76");
outtextxy(353,110,"75");
outtextxy(403,110,"74");
outtextxy(453,110,"73");
outtextxy(503,110,"72");
outtextxy(553,110,"71");


outtextxy(103,65,"81");  ///9th line
outtextxy(153,65,"82");
outtextxy(203,65,"83");
outtextxy(253,65,"84");
outtextxy(303,65,"85");
outtextxy(353,65,"86");
outtextxy(403,65,"87");
outtextxy(453,65,"88");
outtextxy(503,65,"89");
outtextxy(553,65,"90");


outtextxy(103,20,"100");  ///10th line
outtextxy(153,20,"99");
outtextxy(203,20,"98");
outtextxy(253,20,"97");
outtextxy(303,20,"96");
outtextxy(353,20,"95");
outtextxy(403,20,"94");
outtextxy(453,20,"93");
outtextxy(503,20,"92");
outtextxy(553,20,"91");
////////////////snakes//////
setcolor(RED);
setlinestyle(0,0,5);
arc(100,100,320,70,50);
circle(115,53,5);
arc(154,179,110,220,50);

setcolor(RED);
setlinestyle(0,0,5);
arc(250,250,320,70,50);
circle(265,203,5);
arc(304,329,110,280,50);


setcolor(RED);
setlinestyle(0,0,5);

 arc(400,180,320,80,100);
 circle(415,80,5);
    arc(509,338,110,233,100);





    ////////ladders///////

setcolor(GREEN);
setlinestyle(0,0,5);


line(185,40,285,175);
line(215,25,315,160);
line(210,67,230,52);
line(240,110,260,92);
line(270,153,295,132);

setcolor(GREEN);
setlinestyle(0,0,5);

line(85,265,185,400);
line(115,260,215,385);
line(110,302,130,277);
line(140,345,160,317);
line(170,387,195,357);

setcolor(GREEN);
setlinestyle(0,0,5);


line(533,170,537,440);
line(572,170,577,440);
line(535,230,575,232);
line(535,320,575,322);
line(535,410,575,412);



line(383,110,387,250);
line(418,110,422,250);
line(383,140,418,144);
line(383,210,418,214);






setfillstyle(SOLID_FILL,RED);
floodfill(1 , 1,WHITE);




                    ///////////////end///////////////









setlinestyle(0,0,5);

            setfillstyle(SOLID_FILL,BLUE);
setcolor(BLUE);
line(15,120,65,120);
line(15,120,15,165);
line(65,120,65,165);
line(15,165,65,165);
            setcolor(WHITE);
circle(40,143,5);












   ////////////////////////////////////////////////////////////////////player//////////////////////////////////////////




if(y2==550 && y1==423)
   {
       y1=378;
       y2=600;
   }

///////////here
if(y1==378) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }


    if(y1==423 && y2!=600)
    {


      y2=y2+50*chh;
    }
 if(chh==2 && y2==600)
    {
        y1=378;
        y2=550;
    }

                       ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==378)
   {
       y1=333;
       y2=50;
   }
if(y1==333) //&& y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=333;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=333;
        y2=100;
    }


if(y2==550+(50*chh) && y1==333)
   {
       y1=288;
       y2=600;
   }

///////////here
if(y1==288) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }



 if(chh==2 && y2==600)
    {
        y1=288;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=288;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=288;
        y2=500;
    }


  ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==288)
   {
       y1=243;
       y2=50;
   }
if(y1==243 && y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=243;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=243;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=243;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=243;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=243;
        y2=100;
    }


if(y2==550+(50*chh) && y1==243)
   {
       y1=198;
       y2=600;
   }

///////////here
if(y1==198) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }



 if(chh==2 && y2==600)
    {
        y1=198;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=198;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=198;
        y2=500;
    }



  ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==198)
   {
       y1=153;
       y2=50;
   }
if(y1==153 && y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=153;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=153;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=153;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=153;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=153;
        y2=100;
    }


if(y2==550+(50*chh) && y1==153)
   {
       y1=108;
       y2=600;
   }

///////////here
if(y1==108) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }



 if(chh==2 && y2==600)
    {
        y1=108;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=108;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=108;
        y2=500;
    }


  ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==108)
   {
       y1=63;
       y2=50;
   }
if(y1==63 && y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=63;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=63;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=63;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=63;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=63;
        y2=100;
    }



               if(y2==550+(50*chh) && y1==63)
   {
       y1=18;
       y2=600;
   }




if(y1==18) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }

if(y1==18 && y2<100)
{
    y2=100;

}

if(chh==2 && y2==600)
    {
        y1=18;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=18;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=18;
        y2=500;
    }



  if(y1==423 && y2==550)
     {
         y1=153;
         y2=550;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }




      if(y1==378 && y2==200)
     {
         y1=243;
         y2=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }


     if(y1==243 && y2==400)
     {
         y1=108;
         y2=400;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }
      if(y1==153 && y2==300)
     {
         y1=18;
         y2=200;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }

      if(y1==63 && y2==100)
     {
         y1=198;
         y2=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(y1==198 && y2==250)
     {
         y1=378;
         y2=300;
           settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(y1==63 && y2==400)
     {
         y1=423;
         y2=450;  settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }









settextstyle(0,0,7);
    setcolor(GREEN);
    circle(y2,y1,17);




    //}



    //getchh();
    //closegraph();
















  break;




          case 2:cleardevice();




                        /////////////start////////




initgraph(&gd, &gm, NULL);
    line(0,0,0,700);
    for(i=0;i<11;i++)
    {
        j+=50;
        line(30+j,0,30+j,450);
    }
    j=0;
    line(0,0,700,0);
    for(g=0;g<11;g++)
    {
        k+=45;
        line(80,0+k,580,0+k);

    }
         k=0;





///////////////new for clr////////


setfillstyle(SOLID_FILL,YELLOW);

    line(80,0,130,0);
    line(80,0,80,45);
    line(80,45,130,45);
    line(130,0,130,45);
    floodfill(81,10,WHITE);
    for(y=0;y<4;y++)
    {
        a+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+a,0,130+a,0);
    line(80+a,0,80+a,45);
    line(80+a,45,130+a,45);
    line(130+a,0,130+a,45);
    floodfill(81+a,10,WHITE);
    }
    a=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(130,0,180,0);
    line(130,0,130,45);
    line(80,45,180,45);
    line(180,0,180,45);
    floodfill(131,10,WHITE);

    for(z=0;z<4;z++)
    {
        b+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+b,0,180+b,0);
    line(130+b,0,130+b,45);
    line(180+b,45,180+b,45);
    line(180+b,0,180+b,45);
    floodfill(131+b,10,WHITE);
    }
    b=0;

    setfillstyle(SOLID_FILL,BLUE);
    line(80,45,130,45);
    line(80,45,80,90);
    line(80,90,130,90);
    line(130,45,130,90);
    floodfill(81,55,WHITE);
    for(e=0;e<4;e++)
    {
        c+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+c,45,130+c,45);
    line(80+c,45,80+c,90);
    line(80+c,90,130+c,90);
    line(130+c,45,130+c,90);
    floodfill(81+c,55,WHITE);
    }
c=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,45,180,45);
    line(130,45,130,90);
    line(80,90,180,90);
    line(180,45,180,90);
    floodfill(131,50,WHITE);

    for(f=0;f<4;f++)
    {
        d+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+d,45,180+d,45);
    line(130+d,45,130+d,90);
    line(80+d,90,180+d,90);
    line(180+d,45,180+d,90);
    floodfill(131+d,55,WHITE);

    }
d=0;


        setfillstyle(SOLID_FILL,YELLOW);
    line(80,90,130,90);
    line(80,135,80,135);
    line(80,135,130,135);
    line(130,90,130,135);
    floodfill(81,100,WHITE);
    for(m=0;m<4;m++)
    {
        h+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+h,90,130+h,90);
    line(80+h,135,80+h,135);
    line(80+h,135,130+h,135);
    line(130+h,90,130+h,135);
    floodfill(81+h,100,WHITE);
    }

h=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(130,90,180,90);
    line(130,90,130,135);
    line(80,135,180,135);
    line(180,90,180,135);
    floodfill(131,100,WHITE);

    for(n=0;n<4;n++)
    {
        l+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+l,90,180+l,90);
    line(130+l,90,130+l,135);
    line(80+l,135,180+l,135);
    line(180+l,90,180+l,135);
    floodfill(131+l,100,WHITE);

    }
l=0;


        setfillstyle(SOLID_FILL,BLUE);
    line(80,135,130,135);
    line(80,180,80,180);
    line(80,180,130,180);
    line(130,135,130,180);
    floodfill(81,145,WHITE);
    for(o=0;o<4;o++)
    {
        p+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+p,135,130+p,135);
    line(80+p,180,80+p,180);
    line(80+p,180,130+p,180);
    line(130+p,135,130+p,180);
    floodfill(81+p,145,WHITE);
    }
p=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,135,180,135);
    line(130,135,130,180);
    line(80,180,180,180);
    line(180,135,180,180);
    floodfill(131,145,WHITE);

    for(q=0;q<4;q++)
    {
        r+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+r,135,180+r,135);
    line(130+r,135,130+r,180);
    line(80+r,180,180+r,180);
    line(180+r,135,180+r,180);
    floodfill(131+r,145,WHITE);

    }
r=0;

setfillstyle(SOLID_FILL,YELLOW);
    line(80,180,130,180);
    line(80,225,80,225);
    line(80,225,130,225);
    line(130,180,130,225);
    floodfill(81,190,WHITE);
    for(s=0;s<4;s++)
    {
        t+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+t,180,130+t,180);
    line(80+t,225,80+t,225);
    line(80+t,225,130+t,225);
    line(130+t,180,130+t,225);
    floodfill(81+t,190,WHITE);
    }
t=0;

 setfillstyle(SOLID_FILL,BLUE);
    line(130,180,180,180);
    line(130,180,130,225);
    line(80,225,180,225);
    line(180,180,180,225);
    floodfill(131,190,WHITE);

    for(u=0;u<4;u++)
    {
        v+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+v,180,180+v,180);
    line(130+v,180,130+v,225);
    line(80+v,225,180+v,225);
    line(180+v,180,180+v,225);
    floodfill(131+v,190,WHITE);
    }

    v=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(80,225,130,225);
    line(80,270,80,270);
    line(80,270,130,270);
    line(130,225,130,270);
    floodfill(81,235,WHITE);
    for(ab=0;ab<4;ab++)
    {
        bc+=100;
setfillstyle(SOLID_FILL,BLUE);
 line(80+bc,225,130+bc,225);
    line(80+bc,270,80+bc,270);
    line(80+bc,270,130+bc,270);
    line(130+bc,225,130+bc,270);
    floodfill(81+bc,235,WHITE);
    }
    bc=0;



setfillstyle(SOLID_FILL,YELLOW);
    line(130,225,180,225);
    line(130,225,130,270);
    line(80,270,180,270);
    line(180,225,180,270);
    floodfill(131,235,WHITE);

    for(cd=0;cd<4;cd++)
    {
        de+=100;
         setfillstyle(SOLID_FILL,YELLOW);
          line(130+de,225,180+de,225);
    line(130+de,225,130+de,270);
    line(80+de,270,180+de,270);
    line(180+de,225,180+de,270);
    floodfill(131+de,235,WHITE);
    }
de=0;

        setfillstyle(SOLID_FILL,YELLOW);
    line(80,270,130,270);
    line(80,315,80,315);
    line(80,315,130,315);
    line(130,270,130,315);
    floodfill(81,280,WHITE);
    for(ef=0;ef<4;ef++)
    {
        fg+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+fg,270,130+fg,270);
    line(80+fg,315,80+fg,315);
    line(80+fg,315,130+fg,315);
    line(130+fg,270,130+fg,315);
    floodfill(81+fg,280,WHITE);
    }
fg=0;

setfillstyle(SOLID_FILL,BLUE);
    line(130,270,180,270);
    line(130,270,130,315);
    line(80,315,180,315);
    line(180,270,180,315);
    floodfill(131,280,WHITE);

    for(gh=0;gh<4;gh++)
    {
        hi+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+hi,270,180+hi,270);
    line(130+hi,270,130+hi,315);
    line(80+hi,315,180+hi,315);
    line(180+hi,270,180+hi,315);
    floodfill(131+hi,280,WHITE);
    }
    hi=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(80,315,130,315);
    line(80,360,80,360);
    line(80,360,130,360);
    line(130,315,130,360);
    floodfill(81,325,WHITE);
    for(ij=0;ij<4;ij++)
    {
        jk+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+jk,315,130+jk,315);
    line(80+jk,360,80+jk,360);
    line(80+jk,360,130+jk,360);
    line(130+jk,315,130+jk,360);
    floodfill(81+jk,325,WHITE);
    }
    jk=0;


    setfillstyle(SOLID_FILL,YELLOW);
    line(130,315,180,315);
    line(130,315,130,360);
    line(80,360,180,360);
    line(180,315,180,360);
    floodfill(131,325,WHITE);

    for(kl=0;kl<4;kl++)
    {
        lm+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+lm,315,180+lm,315);
    line(130+lm,315,130+lm,360);
    line(80+lm,360,180+lm,360);
    line(180+lm,315,180+lm,360);
    floodfill(131+lm,325,WHITE);
    }
lm=0;


     setfillstyle(SOLID_FILL,YELLOW);
    line(80,360,130,360);
    line(80,405,80,405);
    line(80,405,130,405);
    line(130,360,130,405);
    floodfill(81,370,WHITE);
    for(mn=0;mn<4;mn++)
    {
        no+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+no,360,130+no,360);
    line(80+no,405,80+no,405);
    line(80+no,405,130+no,405);
    line(130+no,360,130+no,405);
    floodfill(81+no,370,WHITE);
    }
no=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(130,360,180,360);
    line(130,360,130,405);
    line(80,405,180,405);
    line(180,360,180,405);
    floodfill(131,370,WHITE);

    for(op=0;op<4;op++)
    {
        pq+=100;
         setfillstyle(SOLID_FILL,BLUE);
         line(130+pq,360,180+pq,360);
    line(130+pq,360,130+pq,405);
    line(80+pq,405,180+pq,405);
    line(180+pq,360,180+pq,405);
    floodfill(131+pq,370,WHITE);
    }
pq=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(80,405,130,405);
    line(80,450,80,450);
    line(80,450,130,450);
    line(130,405,130,450);
    floodfill(81,415,WHITE);
    for(qr=0;qr<4;qr++)
    {
    rs+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+rs,405,130+rs,405);
    line(80+rs,450,80+rs,450);
    line(80+rs,450,130+rs,450);
    line(130+rs,405,130+rs,450);
    floodfill(81+rs,415,WHITE);
    }
    rs=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,405,180,405);
    line(130,405,130,450);
    line(130,450,180,450);
    line(180,405,180,450);
    floodfill(131,415,WHITE);

    for(st=0;st<4;st++)
    {
        tu+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+tu,405,180+tu,405);
    line(130+tu,405,130+tu,450);
    line(130+tu,450,180+tu,450);
    line(180+tu,405,180+tu,450);
    floodfill(131+tu,415,WHITE);
    }
    tu=0;










    ////////////////numbers/////////////




outtextxy(103,420,"1");  ///1st line
outtextxy(153,420,"2");
outtextxy(203,420,"3");
outtextxy(253,420,"4");
outtextxy(303,420,"5");
outtextxy(353,420,"6");
outtextxy(403,420,"7");
outtextxy(453,420,"8");
outtextxy(503,420,"9");
outtextxy(553,420,"10");


outtextxy(103,375,"20");  ///2nd line
outtextxy(153,375,"19");
outtextxy(203,375,"18");
outtextxy(253,375,"17");
outtextxy(303,375,"16");
outtextxy(353,375,"15");
outtextxy(403,375,"14");
outtextxy(453,375,"13");
outtextxy(503,375,"12");
outtextxy(553,375,"11");


outtextxy(103,335,"21");  ///3rd line
outtextxy(153,335,"22");
outtextxy(203,335,"23");
outtextxy(253,335,"24");
outtextxy(303,335,"25");
outtextxy(353,335,"26");
outtextxy(403,335,"27");
outtextxy(453,335,"28");
outtextxy(503,335,"29");
outtextxy(553,335,"30");



outtextxy(103,290,"40");  ///4th line
outtextxy(153,290,"39");
outtextxy(203,290,"38");
outtextxy(253,290,"37");
outtextxy(303,290,"36");
outtextxy(353,290,"35");
outtextxy(403,290,"34");
outtextxy(453,290,"33");
outtextxy(503,290,"32");
outtextxy(553,290,"31");


outtextxy(103,245,"41");  ///5th line
outtextxy(153,245,"42");
outtextxy(203,245,"43");
outtextxy(253,245,"44");
outtextxy(303,245,"45");
outtextxy(353,245,"46");
outtextxy(403,245,"47");
outtextxy(453,245,"48");
outtextxy(503,245,"49");
outtextxy(553,245,"50");


outtextxy(103,200,"60");  ///6th line
outtextxy(153,200,"59");
outtextxy(203,200,"58");
outtextxy(253,200,"57");
outtextxy(303,200,"56");
outtextxy(353,200,"55");
outtextxy(403,200,"54");
outtextxy(453,200,"53");
outtextxy(503,200,"52");
outtextxy(553,200,"51");


outtextxy(103,155,"61");  ///7th line
outtextxy(153,155,"62");
outtextxy(203,155,"63");
outtextxy(253,155,"64");
outtextxy(303,155,"65");
outtextxy(353,155,"66");
outtextxy(403,155,"67");
outtextxy(453,155,"68");
outtextxy(503,155,"69");
outtextxy(553,155,"70");


outtextxy(103,110,"80");  ///8th line
outtextxy(153,110,"79");
outtextxy(203,110,"78");
outtextxy(253,110,"77");
outtextxy(303,110,"76");
outtextxy(353,110,"75");
outtextxy(403,110,"74");
outtextxy(453,110,"73");
outtextxy(503,110,"72");
outtextxy(553,110,"71");


outtextxy(103,65,"81");  ///9th line
outtextxy(153,65,"82");
outtextxy(203,65,"83");
outtextxy(253,65,"84");
outtextxy(303,65,"85");
outtextxy(353,65,"86");
outtextxy(403,65,"87");
outtextxy(453,65,"88");
outtextxy(503,65,"89");
outtextxy(553,65,"90");


outtextxy(103,20,"100");  ///10th line
outtextxy(153,20,"99");
outtextxy(203,20,"98");
outtextxy(253,20,"97");
outtextxy(303,20,"96");
outtextxy(353,20,"95");
outtextxy(403,20,"94");
outtextxy(453,20,"93");
outtextxy(503,20,"92");
outtextxy(553,20,"91");










////////////////snakes//////
setcolor(RED);
setlinestyle(0,0,5);
arc(100,100,320,70,50);
circle(115,53,5);
arc(154,179,110,220,50);




setcolor(RED);
setlinestyle(0,0,5);
arc(250,250,320,70,50);
circle(265,203,5);
arc(304,329,110,280,50);



setcolor(RED);
setlinestyle(0,0,5);

 arc(400,180,320,80,100);
 circle(415,80,5);
    arc(509,338,110,233,100);





    ////////ladders///////





setcolor(GREEN);
setlinestyle(0,0,5);


line(185,40,285,175);
line(215,25,315,160);
line(210,67,230,52);
line(240,110,260,92);
line(270,153,295,132);

setcolor(GREEN);
setlinestyle(0,0,5);

line(85,265,185,400);
line(115,260,215,385);
line(110,302,130,277);
line(140,345,160,317);
line(170,387,195,357);

setcolor(GREEN);
setlinestyle(0,0,5);


line(533,170,537,440);
line(572,170,577,440);
line(535,230,575,232);
line(535,320,575,322);
line(535,410,575,412);



line(383,110,387,250);
line(418,110,422,250);
line(383,140,418,144);
line(383,210,418,214);






setfillstyle(SOLID_FILL,RED);
floodfill(1 , 1,WHITE);




                    ///////////////end///////////////











              setfillstyle(SOLID_FILL,BLUE);
setcolor(BLUE);
line(15,120,65,120);
line(15,120,15,165);
line(65,120,65,165);
line(15,165,65,165);
              setcolor(WHITE);
circle(25,127,3);
circle(55,158,3);



   ////////////////////////////////////////////////////////////////////player//////////////////////////////////////////




if(y2==550 && y1==423)
   {
       y1=378;
       y2=600;
   }

///////////here
if(y1==378) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }


    if(y1==423 && y2!=600)
    {


      y2=y2+50*chh;
    }
 if(chh==2 && y2==600)
    {
        y1=378;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=378;
        y2=500;
    }
if(chh==3 && y2==600)
    {
        y1=378;
        y2=550;
    }



   if( y2==(100-50*chh) && y1==378)
   {
       y1=333;
       y2=50;
   }
if(y1==333) //&& y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=333;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=333;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=333;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=330;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=333;
        y2=100;
    }

if(y2==550+(50*chh) && y1==333)
   {
       y1=288;
       y2=600;
   }

///////////here
if(y1==288) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }



 if(chh==2 && y2==600)
    {
        y1=288;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=288;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=288;
        y2=500;
    }



  ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==288)
   {
       y1=243;
       y2=50;
   }
if(y1==243 && y2!=650)
    {


      y2=y2+50*chh;
    }


    if(chh==2 && y2==0)
   {
       y1=243;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=243;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=243;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=243;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=243;
        y2=100;
    }


if(y2==550+(50*chh) && y1==243)
   {
       y1=198;
       y2=600;
   }

///////////here
if(y1==198) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }



 if(chh==2 && y2==600)
    {
        y1=198;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=198;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=198;
        y2=500;
    }



   if( y2==(100-50*chh) && y1==198)
   {
       y1=153;
       y2=50;
   }
if(y1==153 && y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=153;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=153;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=153;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=153;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=153;
        y2=100;
    }


if(y2==550+(50*chh) && y1==153)
   {
       y1=108;
       y2=600;
   }

///////////here
if(y1==108) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }



 if(chh==2 && y2==600)
    {
        y1=108;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=108;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=108;
        y2=500;
    }


  ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==108)
   {
       y1=63;
       y2=50;
   }
if(y1==63 && y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=63;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=63;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=63;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=63;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=63;
        y2=100;
    }


               if(y2==550+(50*chh) && y1==63)
   {
       y1=18;
       y2=600;
   }




if(y1==18 && y2>150) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }

if(y1==18 && y2>150)
{
    y2=100;

}

if(chh==2 && y2==600)
    {
        y1=18;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=18;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=18;
        y2=500;
    }



  if(y1==423 && y2==550)
     {
         y1=153;
         y2=550;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }




      if(y1==378 && y2==200)
     {
         y1=243;
         y2=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }


     if(y1==243 && y2==400)
     {
         y1=108;
         y2=400;
          settextstyle(8,0,2);
    setcolor(GREEN);
    outtextxy(130,455,"great...!!! beware of snakes");

     }
      if(y1==153 && y2==300)
     {
         y1=18;
         y2=200;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }

      if(y1==63 && y2==100)
     {
         y1=198;
         y2=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(y1==198 && y2==250)
     {
         y1=378;
         y2=300;
           settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(y1==63 && y2==400)
     {
         y1=423;
         y2=450;  settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }

               //player1(&chh);




settextstyle(0,0,7);
    setcolor(GREEN);
    circle(y2,y1,17);





break;


case 3:cleardevice();





                     /////////////start////////




initgraph(&gd, &gm, NULL);
    line(0,0,0,700);
    for(i=0;i<11;i++)
    {
        j+=50;
        line(30+j,0,30+j,450);
    }
    j=0;
    line(0,0,700,0);
    for(g=0;g<11;g++)
    {
        k+=45;
        line(80,0+k,580,0+k);

    }
         k=0;





///////////////new for clr////////


setfillstyle(SOLID_FILL,YELLOW);

    line(80,0,130,0);
    line(80,0,80,45);
    line(80,45,130,45);
    line(130,0,130,45);
    floodfill(81,10,WHITE);
    for(y=0;y<4;y++)
    {
        a+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+a,0,130+a,0);
    line(80+a,0,80+a,45);
    line(80+a,45,130+a,45);
    line(130+a,0,130+a,45);
    floodfill(81+a,10,WHITE);
    }
    a=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(130,0,180,0);
    line(130,0,130,45);
    line(80,45,180,45);
    line(180,0,180,45);
    floodfill(131,10,WHITE);

    for(z=0;z<4;z++)
    {
        b+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+b,0,180+b,0);
    line(130+b,0,130+b,45);
    line(180+b,45,180+b,45);
    line(180+b,0,180+b,45);
    floodfill(131+b,10,WHITE);
    }
    b=0;

    setfillstyle(SOLID_FILL,BLUE);
    line(80,45,130,45);
    line(80,45,80,90);
    line(80,90,130,90);
    line(130,45,130,90);
    floodfill(81,55,WHITE);
    for(e=0;e<4;e++)
    {
        c+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+c,45,130+c,45);
    line(80+c,45,80+c,90);
    line(80+c,90,130+c,90);
    line(130+c,45,130+c,90);
    floodfill(81+c,55,WHITE);
    }
c=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,45,180,45);
    line(130,45,130,90);
    line(80,90,180,90);
    line(180,45,180,90);
    floodfill(131,50,WHITE);

    for(f=0;f<4;f++)
    {
        d+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+d,45,180+d,45);
    line(130+d,45,130+d,90);
    line(80+d,90,180+d,90);
    line(180+d,45,180+d,90);
    floodfill(131+d,55,WHITE);

    }
d=0;


        setfillstyle(SOLID_FILL,YELLOW);
    line(80,90,130,90);
    line(80,135,80,135);
    line(80,135,130,135);
    line(130,90,130,135);
    floodfill(81,100,WHITE);
    for(m=0;m<4;m++)
    {
        h+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+h,90,130+h,90);
    line(80+h,135,80+h,135);
    line(80+h,135,130+h,135);
    line(130+h,90,130+h,135);
    floodfill(81+h,100,WHITE);
    }

h=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(130,90,180,90);
    line(130,90,130,135);
    line(80,135,180,135);
    line(180,90,180,135);
    floodfill(131,100,WHITE);

    for(n=0;n<4;n++)
    {
        l+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+l,90,180+l,90);
    line(130+l,90,130+l,135);
    line(80+l,135,180+l,135);
    line(180+l,90,180+l,135);
    floodfill(131+l,100,WHITE);

    }
l=0;


        setfillstyle(SOLID_FILL,BLUE);
    line(80,135,130,135);
    line(80,180,80,180);
    line(80,180,130,180);
    line(130,135,130,180);
    floodfill(81,145,WHITE);
    for(o=0;o<4;o++)
    {
        p+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+p,135,130+p,135);
    line(80+p,180,80+p,180);
    line(80+p,180,130+p,180);
    line(130+p,135,130+p,180);
    floodfill(81+p,145,WHITE);
    }
p=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,135,180,135);
    line(130,135,130,180);
    line(80,180,180,180);
    line(180,135,180,180);
    floodfill(131,145,WHITE);

    for(q=0;q<4;q++)
    {
        r+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+r,135,180+r,135);
    line(130+r,135,130+r,180);
    line(80+r,180,180+r,180);
    line(180+r,135,180+r,180);
    floodfill(131+r,145,WHITE);

    }
r=0;

setfillstyle(SOLID_FILL,YELLOW);
    line(80,180,130,180);
    line(80,225,80,225);
    line(80,225,130,225);
    line(130,180,130,225);
    floodfill(81,190,WHITE);
    for(s=0;s<4;s++)
    {
        t+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+t,180,130+t,180);
    line(80+t,225,80+t,225);
    line(80+t,225,130+t,225);
    line(130+t,180,130+t,225);
    floodfill(81+t,190,WHITE);
    }
t=0;

 setfillstyle(SOLID_FILL,BLUE);
    line(130,180,180,180);
    line(130,180,130,225);
    line(80,225,180,225);
    line(180,180,180,225);
    floodfill(131,190,WHITE);

    for(u=0;u<4;u++)
    {
        v+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+v,180,180+v,180);
    line(130+v,180,130+v,225);
    line(80+v,225,180+v,225);
    line(180+v,180,180+v,225);
    floodfill(131+v,190,WHITE);
    }

    v=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(80,225,130,225);
    line(80,270,80,270);
    line(80,270,130,270);
    line(130,225,130,270);
    floodfill(81,235,WHITE);
    for(ab=0;ab<4;ab++)
    {
        bc+=100;
setfillstyle(SOLID_FILL,BLUE);
 line(80+bc,225,130+bc,225);
    line(80+bc,270,80+bc,270);
    line(80+bc,270,130+bc,270);
    line(130+bc,225,130+bc,270);
    floodfill(81+bc,235,WHITE);
    }
    bc=0;



setfillstyle(SOLID_FILL,YELLOW);
    line(130,225,180,225);
    line(130,225,130,270);
    line(80,270,180,270);
    line(180,225,180,270);
    floodfill(131,235,WHITE);

    for(cd=0;cd<4;cd++)
    {
        de+=100;
         setfillstyle(SOLID_FILL,YELLOW);
          line(130+de,225,180+de,225);
    line(130+de,225,130+de,270);
    line(80+de,270,180+de,270);
    line(180+de,225,180+de,270);
    floodfill(131+de,235,WHITE);
    }
de=0;

        setfillstyle(SOLID_FILL,YELLOW);
    line(80,270,130,270);
    line(80,315,80,315);
    line(80,315,130,315);
    line(130,270,130,315);
    floodfill(81,280,WHITE);
    for(ef=0;ef<4;ef++)
    {
        fg+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+fg,270,130+fg,270);
    line(80+fg,315,80+fg,315);
    line(80+fg,315,130+fg,315);
    line(130+fg,270,130+fg,315);
    floodfill(81+fg,280,WHITE);
    }
fg=0;

setfillstyle(SOLID_FILL,BLUE);
    line(130,270,180,270);
    line(130,270,130,315);
    line(80,315,180,315);
    line(180,270,180,315);
    floodfill(131,280,WHITE);

    for(gh=0;gh<4;gh++)
    {
        hi+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+hi,270,180+hi,270);
    line(130+hi,270,130+hi,315);
    line(80+hi,315,180+hi,315);
    line(180+hi,270,180+hi,315);
    floodfill(131+hi,280,WHITE);
    }
    hi=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(80,315,130,315);
    line(80,360,80,360);
    line(80,360,130,360);
    line(130,315,130,360);
    floodfill(81,325,WHITE);
    for(ij=0;ij<4;ij++)
    {
        jk+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+jk,315,130+jk,315);
    line(80+jk,360,80+jk,360);
    line(80+jk,360,130+jk,360);
    line(130+jk,315,130+jk,360);
    floodfill(81+jk,325,WHITE);
    }
    jk=0;


    setfillstyle(SOLID_FILL,YELLOW);
    line(130,315,180,315);
    line(130,315,130,360);
    line(80,360,180,360);
    line(180,315,180,360);
    floodfill(131,325,WHITE);

    for(kl=0;kl<4;kl++)
    {
        lm+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+lm,315,180+lm,315);
    line(130+lm,315,130+lm,360);
    line(80+lm,360,180+lm,360);
    line(180+lm,315,180+lm,360);
    floodfill(131+lm,325,WHITE);
    }
lm=0;


     setfillstyle(SOLID_FILL,YELLOW);
    line(80,360,130,360);
    line(80,405,80,405);
    line(80,405,130,405);
    line(130,360,130,405);
    floodfill(81,370,WHITE);
    for(mn=0;mn<4;mn++)
    {
        no+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+no,360,130+no,360);
    line(80+no,405,80+no,405);
    line(80+no,405,130+no,405);
    line(130+no,360,130+no,405);
    floodfill(81+no,370,WHITE);
    }
no=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(130,360,180,360);
    line(130,360,130,405);
    line(80,405,180,405);
    line(180,360,180,405);
    floodfill(131,370,WHITE);

    for(op=0;op<4;op++)
    {
        pq+=100;
         setfillstyle(SOLID_FILL,BLUE);
         line(130+pq,360,180+pq,360);
    line(130+pq,360,130+pq,405);
    line(80+pq,405,180+pq,405);
    line(180+pq,360,180+pq,405);
    floodfill(131+pq,370,WHITE);
    }
pq=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(80,405,130,405);
    line(80,450,80,450);
    line(80,450,130,450);
    line(130,405,130,450);
    floodfill(81,415,WHITE);
    for(qr=0;qr<4;qr++)
    {
    rs+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+rs,405,130+rs,405);
    line(80+rs,450,80+rs,450);
    line(80+rs,450,130+rs,450);
    line(130+rs,405,130+rs,450);
    floodfill(81+rs,415,WHITE);
    }
    rs=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,405,180,405);
    line(130,405,130,450);
    line(130,450,180,450);
    line(180,405,180,450);
    floodfill(131,415,WHITE);

    for(st=0;st<4;st++)
    {
        tu+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+tu,405,180+tu,405);
    line(130+tu,405,130+tu,450);
    line(130+tu,450,180+tu,450);
    line(180+tu,405,180+tu,450);
    floodfill(131+tu,415,WHITE);
    }
    tu=0;










    ////////////////numbers/////////////




outtextxy(103,420,"1");  ///1st line
outtextxy(153,420,"2");
outtextxy(203,420,"3");
outtextxy(253,420,"4");
outtextxy(303,420,"5");
outtextxy(353,420,"6");
outtextxy(403,420,"7");
outtextxy(453,420,"8");
outtextxy(503,420,"9");
outtextxy(553,420,"10");


outtextxy(103,375,"20");  ///2nd line
outtextxy(153,375,"19");
outtextxy(203,375,"18");
outtextxy(253,375,"17");
outtextxy(303,375,"16");
outtextxy(353,375,"15");
outtextxy(403,375,"14");
outtextxy(453,375,"13");
outtextxy(503,375,"12");
outtextxy(553,375,"11");


outtextxy(103,335,"21");  ///3rd line
outtextxy(153,335,"22");
outtextxy(203,335,"23");
outtextxy(253,335,"24");
outtextxy(303,335,"25");
outtextxy(353,335,"26");
outtextxy(403,335,"27");
outtextxy(453,335,"28");
outtextxy(503,335,"29");
outtextxy(553,335,"30");



outtextxy(103,290,"40");  ///4th line
outtextxy(153,290,"39");
outtextxy(203,290,"38");
outtextxy(253,290,"37");
outtextxy(303,290,"36");
outtextxy(353,290,"35");
outtextxy(403,290,"34");
outtextxy(453,290,"33");
outtextxy(503,290,"32");
outtextxy(553,290,"31");


outtextxy(103,245,"41");  ///5th line
outtextxy(153,245,"42");
outtextxy(203,245,"43");
outtextxy(253,245,"44");
outtextxy(303,245,"45");
outtextxy(353,245,"46");
outtextxy(403,245,"47");
outtextxy(453,245,"48");
outtextxy(503,245,"49");
outtextxy(553,245,"50");


outtextxy(103,200,"60");  ///6th line
outtextxy(153,200,"59");
outtextxy(203,200,"58");
outtextxy(253,200,"57");
outtextxy(303,200,"56");
outtextxy(353,200,"55");
outtextxy(403,200,"54");
outtextxy(453,200,"53");
outtextxy(503,200,"52");
outtextxy(553,200,"51");


outtextxy(103,155,"61");  ///7th line
outtextxy(153,155,"62");
outtextxy(203,155,"63");
outtextxy(253,155,"64");
outtextxy(303,155,"65");
outtextxy(353,155,"66");
outtextxy(403,155,"67");
outtextxy(453,155,"68");
outtextxy(503,155,"69");
outtextxy(553,155,"70");


outtextxy(103,110,"80");  ///8th line
outtextxy(153,110,"79");
outtextxy(203,110,"78");
outtextxy(253,110,"77");
outtextxy(303,110,"76");
outtextxy(353,110,"75");
outtextxy(403,110,"74");
outtextxy(453,110,"73");
outtextxy(503,110,"72");
outtextxy(553,110,"71");


outtextxy(103,65,"81");  ///9th line
outtextxy(153,65,"82");
outtextxy(203,65,"83");
outtextxy(253,65,"84");
outtextxy(303,65,"85");
outtextxy(353,65,"86");
outtextxy(403,65,"87");
outtextxy(453,65,"88");
outtextxy(503,65,"89");
outtextxy(553,65,"90");


outtextxy(103,20,"100");  ///10th line
outtextxy(153,20,"99");
outtextxy(203,20,"98");
outtextxy(253,20,"97");
outtextxy(303,20,"96");
outtextxy(353,20,"95");
outtextxy(403,20,"94");
outtextxy(453,20,"93");
outtextxy(503,20,"92");
outtextxy(553,20,"91");










////////////////snakes//////
setcolor(RED);
setlinestyle(0,0,5);
arc(100,100,320,70,50);
circle(115,53,5);
arc(154,179,110,220,50);




setcolor(RED);
setlinestyle(0,0,5);
arc(250,250,320,70,50);
circle(265,203,5);
arc(304,329,110,280,50);



setcolor(RED);
setlinestyle(0,0,5);

 arc(400,180,320,80,100);
 circle(415,80,5);
    arc(509,338,110,233,100);





    ////////ladders///////





setcolor(GREEN);
setlinestyle(0,0,5);


line(185,40,285,175);
line(215,25,315,160);
line(210,67,230,52);
line(240,110,260,92);
line(270,153,295,132);

setcolor(GREEN);
setlinestyle(0,0,5);

line(85,265,185,400);
line(115,260,215,385);
line(110,302,130,277);
line(140,345,160,317);
line(170,387,195,357);

setcolor(GREEN);
setlinestyle(0,0,5);


line(533,170,537,440);
line(572,170,577,440);
line(535,230,575,232);
line(535,320,575,322);
line(535,410,575,412);



line(383,110,387,250);
line(418,110,422,250);
line(383,140,418,144);
line(383,210,418,214);






setfillstyle(SOLID_FILL,RED);
floodfill(1 , 1,WHITE);




                    ///////////////end///////////////






              setfillstyle(SOLID_FILL,BLUE);
setcolor(BLUE);
line(15,120,65,120);
line(15,120,15,165);
line(65,120,65,165);
line(15,165,65,165);
              setcolor(WHITE);
circle(25,127,3);
circle(55,158,3);
circle(40,143,3);

   ////////////////////////////////////////////////////////////////////player//////////////////////////////////////////




if(y2==550 && y1==423)
   {
       y1=378;
       y2=600;
   }

///////////here
if(y1==378) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }


    if(y1==423 && y2!=600)
    {


      y2=y2+50*chh;
    }
 if(chh==2 && y2==600)
    {
        y1=378;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=378;
        y2=500;
    }
if(chh==3 && y2==600)
    {
        y1=378;
        y2=550;
    }

    if(chh==4 && y2==600)
    {
        y1=378;
        y2=550;
    }
    if(chh==4 && y2==650)
    {
        y1=378;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=378;
        y2=450;
    }


                       ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==378)
   {
       y1=333;
       y2=50;
   }
if(y1==333) //&& y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=333;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=333;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=333;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=330;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=333;
        y2=100;
    }
    if(chh==4 && y2==50)
    {
        y1=333;
        y2=100;
    }
    if(chh==4 && y2==0)
    {
        y1=333;
        y2=150;
    }
    if(chh==4 && y2==-50)
    {
        y1=333;
        y2=200;
    }
    if(chh==4 && y2==-100)
    {
        y1=333;
        y2=250;
    }




if(y2==550+(50*chh) && y1==333)
   {
       y1=288;
       y2=600;
   }

///////////here
if(y1==288) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }



 if(chh==2 && y2==600)
    {
        y1=288;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=288;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=288;
        y2=500;
    }

    if(chh==4 && y2==650)
    {
        y1=288;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=288;
        y2=450;
    }
    if(chh==4 && y2==750)
    {
        y1=288;
        y2=400;
    }

   if( y2==(100-50*chh) && y1==288)
   {
       y1=243;
       y2=50;
   }
if(y1==243 && y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=243;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=243;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=243;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=243;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=243;
        y2=100;
    }
    if(chh==4 && y2==50)
    {
        y1=243;
        y2=100;
    }
    if(chh==4 && y2==0)
    {
        y1=243;
        y2=150;
    }
    if(chh==4 && y2==-50)
    {
        y1=243;
        y2=200;
    }
    if(chh==4 && y2==-100)
    {
        y1=243;
        y2=250;
    }

if(y2==550+(50*chh) && y1==243)
   {
       y1=198;
       y2=600;
   }

///////////here
if(y1==198) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }



 if(chh==2 && y2==600)
    {
        y1=198;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=198;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=198;
        y2=500;
    }

    if(chh==4 && y2==650)
    {
        y1=198;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=198;
        y2=450;
    }
    if(chh==4 && y2==750)
    {
        y1=198;
        y2=400;
    }


   if( y2==(100-50*chh) && y1==198)
   {
       y1=153;
       y2=50;
   }
if(y1==153 && y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=153;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=153;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=153;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=153;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=153;
        y2=100;
    }
    if(chh==4 && y2==50)
    {
        y1=153;
        y2=100;
    }
    if(chh==4 && y2==0)
    {
        y1=153;
        y2=150;
    }
    if(chh==4 && y2==-50)
    {
        y1=153;
        y2=200;
    }
    if(chh==4 && y2==-100)
    {
        y1=153;
        y2=250;
    }
if(y2==550+(50*chh) && y1==153)
   {
       y1=108;
       y2=600;
   }

///////////here
if(y1==108) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }



 if(chh==2 && y2==600)
    {
        y1=108;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=108;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=108;
        y2=500;
    }

    if(chh==4 && y2==650)
    {
        y1=108;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=108;
        y2=450;
    }
    if(chh==4 && y2==750)
    {
        y1=108;
        y2=400;
    }


   if( y2==(100-50*chh) && y1==108)
   {
       y1=63;
       y2=50;
   }
if(y1==63 && y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=63;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=63;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=63;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=63;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=63;
        y2=100;
    }
    if(chh==4 && y2==50)
    {
        y1=63;
        y2=100;
    }
    if(chh==4 && y2==0)
    {
        y1=63;
        y2=150;
    }
    if(chh==4 && y2==-50)
    {
        y1=63;
        y2=200;
    }
    if(chh==4 && y2==-100)
    {
        y1=63;
        y2=250;
    }





               if(y2==550+(50*chh) && y1==63)
   {
       y1=18;
       y2=600;
   }




if(y1==18 && y2>200) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }

if(y1==18 && y2<100)
{
    y2=100;

}

if(chh==2 && y2==600)
    {
        y1=18;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=18;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=18;
        y2=500;
    }

    if(chh==4 && y2==650)
    {
        y1=18;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=18;
        y2=450;
    }
    if(chh==4 && y2==750)
    {
        y1=18;
        y2=400;
    }




  if(y1==423 && y2==550)
     {
         y1=153;
         y2=550;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }




      if(y1==378 && y2==200)
     {
         y1=243;
         y2=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }


     if(y1==243 && y2==400)
     {
         y1=108;
         y2=400;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }
      if(y1==153 && y2==300)
     {
         y1=18;
         y2=200;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }

      if(y1==63 && y2==100)
     {
         y1=198;
         y2=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(y1==198 && y2==250)
     {
         y1=378;
         y2=300;
           settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(y1==63 && y2==400)
     {
         y1=423;
         y2=450;  settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }                         //player1(&chh);
  settextstyle(0,0,7);
    setcolor(GREEN);
    circle(y2,y1,17);



break;



  case 4:  cleardevice();




                /////////////start////////




initgraph(&gd, &gm, NULL);
    line(0,0,0,700);
    for(i=0;i<11;i++)
    {
        j+=50;
        line(30+j,0,30+j,450);
    }
    j=0;
    line(0,0,700,0);
    for(g=0;g<11;g++)
    {
        k+=45;
        line(80,0+k,580,0+k);

    }
         k=0;





///////////////new for clr////////


setfillstyle(SOLID_FILL,YELLOW);

    line(80,0,130,0);
    line(80,0,80,45);
    line(80,45,130,45);
    line(130,0,130,45);
    floodfill(81,10,WHITE);
    for(y=0;y<4;y++)
    {
        a+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+a,0,130+a,0);
    line(80+a,0,80+a,45);
    line(80+a,45,130+a,45);
    line(130+a,0,130+a,45);
    floodfill(81+a,10,WHITE);
    }
    a=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(130,0,180,0);
    line(130,0,130,45);
    line(80,45,180,45);
    line(180,0,180,45);
    floodfill(131,10,WHITE);

    for(z=0;z<4;z++)
    {
        b+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+b,0,180+b,0);
    line(130+b,0,130+b,45);
    line(180+b,45,180+b,45);
    line(180+b,0,180+b,45);
    floodfill(131+b,10,WHITE);
    }
    b=0;

    setfillstyle(SOLID_FILL,BLUE);
    line(80,45,130,45);
    line(80,45,80,90);
    line(80,90,130,90);
    line(130,45,130,90);
    floodfill(81,55,WHITE);
    for(e=0;e<4;e++)
    {
        c+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+c,45,130+c,45);
    line(80+c,45,80+c,90);
    line(80+c,90,130+c,90);
    line(130+c,45,130+c,90);
    floodfill(81+c,55,WHITE);
    }
c=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,45,180,45);
    line(130,45,130,90);
    line(80,90,180,90);
    line(180,45,180,90);
    floodfill(131,50,WHITE);

    for(f=0;f<4;f++)
    {
        d+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+d,45,180+d,45);
    line(130+d,45,130+d,90);
    line(80+d,90,180+d,90);
    line(180+d,45,180+d,90);
    floodfill(131+d,55,WHITE);

    }
d=0;


        setfillstyle(SOLID_FILL,YELLOW);
    line(80,90,130,90);
    line(80,135,80,135);
    line(80,135,130,135);
    line(130,90,130,135);
    floodfill(81,100,WHITE);
    for(m=0;m<4;m++)
    {
        h+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+h,90,130+h,90);
    line(80+h,135,80+h,135);
    line(80+h,135,130+h,135);
    line(130+h,90,130+h,135);
    floodfill(81+h,100,WHITE);
    }

h=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(130,90,180,90);
    line(130,90,130,135);
    line(80,135,180,135);
    line(180,90,180,135);
    floodfill(131,100,WHITE);

    for(n=0;n<4;n++)
    {
        l+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+l,90,180+l,90);
    line(130+l,90,130+l,135);
    line(80+l,135,180+l,135);
    line(180+l,90,180+l,135);
    floodfill(131+l,100,WHITE);

    }
l=0;


        setfillstyle(SOLID_FILL,BLUE);
    line(80,135,130,135);
    line(80,180,80,180);
    line(80,180,130,180);
    line(130,135,130,180);
    floodfill(81,145,WHITE);
    for(o=0;o<4;o++)
    {
        p+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+p,135,130+p,135);
    line(80+p,180,80+p,180);
    line(80+p,180,130+p,180);
    line(130+p,135,130+p,180);
    floodfill(81+p,145,WHITE);
    }
p=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,135,180,135);
    line(130,135,130,180);
    line(80,180,180,180);
    line(180,135,180,180);
    floodfill(131,145,WHITE);

    for(q=0;q<4;q++)
    {
        r+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+r,135,180+r,135);
    line(130+r,135,130+r,180);
    line(80+r,180,180+r,180);
    line(180+r,135,180+r,180);
    floodfill(131+r,145,WHITE);

    }
r=0;

setfillstyle(SOLID_FILL,YELLOW);
    line(80,180,130,180);
    line(80,225,80,225);
    line(80,225,130,225);
    line(130,180,130,225);
    floodfill(81,190,WHITE);
    for(s=0;s<4;s++)
    {
        t+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+t,180,130+t,180);
    line(80+t,225,80+t,225);
    line(80+t,225,130+t,225);
    line(130+t,180,130+t,225);
    floodfill(81+t,190,WHITE);
    }
t=0;

 setfillstyle(SOLID_FILL,BLUE);
    line(130,180,180,180);
    line(130,180,130,225);
    line(80,225,180,225);
    line(180,180,180,225);
    floodfill(131,190,WHITE);

    for(u=0;u<4;u++)
    {
        v+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+v,180,180+v,180);
    line(130+v,180,130+v,225);
    line(80+v,225,180+v,225);
    line(180+v,180,180+v,225);
    floodfill(131+v,190,WHITE);
    }

    v=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(80,225,130,225);
    line(80,270,80,270);
    line(80,270,130,270);
    line(130,225,130,270);
    floodfill(81,235,WHITE);
    for(ab=0;ab<4;ab++)
    {
        bc+=100;
setfillstyle(SOLID_FILL,BLUE);
 line(80+bc,225,130+bc,225);
    line(80+bc,270,80+bc,270);
    line(80+bc,270,130+bc,270);
    line(130+bc,225,130+bc,270);
    floodfill(81+bc,235,WHITE);
    }
    bc=0;



setfillstyle(SOLID_FILL,YELLOW);
    line(130,225,180,225);
    line(130,225,130,270);
    line(80,270,180,270);
    line(180,225,180,270);
    floodfill(131,235,WHITE);

    for(cd=0;cd<4;cd++)
    {
        de+=100;
         setfillstyle(SOLID_FILL,YELLOW);
          line(130+de,225,180+de,225);
    line(130+de,225,130+de,270);
    line(80+de,270,180+de,270);
    line(180+de,225,180+de,270);
    floodfill(131+de,235,WHITE);
    }
de=0;

        setfillstyle(SOLID_FILL,YELLOW);
    line(80,270,130,270);
    line(80,315,80,315);
    line(80,315,130,315);
    line(130,270,130,315);
    floodfill(81,280,WHITE);
    for(ef=0;ef<4;ef++)
    {
        fg+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+fg,270,130+fg,270);
    line(80+fg,315,80+fg,315);
    line(80+fg,315,130+fg,315);
    line(130+fg,270,130+fg,315);
    floodfill(81+fg,280,WHITE);
    }
fg=0;

setfillstyle(SOLID_FILL,BLUE);
    line(130,270,180,270);
    line(130,270,130,315);
    line(80,315,180,315);
    line(180,270,180,315);
    floodfill(131,280,WHITE);

    for(gh=0;gh<4;gh++)
    {
        hi+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+hi,270,180+hi,270);
    line(130+hi,270,130+hi,315);
    line(80+hi,315,180+hi,315);
    line(180+hi,270,180+hi,315);
    floodfill(131+hi,280,WHITE);
    }
    hi=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(80,315,130,315);
    line(80,360,80,360);
    line(80,360,130,360);
    line(130,315,130,360);
    floodfill(81,325,WHITE);
    for(ij=0;ij<4;ij++)
    {
        jk+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+jk,315,130+jk,315);
    line(80+jk,360,80+jk,360);
    line(80+jk,360,130+jk,360);
    line(130+jk,315,130+jk,360);
    floodfill(81+jk,325,WHITE);
    }
    jk=0;


    setfillstyle(SOLID_FILL,YELLOW);
    line(130,315,180,315);
    line(130,315,130,360);
    line(80,360,180,360);
    line(180,315,180,360);
    floodfill(131,325,WHITE);

    for(kl=0;kl<4;kl++)
    {
        lm+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+lm,315,180+lm,315);
    line(130+lm,315,130+lm,360);
    line(80+lm,360,180+lm,360);
    line(180+lm,315,180+lm,360);
    floodfill(131+lm,325,WHITE);
    }
lm=0;


     setfillstyle(SOLID_FILL,YELLOW);
    line(80,360,130,360);
    line(80,405,80,405);
    line(80,405,130,405);
    line(130,360,130,405);
    floodfill(81,370,WHITE);
    for(mn=0;mn<4;mn++)
    {
        no+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+no,360,130+no,360);
    line(80+no,405,80+no,405);
    line(80+no,405,130+no,405);
    line(130+no,360,130+no,405);
    floodfill(81+no,370,WHITE);
    }
no=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(130,360,180,360);
    line(130,360,130,405);
    line(80,405,180,405);
    line(180,360,180,405);
    floodfill(131,370,WHITE);

    for(op=0;op<4;op++)
    {
        pq+=100;
         setfillstyle(SOLID_FILL,BLUE);
         line(130+pq,360,180+pq,360);
    line(130+pq,360,130+pq,405);
    line(80+pq,405,180+pq,405);
    line(180+pq,360,180+pq,405);
    floodfill(131+pq,370,WHITE);
    }
pq=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(80,405,130,405);
    line(80,450,80,450);
    line(80,450,130,450);
    line(130,405,130,450);
    floodfill(81,415,WHITE);
    for(qr=0;qr<4;qr++)
    {
    rs+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+rs,405,130+rs,405);
    line(80+rs,450,80+rs,450);
    line(80+rs,450,130+rs,450);
    line(130+rs,405,130+rs,450);
    floodfill(81+rs,415,WHITE);
    }
    rs=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,405,180,405);
    line(130,405,130,450);
    line(130,450,180,450);
    line(180,405,180,450);
    floodfill(131,415,WHITE);

    for(st=0;st<4;st++)
    {
        tu+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+tu,405,180+tu,405);
    line(130+tu,405,130+tu,450);
    line(130+tu,450,180+tu,450);
    line(180+tu,405,180+tu,450);
    floodfill(131+tu,415,WHITE);
    }
    tu=0;










    ////////////////numbers/////////////




outtextxy(103,420,"1");  ///1st line
outtextxy(153,420,"2");
outtextxy(203,420,"3");
outtextxy(253,420,"4");
outtextxy(303,420,"5");
outtextxy(353,420,"6");
outtextxy(403,420,"7");
outtextxy(453,420,"8");
outtextxy(503,420,"9");
outtextxy(553,420,"10");


outtextxy(103,375,"20");  ///2nd line
outtextxy(153,375,"19");
outtextxy(203,375,"18");
outtextxy(253,375,"17");
outtextxy(303,375,"16");
outtextxy(353,375,"15");
outtextxy(403,375,"14");
outtextxy(453,375,"13");
outtextxy(503,375,"12");
outtextxy(553,375,"11");


outtextxy(103,335,"21");  ///3rd line
outtextxy(153,335,"22");
outtextxy(203,335,"23");
outtextxy(253,335,"24");
outtextxy(303,335,"25");
outtextxy(353,335,"26");
outtextxy(403,335,"27");
outtextxy(453,335,"28");
outtextxy(503,335,"29");
outtextxy(553,335,"30");



outtextxy(103,290,"40");  ///4th line
outtextxy(153,290,"39");
outtextxy(203,290,"38");
outtextxy(253,290,"37");
outtextxy(303,290,"36");
outtextxy(353,290,"35");
outtextxy(403,290,"34");
outtextxy(453,290,"33");
outtextxy(503,290,"32");
outtextxy(553,290,"31");


outtextxy(103,245,"41");  ///5th line
outtextxy(153,245,"42");
outtextxy(203,245,"43");
outtextxy(253,245,"44");
outtextxy(303,245,"45");
outtextxy(353,245,"46");
outtextxy(403,245,"47");
outtextxy(453,245,"48");
outtextxy(503,245,"49");
outtextxy(553,245,"50");


outtextxy(103,200,"60");  ///6th line
outtextxy(153,200,"59");
outtextxy(203,200,"58");
outtextxy(253,200,"57");
outtextxy(303,200,"56");
outtextxy(353,200,"55");
outtextxy(403,200,"54");
outtextxy(453,200,"53");
outtextxy(503,200,"52");
outtextxy(553,200,"51");


outtextxy(103,155,"61");  ///7th line
outtextxy(153,155,"62");
outtextxy(203,155,"63");
outtextxy(253,155,"64");
outtextxy(303,155,"65");
outtextxy(353,155,"66");
outtextxy(403,155,"67");
outtextxy(453,155,"68");
outtextxy(503,155,"69");
outtextxy(553,155,"70");


outtextxy(103,110,"80");  ///8th line
outtextxy(153,110,"79");
outtextxy(203,110,"78");
outtextxy(253,110,"77");
outtextxy(303,110,"76");
outtextxy(353,110,"75");
outtextxy(403,110,"74");
outtextxy(453,110,"73");
outtextxy(503,110,"72");
outtextxy(553,110,"71");


outtextxy(103,65,"81");  ///9th line
outtextxy(153,65,"82");
outtextxy(203,65,"83");
outtextxy(253,65,"84");
outtextxy(303,65,"85");
outtextxy(353,65,"86");
outtextxy(403,65,"87");
outtextxy(453,65,"88");
outtextxy(503,65,"89");
outtextxy(553,65,"90");


outtextxy(103,20,"100");  ///10th line
outtextxy(153,20,"99");
outtextxy(203,20,"98");
outtextxy(253,20,"97");
outtextxy(303,20,"96");
outtextxy(353,20,"95");
outtextxy(403,20,"94");
outtextxy(453,20,"93");
outtextxy(503,20,"92");
outtextxy(553,20,"91");










////////////////snakes//////
setcolor(RED);
setlinestyle(0,0,5);
arc(100,100,320,70,50);
circle(115,53,5);
arc(154,179,110,220,50);




setcolor(RED);
setlinestyle(0,0,5);
arc(250,250,320,70,50);
circle(265,203,5);
arc(304,329,110,280,50);



setcolor(RED);
setlinestyle(0,0,5);

 arc(400,180,320,80,100);
 circle(415,80,5);
    arc(509,338,110,233,100);





    ////////ladders///////




setcolor(GREEN);
setlinestyle(0,0,5);


line(185,40,285,175);
line(215,25,315,160);
line(210,67,230,52);
line(240,110,260,92);
line(270,153,295,132);

setcolor(GREEN);
setlinestyle(0,0,5);

line(85,265,185,400);
line(115,260,215,385);
line(110,302,130,277);
line(140,345,160,317);
line(170,387,195,357);

setcolor(GREEN);
setlinestyle(0,0,5);


line(533,170,537,440);
line(572,170,577,440);
line(535,230,575,232);
line(535,320,575,322);
line(535,410,575,412);



line(383,110,387,250);
line(418,110,422,250);
line(383,140,418,144);
line(383,210,418,214);






setfillstyle(SOLID_FILL,RED);
floodfill(1 , 1,WHITE);




                    ///////////////end///////////////









              setfillstyle(SOLID_FILL,BLUE);
setcolor(BLUE);
line(15,120,65,120);
line(15,120,15,165);
line(65,120,65,165);
line(15,165,65,165);
              setcolor(WHITE);
circle(25,127,3);
circle(55,158,3);
circle(55,127,3);
circle(25,158,3);



   ////////////////////////////////////////////////////////////////////player//////////////////////////////////////////




if(y2==550 && y1==423)
   {
       y1=378;
       y2=600;
   }

///////////here
if(y1==378) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }


    if(y1==423 && y2!=600)
    {


      y2=y2+50*chh;
    }
 if(chh==2 && y2==600)
    {
        y1=378;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=378;
        y2=500;
    }
if(chh==3 && y2==600)
    {
        y1=378;
        y2=550;
    }

    if(chh==4 && y2==600)
    {
        y1=378;
        y2=550;
    }
    if(chh==4 && y2==650)
    {
        y1=378;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=378;
        y2=450;
    }
    if(chh==5 && y2==600)
    {
        y1=378;
        y2=550;
    }
    if(chh==5 && y2==650)
    {
        y1=378;
        y2=500;
    }
    if(chh==5 && y2==700)
    {
        y1=378;
        y2=450;
    }
    if(chh==5 && y2==750)
    {
        y1=378;
        y2=400;
    }

                       ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==378)
   {
       y1=333;
       y2=50;
   }
if(y1==333) //&& y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=333;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=333;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=333;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=330;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=333;
        y2=100;
    }
    if(chh==4 && y2==50)
    {
        y1=333;
        y2=100;
    }
    if(chh==4 && y2==0)
    {
        y1=333;
        y2=150;
    }
    if(chh==4 && y2==-50)
    {
        y1=333;
        y2=200;
    }
    if(chh==4 && y2==-100)
    {
        y1=333;
        y2=250;
    }
    if(chh==5 && y2==50)
    {
        y1=333;
        y2=100;
    }
    if(chh==5 && y2==0)
    {
        y1=333;
        y2=150;
    }
    if(chh==5 && y2==-50)
    {
        y1=333;
        y2=200;
    }
     if(chh==5 && y2==-100)
    {
        y1=333;
        y2=250;
    }
if(y2==550+(50*chh) && y1==333)
   {
       y1=288;
       y2=600;
   }

///////////here
if(y1==288) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }



 if(chh==2 && y2==600)
    {
        y1=288;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=288;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=288;
        y2=500;
    }

    if(chh==4 && y2==650)
    {
        y1=288;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=288;
        y2=450;
    }
    if(chh==4 && y2==750)
    {
        y1=288;
        y2=400;
    }
    if(chh==5 && y2==600)
    {
        y1=288;
        y2=550;
    }
    if(chh==5 && y2==650)
    {
        y1=288;
        y2=500;
    }
    if(chh==5 && y2==700)
    {
        y1=288;
        y2=450;
    }
    if(chh==5 && y2==750)
    {
        y1=288;
        y2=400;
    }
  ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==288)
   {
       y1=243;
       y2=50;
   }
if(y1==243 && y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=243;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=243;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=243;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=243;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=243;
        y2=100;
    }
    if(chh==4 && y2==50)
    {
        y1=243;
        y2=100;
    }
    if(chh==4 && y2==0)
    {
        y1=243;
        y2=150;
    }
    if(chh==4 && y2==-50)
    {
        y1=243;
        y2=200;
    }
    if(chh==4 && y2==-100)
    {
        y1=243;
        y2=250;
    }
    if(chh==5 && y2==50)
    {
        y1=243;
        y2=100;
    }
    if(chh==5 && y2==0)
    {
        y1=243;
        y2=150;
    }
    if(chh==5 && y2==-50)
    {
        y1=243;
        y2=200;
    }
     if(chh==5 && y2==-100)
    {
        y1=243;
        y2=250;
    }


if(y2==550+(50*chh) && y1==243)
   {
       y1=198;
       y2=600;
   }

///////////here
if(y1==198) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }



 if(chh==2 && y2==600)
    {
        y1=198;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=198;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=198;
        y2=500;
    }

    if(chh==4 && y2==650)
    {
        y1=198;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=198;
        y2=450;
    }
    if(chh==4 && y2==750)
    {
        y1=198;
        y2=400;
    }
    if(chh==5 && y2==600)
    {
        y1=198;
        y2=550;
    }
    if(chh==5 && y2==650)
    {
        y1=198;
        y2=500;
    }
    if(chh==5 && y2==700)
    {
        y1=198;
        y2=450;
    }
    if(chh==5 && y2==750)
    {
        y1=198;
        y2=400;
    }


  ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==198)
   {
       y1=153;
       y2=50;
   }
if(y1==153 && y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=153;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=153;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=153;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=153;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=153;
        y2=100;
    }
    if(chh==4 && y2==50)
    {
        y1=153;
        y2=100;
    }
    if(chh==4 && y2==0)
    {
        y1=153;
        y2=150;
    }
    if(chh==4 && y2==-50)
    {
        y1=153;
        y2=200;
    }
    if(chh==4 && y2==-100)
    {
        y1=153;
        y2=250;
    }
    if(chh==5 && y2==50)
    {
        y1=153;
        y2=100;
    }
    if(chh==5 && y2==0)
    {
        y1=153;
        y2=150;
    }
    if(chh==5 && y2==-50)
    {
        y1=153;
        y2=200;
    }
     if(chh==5 && y2==-100)
    {
        y1=153;
        y2=250;
    }

if(y2==550+(50*chh) && y1==153)
   {
       y1=108;
       y2=600;
   }

///////////here
if(y1==108) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }



 if(chh==2 && y2==600)
    {
        y1=108;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=108;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=108;
        y2=500;
    }

    if(chh==4 && y2==650)
    {
        y1=108;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=108;
        y2=450;
    }
    if(chh==4 && y2==750)
    {
        y1=108;
        y2=400;
    }
    if(chh==5 && y2==600)
    {
        y1=108;
        y2=550;
    }
    if(chh==5 && y2==650)
    {
        y1=108;
        y2=500;
    }
    if(chh==5 && y2==700)
    {
        y1=108;
        y2=450;
    }
    if(chh==5 && y2==750)
    {
        y1=108;
        y2=400;
    }


  ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==108)
   {
       y1=63;
       y2=50;
   }
if(y1==63 && y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=63;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=63;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=63;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=63;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=63;
        y2=100;
    }
    if(chh==4 && y2==50)
    {
        y1=63;
        y2=100;
    }
    if(chh==4 && y2==0)
    {
        y1=63;
        y2=150;
    }
    if(chh==4 && y2==-50)
    {
        y1=63;
        y2=200;
    }
    if(chh==4 && y2==-100)
    {
        y1=63;
        y2=250;
    }
    if(chh==5 && y2==50)
    {
        y1=63;
        y2=100;
    }
    if(chh==5 && y2==0)
    {
        y1=63;
        y2=150;
    }
    if(chh==5 && y2==-50)
    {
        y1=63;
        y2=200;
    }
     if(chh==5 && y2==-100)
    {
        y1=63;
        y2=250;
    }


               if(y2==550+(50*chh) && y1==63)
   {
       y1=18;
       y2=600;
   }




if(y1==18 && y2>250) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }

if(y1==18 && y2<100)
{
    y2=100;

}

if(chh==2 && y2==600)
    {
        y1=18;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=18;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=18;
        y2=500;
    }

    if(chh==4 && y2==650)
    {
        y1=18;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=18;
        y2=450;
    }
    if(chh==4 && y2==750)
    {
        y1=18;
        y2=400;
    }
    if(chh==5 && y2==600)
    {
        y1=108;
        y2=550;
    }
    if(chh==5 && y2==650)
    {
        y1=108;
        y2=500;
    }
    if(chh==5 && y2==700)
    {
        y1=108;
        y2=450;
    }
    if(chh==5 && y2==750)
    {
        y1=108;
        y2=400;
    }




  if(y1==423 && y2==550)
     {
         y1=153;
         y2=550;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }




      if(y1==378 && y2==200)
     {
         y1=243;
         y2=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }


     if(y1==243 && y2==400)
     {
         y1=108;
         y2=400;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }
      if(y1==153 && y2==300)
     {
         y1=18;
         y2=200;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }

      if(y1==63 && y2==100)
     {
         y1=198;
         y2=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(y1==198 && y2==250)
     {
         y1=378;
         y2=300;
           settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(y1==63 && y2==400)
     {
         y1=423;
         y2=450;  settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }




settextstyle(0,0,7);
    setcolor(GREEN);
    circle(y2,y1,17);




              //player1(&chh);












       break;

case 5:cleardevice();




              /////////////start////////




initgraph(&gd, &gm, NULL);
    line(0,0,0,700);
    for(i=0;i<11;i++)
    {
        j+=50;
        line(30+j,0,30+j,450);
    }
    j=0;
    line(0,0,700,0);
    for(g=0;g<11;g++)
    {
        k+=45;
        line(80,0+k,580,0+k);

    }
         k=0;





///////////////new for clr////////


setfillstyle(SOLID_FILL,YELLOW);

    line(80,0,130,0);
    line(80,0,80,45);
    line(80,45,130,45);
    line(130,0,130,45);
    floodfill(81,10,WHITE);
    for(y=0;y<4;y++)
    {
        a+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+a,0,130+a,0);
    line(80+a,0,80+a,45);
    line(80+a,45,130+a,45);
    line(130+a,0,130+a,45);
    floodfill(81+a,10,WHITE);
    }
    a=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(130,0,180,0);
    line(130,0,130,45);
    line(80,45,180,45);
    line(180,0,180,45);
    floodfill(131,10,WHITE);

    for(z=0;z<4;z++)
    {
        b+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+b,0,180+b,0);
    line(130+b,0,130+b,45);
    line(180+b,45,180+b,45);
    line(180+b,0,180+b,45);
    floodfill(131+b,10,WHITE);
    }
    b=0;

    setfillstyle(SOLID_FILL,BLUE);
    line(80,45,130,45);
    line(80,45,80,90);
    line(80,90,130,90);
    line(130,45,130,90);
    floodfill(81,55,WHITE);
    for(e=0;e<4;e++)
    {
        c+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+c,45,130+c,45);
    line(80+c,45,80+c,90);
    line(80+c,90,130+c,90);
    line(130+c,45,130+c,90);
    floodfill(81+c,55,WHITE);
    }
c=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,45,180,45);
    line(130,45,130,90);
    line(80,90,180,90);
    line(180,45,180,90);
    floodfill(131,50,WHITE);

    for(f=0;f<4;f++)
    {
        d+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+d,45,180+d,45);
    line(130+d,45,130+d,90);
    line(80+d,90,180+d,90);
    line(180+d,45,180+d,90);
    floodfill(131+d,55,WHITE);

    }
d=0;


        setfillstyle(SOLID_FILL,YELLOW);
    line(80,90,130,90);
    line(80,135,80,135);
    line(80,135,130,135);
    line(130,90,130,135);
    floodfill(81,100,WHITE);
    for(m=0;m<4;m++)
    {
        h+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+h,90,130+h,90);
    line(80+h,135,80+h,135);
    line(80+h,135,130+h,135);
    line(130+h,90,130+h,135);
    floodfill(81+h,100,WHITE);
    }

h=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(130,90,180,90);
    line(130,90,130,135);
    line(80,135,180,135);
    line(180,90,180,135);
    floodfill(131,100,WHITE);

    for(n=0;n<4;n++)
    {
        l+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+l,90,180+l,90);
    line(130+l,90,130+l,135);
    line(80+l,135,180+l,135);
    line(180+l,90,180+l,135);
    floodfill(131+l,100,WHITE);

    }
l=0;


        setfillstyle(SOLID_FILL,BLUE);
    line(80,135,130,135);
    line(80,180,80,180);
    line(80,180,130,180);
    line(130,135,130,180);
    floodfill(81,145,WHITE);
    for(o=0;o<4;o++)
    {
        p+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+p,135,130+p,135);
    line(80+p,180,80+p,180);
    line(80+p,180,130+p,180);
    line(130+p,135,130+p,180);
    floodfill(81+p,145,WHITE);
    }
p=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,135,180,135);
    line(130,135,130,180);
    line(80,180,180,180);
    line(180,135,180,180);
    floodfill(131,145,WHITE);

    for(q=0;q<4;q++)
    {
        r+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+r,135,180+r,135);
    line(130+r,135,130+r,180);
    line(80+r,180,180+r,180);
    line(180+r,135,180+r,180);
    floodfill(131+r,145,WHITE);

    }
r=0;

setfillstyle(SOLID_FILL,YELLOW);
    line(80,180,130,180);
    line(80,225,80,225);
    line(80,225,130,225);
    line(130,180,130,225);
    floodfill(81,190,WHITE);
    for(s=0;s<4;s++)
    {
        t+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+t,180,130+t,180);
    line(80+t,225,80+t,225);
    line(80+t,225,130+t,225);
    line(130+t,180,130+t,225);
    floodfill(81+t,190,WHITE);
    }
t=0;

 setfillstyle(SOLID_FILL,BLUE);
    line(130,180,180,180);
    line(130,180,130,225);
    line(80,225,180,225);
    line(180,180,180,225);
    floodfill(131,190,WHITE);

    for(u=0;u<4;u++)
    {
        v+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+v,180,180+v,180);
    line(130+v,180,130+v,225);
    line(80+v,225,180+v,225);
    line(180+v,180,180+v,225);
    floodfill(131+v,190,WHITE);
    }

    v=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(80,225,130,225);
    line(80,270,80,270);
    line(80,270,130,270);
    line(130,225,130,270);
    floodfill(81,235,WHITE);
    for(ab=0;ab<4;ab++)
    {
        bc+=100;
setfillstyle(SOLID_FILL,BLUE);
 line(80+bc,225,130+bc,225);
    line(80+bc,270,80+bc,270);
    line(80+bc,270,130+bc,270);
    line(130+bc,225,130+bc,270);
    floodfill(81+bc,235,WHITE);
    }
    bc=0;



setfillstyle(SOLID_FILL,YELLOW);
    line(130,225,180,225);
    line(130,225,130,270);
    line(80,270,180,270);
    line(180,225,180,270);
    floodfill(131,235,WHITE);

    for(cd=0;cd<4;cd++)
    {
        de+=100;
         setfillstyle(SOLID_FILL,YELLOW);
          line(130+de,225,180+de,225);
    line(130+de,225,130+de,270);
    line(80+de,270,180+de,270);
    line(180+de,225,180+de,270);
    floodfill(131+de,235,WHITE);
    }
de=0;

        setfillstyle(SOLID_FILL,YELLOW);
    line(80,270,130,270);
    line(80,315,80,315);
    line(80,315,130,315);
    line(130,270,130,315);
    floodfill(81,280,WHITE);
    for(ef=0;ef<4;ef++)
    {
        fg+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+fg,270,130+fg,270);
    line(80+fg,315,80+fg,315);
    line(80+fg,315,130+fg,315);
    line(130+fg,270,130+fg,315);
    floodfill(81+fg,280,WHITE);
    }
fg=0;

setfillstyle(SOLID_FILL,BLUE);
    line(130,270,180,270);
    line(130,270,130,315);
    line(80,315,180,315);
    line(180,270,180,315);
    floodfill(131,280,WHITE);

    for(gh=0;gh<4;gh++)
    {
        hi+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+hi,270,180+hi,270);
    line(130+hi,270,130+hi,315);
    line(80+hi,315,180+hi,315);
    line(180+hi,270,180+hi,315);
    floodfill(131+hi,280,WHITE);
    }
    hi=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(80,315,130,315);
    line(80,360,80,360);
    line(80,360,130,360);
    line(130,315,130,360);
    floodfill(81,325,WHITE);
    for(ij=0;ij<4;ij++)
    {
        jk+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+jk,315,130+jk,315);
    line(80+jk,360,80+jk,360);
    line(80+jk,360,130+jk,360);
    line(130+jk,315,130+jk,360);
    floodfill(81+jk,325,WHITE);
    }
    jk=0;


    setfillstyle(SOLID_FILL,YELLOW);
    line(130,315,180,315);
    line(130,315,130,360);
    line(80,360,180,360);
    line(180,315,180,360);
    floodfill(131,325,WHITE);

    for(kl=0;kl<4;kl++)
    {
        lm+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+lm,315,180+lm,315);
    line(130+lm,315,130+lm,360);
    line(80+lm,360,180+lm,360);
    line(180+lm,315,180+lm,360);
    floodfill(131+lm,325,WHITE);
    }
lm=0;


     setfillstyle(SOLID_FILL,YELLOW);
    line(80,360,130,360);
    line(80,405,80,405);
    line(80,405,130,405);
    line(130,360,130,405);
    floodfill(81,370,WHITE);
    for(mn=0;mn<4;mn++)
    {
        no+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+no,360,130+no,360);
    line(80+no,405,80+no,405);
    line(80+no,405,130+no,405);
    line(130+no,360,130+no,405);
    floodfill(81+no,370,WHITE);
    }
no=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(130,360,180,360);
    line(130,360,130,405);
    line(80,405,180,405);
    line(180,360,180,405);
    floodfill(131,370,WHITE);

    for(op=0;op<4;op++)
    {
        pq+=100;
         setfillstyle(SOLID_FILL,BLUE);
         line(130+pq,360,180+pq,360);
    line(130+pq,360,130+pq,405);
    line(80+pq,405,180+pq,405);
    line(180+pq,360,180+pq,405);
    floodfill(131+pq,370,WHITE);
    }
pq=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(80,405,130,405);
    line(80,450,80,450);
    line(80,450,130,450);
    line(130,405,130,450);
    floodfill(81,415,WHITE);
    for(qr=0;qr<4;qr++)
    {
    rs+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+rs,405,130+rs,405);
    line(80+rs,450,80+rs,450);
    line(80+rs,450,130+rs,450);
    line(130+rs,405,130+rs,450);
    floodfill(81+rs,415,WHITE);
    }
    rs=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,405,180,405);
    line(130,405,130,450);
    line(130,450,180,450);
    line(180,405,180,450);
    floodfill(131,415,WHITE);

    for(st=0;st<4;st++)
    {
        tu+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+tu,405,180+tu,405);
    line(130+tu,405,130+tu,450);
    line(130+tu,450,180+tu,450);
    line(180+tu,405,180+tu,450);
    floodfill(131+tu,415,WHITE);
    }
    tu=0;










    ////////////////numbers/////////////




outtextxy(103,420,"1");  ///1st line
outtextxy(153,420,"2");
outtextxy(203,420,"3");
outtextxy(253,420,"4");
outtextxy(303,420,"5");
outtextxy(353,420,"6");
outtextxy(403,420,"7");
outtextxy(453,420,"8");
outtextxy(503,420,"9");
outtextxy(553,420,"10");


outtextxy(103,375,"20");  ///2nd line
outtextxy(153,375,"19");
outtextxy(203,375,"18");
outtextxy(253,375,"17");
outtextxy(303,375,"16");
outtextxy(353,375,"15");
outtextxy(403,375,"14");
outtextxy(453,375,"13");
outtextxy(503,375,"12");
outtextxy(553,375,"11");


outtextxy(103,335,"21");  ///3rd line
outtextxy(153,335,"22");
outtextxy(203,335,"23");
outtextxy(253,335,"24");
outtextxy(303,335,"25");
outtextxy(353,335,"26");
outtextxy(403,335,"27");
outtextxy(453,335,"28");
outtextxy(503,335,"29");
outtextxy(553,335,"30");



outtextxy(103,290,"40");  ///4th line
outtextxy(153,290,"39");
outtextxy(203,290,"38");
outtextxy(253,290,"37");
outtextxy(303,290,"36");
outtextxy(353,290,"35");
outtextxy(403,290,"34");
outtextxy(453,290,"33");
outtextxy(503,290,"32");
outtextxy(553,290,"31");


outtextxy(103,245,"41");  ///5th line
outtextxy(153,245,"42");
outtextxy(203,245,"43");
outtextxy(253,245,"44");
outtextxy(303,245,"45");
outtextxy(353,245,"46");
outtextxy(403,245,"47");
outtextxy(453,245,"48");
outtextxy(503,245,"49");
outtextxy(553,245,"50");


outtextxy(103,200,"60");  ///6th line
outtextxy(153,200,"59");
outtextxy(203,200,"58");
outtextxy(253,200,"57");
outtextxy(303,200,"56");
outtextxy(353,200,"55");
outtextxy(403,200,"54");
outtextxy(453,200,"53");
outtextxy(503,200,"52");
outtextxy(553,200,"51");


outtextxy(103,155,"61");  ///7th line
outtextxy(153,155,"62");
outtextxy(203,155,"63");
outtextxy(253,155,"64");
outtextxy(303,155,"65");
outtextxy(353,155,"66");
outtextxy(403,155,"67");
outtextxy(453,155,"68");
outtextxy(503,155,"69");
outtextxy(553,155,"70");


outtextxy(103,110,"80");  ///8th line
outtextxy(153,110,"79");
outtextxy(203,110,"78");
outtextxy(253,110,"77");
outtextxy(303,110,"76");
outtextxy(353,110,"75");
outtextxy(403,110,"74");
outtextxy(453,110,"73");
outtextxy(503,110,"72");
outtextxy(553,110,"71");


outtextxy(103,65,"81");  ///9th line
outtextxy(153,65,"82");
outtextxy(203,65,"83");
outtextxy(253,65,"84");
outtextxy(303,65,"85");
outtextxy(353,65,"86");
outtextxy(403,65,"87");
outtextxy(453,65,"88");
outtextxy(503,65,"89");
outtextxy(553,65,"90");


outtextxy(103,20,"100");  ///10th line
outtextxy(153,20,"99");
outtextxy(203,20,"98");
outtextxy(253,20,"97");
outtextxy(303,20,"96");
outtextxy(353,20,"95");
outtextxy(403,20,"94");
outtextxy(453,20,"93");
outtextxy(503,20,"92");
outtextxy(553,20,"91");










////////////////snakes//////
setcolor(RED);
setlinestyle(0,0,5);
arc(100,100,320,70,50);
circle(115,53,5);
arc(154,179,110,220,50);




setcolor(RED);
setlinestyle(0,0,5);
arc(250,250,320,70,50);
circle(265,203,5);
arc(304,329,110,280,50);



setcolor(RED);
setlinestyle(0,0,5);

 arc(400,180,320,80,100);
 circle(415,80,5);
    arc(509,338,110,233,100);





    ////////ladders///////




setcolor(GREEN);
setlinestyle(0,0,5);


line(185,40,285,175);
line(215,25,315,160);
line(210,67,230,52);
line(240,110,260,92);
line(270,153,295,132);

setcolor(GREEN);
setlinestyle(0,0,5);

line(85,265,185,400);
line(115,260,215,385);
line(110,302,130,277);
line(140,345,160,317);
line(170,387,195,357);

setcolor(GREEN);
setlinestyle(0,0,5);


line(533,170,537,440);
line(572,170,577,440);
line(535,230,575,232);
line(535,320,575,322);
line(535,410,575,412);



line(383,110,387,250);
line(418,110,422,250);
line(383,140,418,144);
line(383,210,418,214);






setfillstyle(SOLID_FILL,RED);
floodfill(1 , 1,WHITE);




                    ///////////////end///////////////







              setfillstyle(SOLID_FILL,BLUE);
setcolor(BLUE);
line(15,120,65,120);
line(15,120,15,165);
line(65,120,65,165);
line(15,165,65,165);
              setcolor(WHITE);
circle(25,127,3);
circle(55,158,3);
circle(55,127,3);
circle(40,143,3);
circle(25,158,3);



   ////////////////////////////////////////////////////////////////////player//////////////////////////////////////////




if(y2==550 && y1==423)
   {
       y1=378;
       y2=600;
   }

///////////here
if(y1==378) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }


    if(y1==423 && y2!=600)
    {


      y2=y2+50*chh;
    }
 if(chh==2 && y2==600)
    {
        y1=378;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=378;
        y2=500;
    }
if(chh==3 && y2==600)
    {
        y1=378;
        y2=550;
    }

    if(chh==4 && y2==600)
    {
        y1=378;
        y2=550;
    }
    if(chh==4 && y2==650)
    {
        y1=378;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=378;
        y2=450;
    }
    if(chh==5 && y2==600)
    {
        y1=378;
        y2=550;
    }
    if(chh==5 && y2==650)
    {
        y1=378;
        y2=500;
    }
    if(chh==5 && y2==700)
    {
        y1=378;
        y2=450;
    }
    if(chh==5 && y2==750)
    {
        y1=378;
        y2=400;
    }
    if(chh==6 && y2==600)
    {
        y1=378;
        y2=550;
    }
     if(chh==6 && y2==650)
    {
        y1=378;
        y2=500;
    }
    if(chh==6 && y2==700)
    {
        y1=378;
        y2=450;
    }
    if(chh==6 && y2==750)
    {
        y1=378;
        y2=400;
    }

if(chh==6 && y2==800)
    {
        y1=378;
        y2=350;
    }


                       ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==378)
   {
       y1=333;
       y2=50;
   }
if(y1==333) //&& y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=333;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=333;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=333;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=330;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=333;
        y2=100;
    }
    if(chh==4 && y2==50)
    {
        y1=333;
        y2=100;
    }
    if(chh==4 && y2==0)
    {
        y1=333;
        y2=150;
    }
    if(chh==4 && y2==-50)
    {
        y1=333;
        y2=200;
    }
    if(chh==4 && y2==-100)
    {
        y1=333;
        y2=250;
    }
    if(chh==5 && y2==50)
    {
        y1=333;
        y2=100;
    }
    if(chh==5 && y2==0)
    {
        y1=333;
        y2=150;
    }
    if(chh==5 && y2==-50)
    {
        y1=333;
        y2=200;
    }
     if(chh==5 && y2==-100)
    {
        y1=333;
        y2=250;
    }
    if(chh==6 && y2==50)
    {
        y1=333;
        y2=100;
    }
     if(chh==6 && y2==0)
    {
        y1=333;
        y2=150;
    }
    if(chh==6 && y2==-50)
    {
        y1=333;
        y2=200;
    }
    if(chh==6 && y2==-100)
    {
        y1=333;
        y2=250;
    }

if(chh==6 && y2==-150)
    {
        y1=333;
        y2=300;
    }


                /////////////////////////////////////////////////from here

if(y2==550+(50*chh) && y1==333)
   {
       y1=288;
       y2=600;
   }

///////////here
if(y1==288) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }



 if(chh==2 && y2==600)
    {
        y1=288;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=288;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=288;
        y2=500;
    }

    if(chh==4 && y2==650)
    {
        y1=288;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=288;
        y2=450;
    }
    if(chh==4 && y2==750)
    {
        y1=288;
        y2=400;
    }
    if(chh==5 && y2==600)
    {
        y1=288;
        y2=550;
    }
    if(chh==5 && y2==650)
    {
        y1=288;
        y2=500;
    }
    if(chh==5 && y2==700)
    {
        y1=288;
        y2=450;
    }
    if(chh==5 && y2==750)
    {
        y1=288;
        y2=400;
    }
    if(chh==6 && y2==600)
    {
        y1=288;
        y2=550;
    }
     if(chh==6 && y2==650)
    {
        y1=288;
        y2=500;
    }
    if(chh==6 && y2==700)
    {
        y1=288;
        y2=450;
    }
    if(chh==6 && y2==750)
    {
        y1=288;
        y2=400;
    }

if(chh==6 && y2==800)
    {
        y1=288;
        y2=350;
    }



  ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==288)
   {
       y1=243;
       y2=50;
   }
if(y1==243 && y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=243;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=243;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=243;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=243;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=243;
        y2=100;
    }
    if(chh==4 && y2==50)
    {
        y1=243;
        y2=100;
    }
    if(chh==4 && y2==0)
    {
        y1=243;
        y2=150;
    }
    if(chh==4 && y2==-50)
    {
        y1=243;
        y2=200;
    }
    if(chh==4 && y2==-100)
    {
        y1=243;
        y2=250;
    }
    if(chh==5 && y2==50)
    {
        y1=243;
        y2=100;
    }
    if(chh==5 && y2==0)
    {
        y1=243;
        y2=150;
    }
    if(chh==5 && y2==-50)
    {
        y1=243;
        y2=200;
    }
     if(chh==5 && y2==-100)
    {
        y1=243;
        y2=250;
    }
    if(chh==6 && y2==50)
    {
        y1=243;
        y2=100;
    }
     if(chh==6 && y2==0)
    {
        y1=243;
        y2=150;
    }
    if(chh==6 && y2==-50)
    {
        y1=243;
        y2=200;
    }
    if(chh==6 && y2==-100)
    {
        y1=243;
        y2=250;
    }

if(chh==6 && y2==-150)
    {
        y1=243;
        y2=300;
    }









                /////////////////////////////////////////////////from here

if(y2==550+(50*chh) && y1==243)
   {
       y1=198;
       y2=600;
   }

///////////here
if(y1==198) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }



 if(chh==2 && y2==600)
    {
        y1=198;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=198;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=198;
        y2=500;
    }

    if(chh==4 && y2==650)
    {
        y1=198;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=198;
        y2=450;
    }
    if(chh==4 && y2==750)
    {
        y1=198;
        y2=400;
    }
    if(chh==5 && y2==600)
    {
        y1=198;
        y2=550;
    }
    if(chh==5 && y2==650)
    {
        y1=198;
        y2=500;
    }
    if(chh==5 && y2==700)
    {
        y1=198;
        y2=450;
    }
    if(chh==5 && y2==750)
    {
        y1=198;
        y2=400;
    }
    if(chh==6 && y2==600)
    {
        y1=198;
        y2=550;
    }
     if(chh==6 && y2==650)
    {
        y1=198;
        y2=500;
    }
    if(chh==6 && y2==700)
    {
        y1=198;
        y2=450;
    }
    if(chh==6 && y2==750)
    {
        y1=198;
        y2=400;
    }

if(chh==6 && y2==800)
    {
        y1=198;
        y2=350;
    }



  ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==198)
   {
       y1=153;
       y2=50;
   }
if(y1==153 && y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=153;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=153;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=153;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=153;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=153;
        y2=100;
    }
    if(chh==4 && y2==50)
    {
        y1=153;
        y2=100;
    }
    if(chh==4 && y2==0)
    {
        y1=153;
        y2=150;
    }
    if(chh==4 && y2==-50)
    {
        y1=153;
        y2=200;
    }
    if(chh==4 && y2==-100)
    {
        y1=153;
        y2=250;
    }
    if(chh==5 && y2==50)
    {
        y1=153;
        y2=100;
    }
    if(chh==5 && y2==0)
    {
        y1=153;
        y2=150;
    }
    if(chh==5 && y2==-50)
    {
        y1=153;
        y2=200;
    }
     if(chh==5 && y2==-100)
    {
        y1=153;
        y2=250;
    }
    if(chh==6 && y2==50)
    {
        y1=153;
        y2=100;
    }
     if(chh==6 && y2==0)
    {
        y1=153;
        y2=150;
    }
    if(chh==6 && y2==-50)
    {
        y1=153;
        y2=200;
    }
    if(chh==6 && y2==-100)
    {
        y1=153;
        y2=250;
    }

if(chh==6 && y2==-150)
    {
        y1=153;
        y2=300;
    }



                /////////////////////////////////////////////////from here

if(y2==550+(50*chh) && y1==153)
   {
       y1=108;
       y2=600;
   }

///////////here
if(y1==108) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }



 if(chh==2 && y2==600)
    {
        y1=108;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=108;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=108;
        y2=500;
    }

    if(chh==4 && y2==650)
    {
        y1=108;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=108;
        y2=450;
    }
    if(chh==4 && y2==750)
    {
        y1=108;
        y2=400;
    }
    if(chh==5 && y2==600)
    {
        y1=108;
        y2=550;
    }
    if(chh==5 && y2==650)
    {
        y1=108;
        y2=500;
    }
    if(chh==5 && y2==700)
    {
        y1=108;
        y2=450;
    }
    if(chh==5 && y2==750)
    {
        y1=108;
        y2=400;
    }
    if(chh==6 && y2==600)
    {
        y1=108;
        y2=550;
    }
     if(chh==6 && y2==650)
    {
        y1=108;
        y2=500;
    }
    if(chh==6 && y2==700)
    {
        y1=108;
        y2=450;
    }
    if(chh==6 && y2==750)
    {
        y1=108;
        y2=400;
    }

if(chh==6 && y2==800)
    {
        y1=108;
        y2=350;
    }



  ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==108)
   {
       y1=63;
       y2=50;
   }
if(y1==63 && y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=63;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=63;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=63;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=63;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=63;
        y2=100;
    }
    if(chh==4 && y2==50)
    {
        y1=63;
        y2=100;
    }
    if(chh==4 && y2==0)
    {
        y1=63;
        y2=150;
    }
    if(chh==4 && y2==-50)
    {
        y1=63;
        y2=200;
    }
    if(chh==4 && y2==-100)
    {
        y1=63;
        y2=250;
    }
    if(chh==5 && y2==50)
    {
        y1=63;
        y2=100;
    }
    if(chh==5 && y2==0)
    {
        y1=63;
        y2=150;
    }
    if(chh==5 && y2==-50)
    {
        y1=63;
        y2=200;
    }
     if(chh==5 && y2==-100)
    {
        y1=63;
        y2=250;
    }
    if(chh==6 && y2==50)
    {
        y1=63;
        y2=100;
    }
     if(chh==6 && y2==0)
    {
        y1=63;
        y2=150;
    }
    if(chh==6 && y2==-50)
    {
        y1=63;
        y2=200;
    }
    if(chh==6 && y2==-100)
    {
        y1=63;
        y2=250;
    }

if(chh==6 && y2==-150)
    {
        y1=63;
        y2=300;
    }
//////////////////////////////////////////////////////////////////////here




               if(y2==550+(50*chh) && y1==63)
   {
       y1=18;
       y2=600;
   }




if(y1==18 && y2>300)///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }

if(y1==18 && y2<100)
{
    y2=100;

}

if(chh==2 && y2==600)
    {
        y1=18;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=18;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=18;
        y2=500;
    }

    if(chh==4 && y2==650)
    {
        y1=18;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=18;
        y2=450;
    }
    if(chh==4 && y2==750)
    {
        y1=18;
        y2=400;
    }
    if(chh==5 && y2==600)
    {
        y1=18;
        y2=550;
    }
    if(chh==5 && y2==650)
    {
        y1=18;
        y2=500;
    }
    if(chh==5 && y2==700)
    {
        y1=18;
        y2=450;
    }
    if(chh==5 && y2==750)
    {
        y1=18;
        y2=400;
    }
    if(chh==6 && y2==600)
    {
        y1=18;
        y2=550;
    }
     if(chh==6 && y2==650)
    {
        y1=18;
        y2=500;
    }
    if(chh==6 && y2==700)
    {
        y1=18;
        y2=450;
    }
    if(chh==6 && y2==750)
    {
        y1=18;
        y2=400;
    }

if(chh==6 && y2==800)
    {
        y1=18;
        y2=350;
    }





  if(y1==423 && y2==550)
     {
         y1=153;
         y2=550;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }




      if(y1==378 && y2==200)
     {
         y1=243;
         y2=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }


     if(y1==243 && y2==400)
     {
         y1=108;
         y2=400;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }
      if(y1==153 && y2==300)
     {
         y1=18;
         y2=200;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }

      if(y1==63 && y2==100)
     {
         y1=198;
         y2=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(y1==198 && y2==250)
     {
         y1=378;
         y2=300;
           settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(y1==63 && y2==400)
     {
         y1=423;
         y2=450;  settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }








settextstyle(0,0,7);
    setcolor(GREEN);
    circle(y2,y1,17);



                               //player1(&chh);









break;


 case 6:cleardevice();




                       /////////////start////////




initgraph(&gd, &gm, NULL);
    line(0,0,0,700);
    for(i=0;i<11;i++)
    {
        j+=50;
        line(30+j,0,30+j,450);
    }
    j=0;
    line(0,0,700,0);
    for(g=0;g<11;g++)
    {
        k+=45;
        line(80,0+k,580,0+k);

    }
         k=0;





///////////////new for clr////////


setfillstyle(SOLID_FILL,YELLOW);

    line(80,0,130,0);
    line(80,0,80,45);
    line(80,45,130,45);
    line(130,0,130,45);
    floodfill(81,10,WHITE);
    for(y=0;y<4;y++)
    {
        a+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+a,0,130+a,0);
    line(80+a,0,80+a,45);
    line(80+a,45,130+a,45);
    line(130+a,0,130+a,45);
    floodfill(81+a,10,WHITE);
    }
    a=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(130,0,180,0);
    line(130,0,130,45);
    line(80,45,180,45);
    line(180,0,180,45);
    floodfill(131,10,WHITE);

    for(z=0;z<4;z++)
    {
        b+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+b,0,180+b,0);
    line(130+b,0,130+b,45);
    line(180+b,45,180+b,45);
    line(180+b,0,180+b,45);
    floodfill(131+b,10,WHITE);
    }
    b=0;

    setfillstyle(SOLID_FILL,BLUE);
    line(80,45,130,45);
    line(80,45,80,90);
    line(80,90,130,90);
    line(130,45,130,90);
    floodfill(81,55,WHITE);
    for(e=0;e<4;e++)
    {
        c+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+c,45,130+c,45);
    line(80+c,45,80+c,90);
    line(80+c,90,130+c,90);
    line(130+c,45,130+c,90);
    floodfill(81+c,55,WHITE);
    }
c=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,45,180,45);
    line(130,45,130,90);
    line(80,90,180,90);
    line(180,45,180,90);
    floodfill(131,50,WHITE);

    for(f=0;f<4;f++)
    {
        d+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+d,45,180+d,45);
    line(130+d,45,130+d,90);
    line(80+d,90,180+d,90);
    line(180+d,45,180+d,90);
    floodfill(131+d,55,WHITE);

    }
d=0;


        setfillstyle(SOLID_FILL,YELLOW);
    line(80,90,130,90);
    line(80,135,80,135);
    line(80,135,130,135);
    line(130,90,130,135);
    floodfill(81,100,WHITE);
    for(m=0;m<4;m++)
    {
        h+=100;
setfillstyle(SOLID_FILL,YELLOW);
    line(80+h,90,130+h,90);
    line(80+h,135,80+h,135);
    line(80+h,135,130+h,135);
    line(130+h,90,130+h,135);
    floodfill(81+h,100,WHITE);
    }

h=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(130,90,180,90);
    line(130,90,130,135);
    line(80,135,180,135);
    line(180,90,180,135);
    floodfill(131,100,WHITE);

    for(n=0;n<4;n++)
    {
        l+=100;
         setfillstyle(SOLID_FILL,BLUE);
    line(130+l,90,180+l,90);
    line(130+l,90,130+l,135);
    line(80+l,135,180+l,135);
    line(180+l,90,180+l,135);
    floodfill(131+l,100,WHITE);

    }
l=0;


        setfillstyle(SOLID_FILL,BLUE);
    line(80,135,130,135);
    line(80,180,80,180);
    line(80,180,130,180);
    line(130,135,130,180);
    floodfill(81,145,WHITE);
    for(o=0;o<4;o++)
    {
        p+=100;
setfillstyle(SOLID_FILL,BLUE);
    line(80+p,135,130+p,135);
    line(80+p,180,80+p,180);
    line(80+p,180,130+p,180);
    line(130+p,135,130+p,180);
    floodfill(81+p,145,WHITE);
    }
p=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,135,180,135);
    line(130,135,130,180);
    line(80,180,180,180);
    line(180,135,180,180);
    floodfill(131,145,WHITE);

    for(q=0;q<4;q++)
    {
        r+=100;
         setfillstyle(SOLID_FILL,YELLOW);
    line(130+r,135,180+r,135);
    line(130+r,135,130+r,180);
    line(80+r,180,180+r,180);
    line(180+r,135,180+r,180);
    floodfill(131+r,145,WHITE);

    }
r=0;

setfillstyle(SOLID_FILL,YELLOW);
    line(80,180,130,180);
    line(80,225,80,225);
    line(80,225,130,225);
    line(130,180,130,225);
    floodfill(81,190,WHITE);
    for(s=0;s<4;s++)
    {
        t+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+t,180,130+t,180);
    line(80+t,225,80+t,225);
    line(80+t,225,130+t,225);
    line(130+t,180,130+t,225);
    floodfill(81+t,190,WHITE);
    }
t=0;

 setfillstyle(SOLID_FILL,BLUE);
    line(130,180,180,180);
    line(130,180,130,225);
    line(80,225,180,225);
    line(180,180,180,225);
    floodfill(131,190,WHITE);

    for(u=0;u<4;u++)
    {
        v+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+v,180,180+v,180);
    line(130+v,180,130+v,225);
    line(80+v,225,180+v,225);
    line(180+v,180,180+v,225);
    floodfill(131+v,190,WHITE);
    }

    v=0;
    setfillstyle(SOLID_FILL,BLUE);
    line(80,225,130,225);
    line(80,270,80,270);
    line(80,270,130,270);
    line(130,225,130,270);
    floodfill(81,235,WHITE);
    for(ab=0;ab<4;ab++)
    {
        bc+=100;
setfillstyle(SOLID_FILL,BLUE);
 line(80+bc,225,130+bc,225);
    line(80+bc,270,80+bc,270);
    line(80+bc,270,130+bc,270);
    line(130+bc,225,130+bc,270);
    floodfill(81+bc,235,WHITE);
    }
    bc=0;



setfillstyle(SOLID_FILL,YELLOW);
    line(130,225,180,225);
    line(130,225,130,270);
    line(80,270,180,270);
    line(180,225,180,270);
    floodfill(131,235,WHITE);

    for(cd=0;cd<4;cd++)
    {
        de+=100;
         setfillstyle(SOLID_FILL,YELLOW);
          line(130+de,225,180+de,225);
    line(130+de,225,130+de,270);
    line(80+de,270,180+de,270);
    line(180+de,225,180+de,270);
    floodfill(131+de,235,WHITE);
    }
de=0;

        setfillstyle(SOLID_FILL,YELLOW);
    line(80,270,130,270);
    line(80,315,80,315);
    line(80,315,130,315);
    line(130,270,130,315);
    floodfill(81,280,WHITE);
    for(ef=0;ef<4;ef++)
    {
        fg+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+fg,270,130+fg,270);
    line(80+fg,315,80+fg,315);
    line(80+fg,315,130+fg,315);
    line(130+fg,270,130+fg,315);
    floodfill(81+fg,280,WHITE);
    }
fg=0;

setfillstyle(SOLID_FILL,BLUE);
    line(130,270,180,270);
    line(130,270,130,315);
    line(80,315,180,315);
    line(180,270,180,315);
    floodfill(131,280,WHITE);

    for(gh=0;gh<4;gh++)
    {
        hi+=100;
         setfillstyle(SOLID_FILL,BLUE);
          line(130+hi,270,180+hi,270);
    line(130+hi,270,130+hi,315);
    line(80+hi,315,180+hi,315);
    line(180+hi,270,180+hi,315);
    floodfill(131+hi,280,WHITE);
    }
    hi=0;


    setfillstyle(SOLID_FILL,BLUE);
    line(80,315,130,315);
    line(80,360,80,360);
    line(80,360,130,360);
    line(130,315,130,360);
    floodfill(81,325,WHITE);
    for(ij=0;ij<4;ij++)
    {
        jk+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+jk,315,130+jk,315);
    line(80+jk,360,80+jk,360);
    line(80+jk,360,130+jk,360);
    line(130+jk,315,130+jk,360);
    floodfill(81+jk,325,WHITE);
    }
    jk=0;


    setfillstyle(SOLID_FILL,YELLOW);
    line(130,315,180,315);
    line(130,315,130,360);
    line(80,360,180,360);
    line(180,315,180,360);
    floodfill(131,325,WHITE);

    for(kl=0;kl<4;kl++)
    {
        lm+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+lm,315,180+lm,315);
    line(130+lm,315,130+lm,360);
    line(80+lm,360,180+lm,360);
    line(180+lm,315,180+lm,360);
    floodfill(131+lm,325,WHITE);
    }
lm=0;


     setfillstyle(SOLID_FILL,YELLOW);
    line(80,360,130,360);
    line(80,405,80,405);
    line(80,405,130,405);
    line(130,360,130,405);
    floodfill(81,370,WHITE);
    for(mn=0;mn<4;mn++)
    {
        no+=100;
setfillstyle(SOLID_FILL,YELLOW);
line(80+no,360,130+no,360);
    line(80+no,405,80+no,405);
    line(80+no,405,130+no,405);
    line(130+no,360,130+no,405);
    floodfill(81+no,370,WHITE);
    }
no=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(130,360,180,360);
    line(130,360,130,405);
    line(80,405,180,405);
    line(180,360,180,405);
    floodfill(131,370,WHITE);

    for(op=0;op<4;op++)
    {
        pq+=100;
         setfillstyle(SOLID_FILL,BLUE);
         line(130+pq,360,180+pq,360);
    line(130+pq,360,130+pq,405);
    line(80+pq,405,180+pq,405);
    line(180+pq,360,180+pq,405);
    floodfill(131+pq,370,WHITE);
    }
pq=0;


     setfillstyle(SOLID_FILL,BLUE);
    line(80,405,130,405);
    line(80,450,80,450);
    line(80,450,130,450);
    line(130,405,130,450);
    floodfill(81,415,WHITE);
    for(qr=0;qr<4;qr++)
    {
    rs+=100;
setfillstyle(SOLID_FILL,BLUE);
line(80+rs,405,130+rs,405);
    line(80+rs,450,80+rs,450);
    line(80+rs,450,130+rs,450);
    line(130+rs,405,130+rs,450);
    floodfill(81+rs,415,WHITE);
    }
    rs=0;

    setfillstyle(SOLID_FILL,YELLOW);
    line(130,405,180,405);
    line(130,405,130,450);
    line(130,450,180,450);
    line(180,405,180,450);
    floodfill(131,415,WHITE);

    for(st=0;st<4;st++)
    {
        tu+=100;
         setfillstyle(SOLID_FILL,YELLOW);
         line(130+tu,405,180+tu,405);
    line(130+tu,405,130+tu,450);
    line(130+tu,450,180+tu,450);
    line(180+tu,405,180+tu,450);
    floodfill(131+tu,415,WHITE);
    }
    tu=0;










    ////////////////numbers/////////////




outtextxy(103,420,"1");  ///1st line
outtextxy(153,420,"2");
outtextxy(203,420,"3");
outtextxy(253,420,"4");
outtextxy(303,420,"5");
outtextxy(353,420,"6");
outtextxy(403,420,"7");
outtextxy(453,420,"8");
outtextxy(503,420,"9");
outtextxy(553,420,"10");


outtextxy(103,375,"20");  ///2nd line
outtextxy(153,375,"19");
outtextxy(203,375,"18");
outtextxy(253,375,"17");
outtextxy(303,375,"16");
outtextxy(353,375,"15");
outtextxy(403,375,"14");
outtextxy(453,375,"13");
outtextxy(503,375,"12");
outtextxy(553,375,"11");


outtextxy(103,335,"21");  ///3rd line
outtextxy(153,335,"22");
outtextxy(203,335,"23");
outtextxy(253,335,"24");
outtextxy(303,335,"25");
outtextxy(353,335,"26");
outtextxy(403,335,"27");
outtextxy(453,335,"28");
outtextxy(503,335,"29");
outtextxy(553,335,"30");



outtextxy(103,290,"40");  ///4th line
outtextxy(153,290,"39");
outtextxy(203,290,"38");
outtextxy(253,290,"37");
outtextxy(303,290,"36");
outtextxy(353,290,"35");
outtextxy(403,290,"34");
outtextxy(453,290,"33");
outtextxy(503,290,"32");
outtextxy(553,290,"31");


outtextxy(103,245,"41");  ///5th line
outtextxy(153,245,"42");
outtextxy(203,245,"43");
outtextxy(253,245,"44");
outtextxy(303,245,"45");
outtextxy(353,245,"46");
outtextxy(403,245,"47");
outtextxy(453,245,"48");
outtextxy(503,245,"49");
outtextxy(553,245,"50");


outtextxy(103,200,"60");  ///6th line
outtextxy(153,200,"59");
outtextxy(203,200,"58");
outtextxy(253,200,"57");
outtextxy(303,200,"56");
outtextxy(353,200,"55");
outtextxy(403,200,"54");
outtextxy(453,200,"53");
outtextxy(503,200,"52");
outtextxy(553,200,"51");


outtextxy(103,155,"61");  ///7th line
outtextxy(153,155,"62");
outtextxy(203,155,"63");
outtextxy(253,155,"64");
outtextxy(303,155,"65");
outtextxy(353,155,"66");
outtextxy(403,155,"67");
outtextxy(453,155,"68");
outtextxy(503,155,"69");
outtextxy(553,155,"70");


outtextxy(103,110,"80");  ///8th line
outtextxy(153,110,"79");
outtextxy(203,110,"78");
outtextxy(253,110,"77");
outtextxy(303,110,"76");
outtextxy(353,110,"75");
outtextxy(403,110,"74");
outtextxy(453,110,"73");
outtextxy(503,110,"72");
outtextxy(553,110,"71");


outtextxy(103,65,"81");  ///9th line
outtextxy(153,65,"82");
outtextxy(203,65,"83");
outtextxy(253,65,"84");
outtextxy(303,65,"85");
outtextxy(353,65,"86");
outtextxy(403,65,"87");
outtextxy(453,65,"88");
outtextxy(503,65,"89");
outtextxy(553,65,"90");


outtextxy(103,20,"100");  ///10th line
outtextxy(153,20,"99");
outtextxy(203,20,"98");
outtextxy(253,20,"97");
outtextxy(303,20,"96");
outtextxy(353,20,"95");
outtextxy(403,20,"94");
outtextxy(453,20,"93");
outtextxy(503,20,"92");
outtextxy(553,20,"91");










////////////////snakes//////
setcolor(RED);
setlinestyle(0,0,5);
arc(100,100,320,70,50);
circle(115,53,5);
arc(154,179,110,220,50);




setcolor(RED);
setlinestyle(0,0,5);
arc(250,250,320,70,50);
circle(265,203,5);
arc(304,329,110,280,50);



setcolor(RED);
setlinestyle(0,0,5);

 arc(400,180,320,80,100);
 circle(415,80,5);
    arc(509,338,110,233,100);





    ////////ladders///////





setcolor(GREEN);
setlinestyle(0,0,5);


line(185,40,285,175);
line(215,25,315,160);
line(210,67,230,52);
line(240,110,260,92);
line(270,153,295,132);

setcolor(GREEN);
setlinestyle(0,0,5);

line(85,265,185,400);
line(115,260,215,385);
line(110,302,130,277);
line(140,345,160,317);
line(170,387,195,357);
setcolor(GREEN);
setlinestyle(0,0,5);


line(533,170,537,440);
line(572,170,577,440);
line(535,230,575,232);
line(535,320,575,322);
line(535,410,575,412);



line(383,110,387,250);
line(418,110,422,250);
line(383,140,418,144);
line(383,210,418,214);






setfillstyle(SOLID_FILL,RED);
floodfill(1 , 1,WHITE);




                    ///////////////end///////////////







              setfillstyle(SOLID_FILL,BLUE);
setcolor(BLUE);
line(15,120,65,120);
line(15,120,15,165);
line(65,120,65,165);
line(15,165,65,165);
              setcolor(WHITE);
circle(25,127,3);
circle(25,143,3);
circle(55,143,3);
circle(55,158,3);
circle(55,127,3);
circle(25,158,3);




   ////////////////////////////////////////////////////////////////////player//////////////////////////////////////////




if(y2==550 && y1==423)
   {
       y1=378;
       y2=600;
   }

///////////here
if(y1==378) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }


    if(y1==423 && y2!=600)
    {


      y2=y2+50*chh;
    }
 if(chh==2 && y2==600)
    {
        y1=378;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=378;
        y2=500;
    }
if(chh==3 && y2==600)
    {
        y1=378;
        y2=550;
    }

    if(chh==4 && y2==600)
    {
        y1=378;
        y2=550;
    }
    if(chh==4 && y2==650)
    {
        y1=378;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=378;
        y2=450;
    }
    if(chh==5 && y2==600)
    {
        y1=378;
        y2=550;
    }
    if(chh==5 && y2==650)
    {
        y1=378;
        y2=500;
    }
    if(chh==5 && y2==700)
    {
        y1=378;
        y2=450;
    }
    if(chh==5 && y2==750)
    {
        y1=378;
        y2=400;
    }
    if(chh==6 && y2==600)
    {
        y1=378;
        y2=550;
    }
     if(chh==6 && y2==650)
    {
        y1=378;
        y2=500;
    }
    if(chh==6 && y2==700)
    {
        y1=378;
        y2=450;
    }
    if(chh==6 && y2==750)
    {
        y1=378;
        y2=400;
    }

if(chh==6 && y2==800)
    {
        y1=378;
        y2=350;
    }


                       ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==378)
   {
       y1=333;
       y2=50;
   }
if(y1==333) //&& y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=333;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=333;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=333;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=330;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=333;
        y2=100;
    }
    if(chh==4 && y2==50)
    {
        y1=333;
        y2=100;
    }
    if(chh==4 && y2==0)
    {
        y1=333;
        y2=150;
    }
    if(chh==4 && y2==-50)
    {
        y1=333;
        y2=200;
    }
    if(chh==4 && y2==-100)
    {
        y1=333;
        y2=250;
    }
    if(chh==5 && y2==50)
    {
        y1=333;
        y2=100;
    }
    if(chh==5 && y2==0)
    {
        y1=333;
        y2=150;
    }
    if(chh==5 && y2==-50)
    {
        y1=333;
        y2=200;
    }
     if(chh==5 && y2==-100)
    {
        y1=333;
        y2=250;
    }
    if(chh==6 && y2==50)
    {
        y1=333;
        y2=100;
    }
     if(chh==6 && y2==0)
    {
        y1=333;
        y2=150;
    }
    if(chh==6 && y2==-50)
    {
        y1=333;
        y2=200;
    }
    if(chh==6 && y2==-100)
    {
        y1=333;
        y2=250;
    }

if(chh==6 && y2==-150)
    {
        y1=333;
        y2=300;
    }


                /////////////////////////////////////////////////from here

if(y2==550+(50*chh) && y1==333)
   {
       y1=288;
       y2=600;
   }

///////////here
if(y1==288) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }



 if(chh==2 && y2==600)
    {
        y1=288;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=288;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=288;
        y2=500;
    }

    if(chh==4 && y2==650)
    {
        y1=288;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=288;
        y2=450;
    }
    if(chh==4 && y2==750)
    {
        y1=288;
        y2=400;
    }
    if(chh==5 && y2==600)
    {
        y1=288;
        y2=550;
    }
    if(chh==5 && y2==650)
    {
        y1=288;
        y2=500;
    }
    if(chh==5 && y2==700)
    {
        y1=288;
        y2=450;
    }
    if(chh==5 && y2==750)
    {
        y1=288;
        y2=400;
    }
    if(chh==6 && y2==600)
    {
        y1=288;
        y2=550;
    }
     if(chh==6 && y2==650)
    {
        y1=288;
        y2=500;
    }
    if(chh==6 && y2==700)
    {
        y1=288;
        y2=450;
    }
    if(chh==6 && y2==750)
    {
        y1=288;
        y2=400;
    }

if(chh==6 && y2==800)
    {
        y1=288;
        y2=350;
    }



  ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==288)
   {
       y1=243;
       y2=50;
   }
if(y1==243 && y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=243;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=243;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=243;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=243;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=243;
        y2=100;
    }
    if(chh==4 && y2==50)
    {
        y1=243;
        y2=100;
    }
    if(chh==4 && y2==0)
    {
        y1=243;
        y2=150;
    }
    if(chh==4 && y2==-50)
    {
        y1=243;
        y2=200;
    }
    if(chh==4 && y2==-100)
    {
        y1=243;
        y2=250;
    }
    if(chh==5 && y2==50)
    {
        y1=243;
        y2=100;
    }
    if(chh==5 && y2==0)
    {
        y1=243;
        y2=150;
    }
    if(chh==5 && y2==-50)
    {
        y1=243;
        y2=200;
    }
     if(chh==5 && y2==-100)
    {
        y1=243;
        y2=250;
    }
    if(chh==6 && y2==50)
    {
        y1=243;
        y2=100;
    }
     if(chh==6 && y2==0)
    {
        y1=243;
        y2=150;
    }
    if(chh==6 && y2==-50)
    {
        y1=243;
        y2=200;
    }
    if(chh==6 && y2==-100)
    {
        y1=243;
        y2=250;
    }

if(chh==6 && y2==-150)
    {
        y1=243;
        y2=300;
    }









                /////////////////////////////////////////////////from here

if(y2==550+(50*chh) && y1==243)
   {
       y1=198;
       y2=600;
   }

///////////here
if(y1==198) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }



 if(chh==2 && y2==600)
    {
        y1=198;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=198;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=198;
        y2=500;
    }

    if(chh==4 && y2==650)
    {
        y1=198;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=198;
        y2=450;
    }
    if(chh==4 && y2==750)
    {
        y1=198;
        y2=400;
    }
    if(chh==5 && y2==600)
    {
        y1=198;
        y2=550;
    }
    if(chh==5 && y2==650)
    {
        y1=198;
        y2=500;
    }
    if(chh==5 && y2==700)
    {
        y1=198;
        y2=450;
    }
    if(chh==5 && y2==750)
    {
        y1=198;
        y2=400;
    }
    if(chh==6 && y2==600)
    {
        y1=198;
        y2=550;
    }
     if(chh==6 && y2==650)
    {
        y1=198;
        y2=500;
    }
    if(chh==6 && y2==700)
    {
        y1=198;
        y2=450;
    }
    if(chh==6 && y2==750)
    {
        y1=198;
        y2=400;
    }

if(chh==6 && y2==800)
    {
        y1=198;
        y2=350;
    }



  ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==198)
   {
       y1=153;
       y2=50;
   }
if(y1==153 && y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=153;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=153;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=153;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=153;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=153;
        y2=100;
    }
    if(chh==4 && y2==50)
    {
        y1=153;
        y2=100;
    }
    if(chh==4 && y2==0)
    {
        y1=153;
        y2=150;
    }
    if(chh==4 && y2==-50)
    {
        y1=153;
        y2=200;
    }
    if(chh==4 && y2==-100)
    {
        y1=153;
        y2=250;
    }
    if(chh==5 && y2==50)
    {
        y1=153;
        y2=100;
    }
    if(chh==5 && y2==0)
    {
        y1=153;
        y2=150;
    }
    if(chh==5 && y2==-50)
    {
        y1=153;
        y2=200;
    }
     if(chh==5 && y2==-100)
    {
        y1=153;
        y2=250;
    }
    if(chh==6 && y2==50)
    {
        y1=153;
        y2=100;
    }
     if(chh==6 && y2==0)
    {
        y1=153;
        y2=150;
    }
    if(chh==6 && y2==-50)
    {
        y1=153;
        y2=200;
    }
    if(chh==6 && y2==-100)
    {
        y1=153;
        y2=250;
    }

if(chh==6 && y2==-150)
    {
        y1=153;
        y2=300;
    }



                /////////////////////////////////////////////////from here

if(y2==550+(50*chh) && y1==153)
   {
       y1=108;
       y2=600;
   }

///////////here
if(y1==108) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }



 if(chh==2 && y2==600)
    {
        y1=108;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=108;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=108;
        y2=500;
    }

    if(chh==4 && y2==650)
    {
        y1=108;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=108;
        y2=450;
    }
    if(chh==4 && y2==750)
    {
        y1=108;
        y2=400;
    }
    if(chh==5 && y2==600)
    {
        y1=108;
        y2=550;
    }
    if(chh==5 && y2==650)
    {
        y1=108;
        y2=500;
    }
    if(chh==5 && y2==700)
    {
        y1=108;
        y2=450;
    }
    if(chh==5 && y2==750)
    {
        y1=108;
        y2=400;
    }
    if(chh==6 && y2==600)
    {
        y1=108;
        y2=550;
    }
     if(chh==6 && y2==650)
    {
        y1=108;
        y2=500;
    }
    if(chh==6 && y2==700)
    {
        y1=108;
        y2=450;
    }
    if(chh==6 && y2==750)
    {
        y1=108;
        y2=400;
    }

if(chh==6 && y2==800)
    {
        y1=108;
        y2=350;
    }



  ///////////////////////////////////2nd line

   if( y2==(100-50*chh) && y1==108)
   {
       y1=63;
       y2=50;
   }
if(y1==63 && y2!=650)
    {


      y2=y2+50*chh;
    }






    ////here
    if(chh==2 && y2==0)
   {
       y1=63;
       y2=150;
   }
 if(chh==2 && y2==50)
    {
        y1=63;
        y2=100;
    }
if(chh==3 && y2==-50)
    {
        y1=63;
        y2=200;
    }
if(chh==3 && y2==0)
    {
        y1=63;
        y2=150;
    }
if(chh==3 && y2==50)
    {
        y1=63;
        y2=100;
    }
    if(chh==4 && y2==50)
    {
        y1=63;
        y2=100;
    }
    if(chh==4 && y2==0)
    {
        y1=63;
        y2=150;
    }
    if(chh==4 && y2==-50)
    {
        y1=63;
        y2=200;
    }
    if(chh==4 && y2==-100)
    {
        y1=63;
        y2=250;
    }
    if(chh==5 && y2==50)
    {
        y1=63;
        y2=100;
    }
    if(chh==5 && y2==0)
    {
        y1=63;
        y2=150;
    }
    if(chh==5 && y2==-50)
    {
        y1=63;
        y2=200;
    }
     if(chh==5 && y2==-100)
    {
        y1=63;
        y2=250;
    }
    if(chh==6 && y2==50)
    {
        y1=63;
        y2=100;
    }
     if(chh==6 && y2==0)
    {
        y1=63;
        y2=150;
    }
    if(chh==6 && y2==-50)
    {
        y1=63;
        y2=200;
    }
    if(chh==6 && y2==-100)
    {
        y1=63;
        y2=250;
    }

if(chh==6 && y2==-150)
    {
        y1=63;
        y2=300;
    }
//////////////////////////////////////////////////////////////////////here




               if(y2==550+(50*chh) && y1==63)
   {
       y1=18;
       y2=600;
   }




if(y1==18 && y2>350) ///&& y2>100) ////&& y2!=50)
   {
       y2=y2-50*chh;
   }

if(y1==18 && y2<100)
{
    y2=100;

}

if(chh==2 && y2==600)
    {
        y1=18;
        y2=550;
    }
if(chh==3 && y2==600)
    {
        y1=18;
        y2=550;
    }
if(chh==3 && y2==650)
    {
        y1=18;
        y2=500;
    }

    if(chh==4 && y2==650)
    {
        y1=18;
        y2=500;
    }
    if(chh==4 && y2==700)
    {
        y1=18;
        y2=450;
    }
    if(chh==4 && y2==750)
    {
        y1=18;
        y2=400;
    }
    if(chh==5 && y2==600)
    {
        y1=18;
        y2=550;
    }
    if(chh==5 && y2==650)
    {
        y1=18;
        y2=500;
    }
    if(chh==5 && y2==700)
    {
        y1=18;
        y2=450;
    }
    if(chh==5 && y2==750)
    {
        y1=18;
        y2=400;
    }
    if(chh==6 && y2==600)
    {
        y1=18;
        y2=550;
    }
     if(chh==6 && y2==650)
    {
        y1=18;
        y2=500;
    }
    if(chh==6 && y2==700)
    {
        y1=18;
        y2=450;
    }
    if(chh==6 && y2==750)
    {
        y1=18;
        y2=400;
    }

if(chh==6 && y2==800)
    {
        y1=18;
        y2=350;
    }



  if(y1==423 && y2==550)
     {
         y1=153;
         y2=550;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }




      if(y1==378 && y2==200)
     {
         y1=243;
         y2=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }


     if(y1==243 && y2==400)
     {
         y1=108;
         y2=400;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }
      if(y1==153 && y2==300)
     {
         y1=18;
         y2=200;
          settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"great...!!! beware of snakes");

     }

      if(y1==63 && y2==100)
     {
         y1=198;
         y2=100;
         settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(y1==198 && y2==250)
     {
         y1=378;
         y2=300;
           settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }
      if(y1==63 && y2==400)
     {
         y1=423;
         y2=450;  settextstyle(8,0,2);
    setcolor(WHITE);
    outtextxy(130,455,"BADLUCK...!!!!");

     }









settextstyle(0,0,7);
    setcolor(GREEN);
    circle(y2,y1,17);




                         //player1(&chh);








break;










}

if(y1==18 && y2==100)
{

     settextstyle(3,0,0);
    setcolor(BLUE);
    outtextxy(100,200,"PLAYER 2ND WINS");

}
}
settextstyle(0,0,7);
    setcolor(WHITE);
    circle(pos,poss,17);

}
getch();



closegraph();

}

}
getch();
    delay(100000);
    return 0;
}
