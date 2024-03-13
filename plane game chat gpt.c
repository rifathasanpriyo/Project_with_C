#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>

#define MAX_ENEMIES 20

int height = 30, weight = 30, x, y, gunx, guny;
int enemyCount = 1;
int enemies[MAX_ENEMIES][2];

void setup()
{
    x = weight - 1;
    y = height / 2;
    gunx = x - 1;
    guny = y;
    enemies[0][0] = weight - 29;
    enemies[0][1] = height / 2;
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
                int isEnemyVisible = 0;
                for (int i = 0; i < enemyCount; i++)
                {
                    if (row == enemies[i][0] && col == enemies[i][1])
                    {
                        printf("x");
                        isEnemyVisible = 1;
                        break;
                    }
                }

                if (!isEnemyVisible)
                {
                    if (row == x && col == y)
                    {
                        printf("+");
                    }
                    else if (row == x - 1 && col == y)
                    {
                        printf("^");
                    }
                    else if (row == gunx && col == guny)
                    {
                        printf("\033[0;31m|\033[0m");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
}

void input()
{
    if (kbhit())
    {
        switch (getch())
        {
        case 'a':
            y--;
            break;
        case 'd':
            y++;
            break;
        case 'w':
            gunx = x - 1;
            guny = y;
            break;
        }
    }
}

void makelogic()
{
    gunx--;

    // Check if the bullet hits an enemy
    for (int i = 0; i < enemyCount; i++)
    {
        if (gunx == enemies[i][0] && guny == enemies[i][1])
        {
            // If the bullet hits an enemy, remove the enemy from the screen
            enemies[i][0] = -1;
            enemies[i][1] = -1;
            gunx = x - 1; // Reset the bullet position
            break;
        }
    }

    // Update enemy positions
    for (int i = 0; i < enemyCount; i++)
    {
        if (enemies[i][0] >= 0 && enemies[i][1] >= 0)
        {
            enemies[i][0]++;
        }
    }

    // Spawn new enemies periodically
    if (enemyCount < MAX_ENEMIES && rand() % 100 < 5)
    {
        enemies[enemyCount][0] = weight - 29;
        enemies[enemyCount][1] = rand() % height;
        enemyCount++;
    }
}

int main()
{
    setup();

    while (1)
    {
        draw();
        input();
        makelogic();
        usleep(60000);
    }
}
