
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>

int height = 30, weight = 30, weight2, i, j, row, col, x, y, gunx, guny, gunx2, guny2;
int enemyx, enemyy, enemyx1, enemyy1, enemyx2, enemyy2;
int enemysaw = 1, enemysaw1 = 1, enemysaw2 = 1;
int flag = 0, flag1 = 0, ch = 0, gunx5, showEnemy1 = 1, gun5, fruitx, fruity, update, update2;

void setup() {
    x = weight - 1;
    y = height / 2;
    gunx = weight;
    gun5 = gunx;
    gunx2 = weight;

    guny = height / 2;
    guny2 = height / 2;
    enemyx = weight - 29;
    enemyy = height / 2;
    weight2 = weight;
    enemyx1 = (weight - 29);
    enemyy1 = (height / 2);

    enemysaw = 1;
    enemysaw1 = 1;
    enemysaw2 = 1;

    label1:
    fruitx = rand() % 10;
    if (fruitx == 0) {
        goto label1;
    }
    label2:
    fruity = rand() % 10;
    if (fruity == 0) {
        goto label2;
    }
}

void draw() {
    system("cls");
    for (row = 0; row <= weight; row++) {
        for (col = 0; col <= height; col++) {
            if (row == 0 || col == 0 || row == weight || col == height) {
                printf("\033[0;30;47m#\033[0m");
            } else {
                if (row == x && col == y) {
                    printf("\033[0;34m+\033[0m");
                } else if (row == x - 1 && col == y) {
                    printf("\033[0;34m^\033[0m");
                } else if (row == gunx - 1 && col == guny) {
                    printf("\033[0;31m|\033[0m");
                } else if (row == gunx + 6 && col == guny) {
                    printf("\033[0;31m|\033[0m");
                } else if (row == enemyx - 5 && col == enemyy - 3 && enemysaw) {
                    printf("x");
                } else if (row == enemyx1-15  && col == enemyy1-3 && enemysaw1 ) {
                    printf("0");
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
        }
    }
}

void makelogic() {
    switch (flag) {
        case 1: {
            // Move the player and gun to the left
            if (y > 1)
                y = y - 1;

            gunx = gunx - 4;
            enemyx++;
            enemyx1++;

            if (gunx < 0) {
                gunx = weight;
                gunx = gunx - 4;
                guny = y;
            }
 if (gunx == enemyx - 5 && guny == enemyy - 3) {
        enemysaw = 0;
        gunx = weight;
        guny = y;
    }

    if (gunx == enemyx1-15 && guny == enemyy1-3) {
        enemysaw1=0;
        gunx = weight;
        guny = y;
    }
            update = enemyx;
            update2 = enemyx1;

            break;
        }
        case 2: {
            // Move the player and gun to the right
            if (y < height - 1)
                y = y + 1;

            gunx = gunx - 4;
            enemyx++;
            enemyx1++;

            if (gunx < 0) {
                gunx = weight;
                gunx = gunx - 4;
                guny = y;
            }

            update = enemyx;
            update2 = enemyx1;
 if (gunx == enemyx - 5 && guny == enemyy - 3) {
        enemysaw = 0;
        gunx = weight;
        guny = y;
    }

    if (gunx == enemyx1-15 && guny == enemyy1-3) {
        enemysaw1=0;
        gunx = weight;
        guny = y;
    }
            break;
        }
        case 3: {
            // Move the enemy down
            enemyy++;
            break;
        }
    }


}


int main() {
    setup();

    while (1) {
        draw();
        input();
        makelogic();
        usleep(100000);
    }
    return 0;
}
