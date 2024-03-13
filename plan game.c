#include <stdio.h>
#include <conio.h> // Only for Windows, replace with appropriate header for other platforms

#define SCREEN_WIDTH 80
#define PLANE_WIDTH 5

int main() {
    int planeX = SCREEN_WIDTH / 2 - PLANE_WIDTH / 2;
    char input;

    printf("Simple Plane Game\n");
    printf("Controls:\n");
    printf("Press 'A' to move left\n");
    printf("Press 'D' to move right\n");
    printf("Press 'Q' to quit\n");

    while (1) {
        if (kbhit()) {
            input = getch();

            if (input == 'q' || input == 'Q') {
                break;
            }
            else if (input == 'a' || input == 'A') {
                if (planeX > 0) {
                    planeX--;
                }
            }
            else if (input == 'd' || input == 'D') {
                if (planeX < SCREEN_WIDTH - PLANE_WIDTH) {
                    planeX++;
                }
            }
        }

        // Clear the screen
        system("cls"); // Use "clear" for UNIX-like systems

        // Draw the plane
        printf(" ");
        for (int i = 0; i < planeX; i++) {
            printf(" ");
        }
        printf("#####");
        for (int i = planeX + PLANE_WIDTH; i < SCREEN_WIDTH; i++) {
            printf(" ");
        }

        // Add a delay to control the game speed (optional)
        for (int i = 0; i < 10000000; i++);

    }

    printf("Game over!\n");

    return 0;
}
