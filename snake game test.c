
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>

int hight = 20, weight = 20, row, col;
int x, y, fruitx, fruity, gameover, score, flag;

void showLoadingPage() {
    system("cls");
    int e;
    for(e=0;e<=50;e++)
    {
          if(e==30)
          {
                     printf("        Loading...\n");

          }
     else{
       printf(" \n");
     }
    }
    // You can display a loading animation here if desired
    usleep(3000000); // Sleep for 1 second
}
void instraction () {




    system("cls");
    int p;
    for(p=0;p<=50;p++)
    {
          if(p==30)
          {
                     printf("        Please put your hand\n");

          }
     else{
       printf(" \n");
     }
    }

                usleep(3000000);
           }





void setup() {
    gameover = 0;
    x = hight / 2;
    y = weight / 2;
label1:
    fruitx = rand() % 20;
    if (fruitx == 0) {
        goto label1;
    }
label2:
    fruity = rand() % 20;
    if (fruity == 0) {
        goto label2;
    }
    score = 0;
}

void draw() {
    system("cls");
    for (row = 0; row <= hight; row++) {
        for (col = 0; col <= weight; col++) {
            if (row == 0 || row == hight || col == 0 || col == weight) {
                printf("#");
            } else {
                if (row == x && col == y) {
                    printf("o");
                } else if (row == fruitx && col == fruity) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}

void input() {
    if (kbhit()) {
        switch (getch()) {
            case 'a':
                flag = 1;
                break;
            case 'd':
                flag = 2;
                break;
            case 'w':
                flag = 3;
                break;
            case 's':
                flag = 4;
                break;
            case 'x':
                flag = 5;
                break;
        }
    }
}

void makelogic() {
    switch (flag) {
        case 1:
            y--;
            break;
        case 2:
            y++;
            break;
        case 3:
            x--;
            break;
        case 4:
            x++;
            break;
        default:
            break;
    }
    if (x < 0 || x > weight || y < 0 || y > hight) {
        gameover = 1;
    }
    if (x == fruitx && y == fruity) {
    label3:
        fruitx = rand() % 20;
        if (fruitx == 0) {
            goto label3;
        }
    label4:
        fruity = rand() % 20;
        if (fruity == 0) {
            goto label4;
        }
    }
}

int main() {
    int m, n;
    setup();
    showLoadingPage();
    instraction ();       // Display the loading page before the game starts

    while (!gameover) {
        draw();
        input();
        makelogic();
        usleep(90000);
    }

    return 0;
}
