#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<unistd.h>
int height=30,weight=30,weight2,i,j,row,col,x,y,gunx,guny,gunx2,guny2;
int enemyx,enemyy,enemysaw=1;
int flag=0,flag1=0,ch=0;
void setup()
{
    x=weight-1;
    y=height/2;
    gunx=weight;
    gunx2=weight;

    guny=height/2;
    guny2=height/2;
    enemyx=weight-29;
    enemyy=height/2;
        weight2=weight;
}
void draw()
{
    system("cls");
    for (int row = 0; row <= weight; row++)
    {
        for (int col = 0; col <= height; col++)
        {
            if (row == 0 || col == 0 || row == weight || col == height)
            {
                printf("\033[0;30;47m#\033[0m");
            }
            else
            {
                if (row == x && col == y)
                {
                    printf("+");
                }
                else if (row == x - 1 && col == y)
                {
                    printf("^");
                }
                else if (row == gunx - 1 && col == guny)
                {
                    printf("\033[0;31m|\033[0m");
                }
                else if (row == gunx2 - 2 && col == guny2)
                {
                    printf("\033[0;31m|\033[0m");
                }
                else if (enemysaw)
                {
                    if ((row == enemyx - 2 && col == enemyy) ||
                        (row == enemyx - 2 && col == enemyy + 1) ||
                        (row == enemyx - 2 && col == enemyy + 2))
                    {
                        printf("...");
                    }
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
lable1:
    switch(flag)
    {
    case 1:
    {
        if(y>1)
            y=y-1;
        //guny--;
        gunx=gunx-3;
        gunx2=gunx2-2;
        enemyx++;

        break;


    }
    case 2:
    {
        if(y<height-1)
            y=y+1;
        //guny++;
        gunx=gunx-3;
        gunx2=gunx2-2;
        enemyx++;

        break;
    }

    default:
        break;
    }

    if(gunx==0)
    {
if( enemyy==guny)
{
       enemysaw=0;
}
        gunx=weight;
        gunx2=weight;
        guny2=y;

        guny=y;

        goto lable1;
    }

}
void enemy()
{

}


int main()
{

    setup();
    while(1)
    {
        draw();

        input();

        makelogic();
        enemy();
        usleep(60000);

    }

}
