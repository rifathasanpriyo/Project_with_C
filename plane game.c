#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<unistd.h>
int height=30,weight=30,weight2,i,j,row,col,x,y,gunx,guny,gunx2,guny2;
int enemyx,enemyy,enemyx1,enemyy1,enemyx2,enemyy2,enemyx3,enemyy3,enemyx4,enemyy4,enemyx5,enemyy5,enemyx6,enemyy6,enemyx7,enemyy7,enemyx8,enemyy8,enemyx9,
enemyy9,enemyx10,enemyy10;
int enemysaw=1,enemysaw1=1,enemysaw2=1,enemysaw3=1,enemysaw4=1,enemysaw5=1,enemysaw6=1,enemysaw7=1,enemysaw8=1,enemysaw9=1,enemysaw10=1;
int flag=0,flag1=0,ch=0,gunx5,showEnemy1 = 1,gun5;
void setup()
{
    x=weight-1;
    y=height/2;
    gunx=weight;
gun5=gunx;
    gunx2=weight;

    guny=height/2;
    guny2=height/2;
    enemyx=weight-29;
    enemyy=height/2;
    weight2=weight;
enemyx1=weight-29;
    enemyy1=height/2;


}
void draw()
{
    system("cls");
    for(row=0; row<=weight; row++)
    {
        for(col=0; col<=height; col++)
        {
            if(row==0||col==0||row==weight || col==height)
            {

                printf("\033[0;30;47m#\033[0m");
            }
            else
            {

                if(row==x && col==y )
                {

                    printf("+");

                }
                else if(row==x-1 && col==y)
                {
                    printf("^");
                }
                else if(row==gunx-1 && col==guny)
                {
                    printf("\033[0;31m|\033[0m");
                }


                                else if(row==enemyx-8&& col==enemyy  )
                                {



                                      printf("x");



                                }
                else
                {
                       printf(" ");
                }
            }

        }
        printf("\n");
    }



}
void input()
{
    if(kbhit())
    {
        switch(getch())
        {
        case 'a':
            flag=1;
            break;
        case 'd':
            flag=2;
            break;
        case 'w':
            flag=3;
            break;
        }
    }

}

void makelogic()
{
    switch(flag)
    {
    case 1:
    {
        if(y>1)
        {
                       y=y-1;

        }
        gunx=gunx-1;
         enemyx++;


if(gunx<0)
{

    gunx=weight;
    gunx=gunx-1;
    guny=y;

}

break;


    }
    case 2:
    {
        if(y<height-1)
            y=y+1;
        gunx=gunx-1;
        enemyx++;

        if(gunx<0)
{
    gunx=weight;
    gunx=gunx-1;
    guny=y;

}

break;
    }

    }


}



int main()
{

    setup();

    while(1)
    {
        draw();

        input();

        makelogic();

        usleep(60000);

    }

}
