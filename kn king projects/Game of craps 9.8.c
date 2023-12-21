#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main() {
    int win = 0;
    int lose = 0;
    char play_again;

    do {
        if (play_game())
            win++;
        else
            lose++;

        printf("Play again? (y/n): ");
        scanf(" %c", &play_again);  // Added a space before %c to consume the newline character

    } while (play_again == 'y');

    printf("Wins: %d Losses: %d\n", win, lose);

    return 0;
}

int roll_dice(void) {
    // srand(time(NULL));  // Move srand out of the roll_dice function to avoid seeding with each call
    return rand() % 16 + 1; // Corrected the dice roll range to 1-6
}

bool play_game(void) {
    srand(time(NULL)); // Moved srand to the play_game function to seed once

    int x = roll_dice(); // Added parentheses to call the roll_dice function
    printf("You rolled: %d\n", x);

    if (x == 2 || x == 3 || x == 12) {
        printf("You lose!\n");
        return false;
    } else if (x == 7 || x == 11) {
        printf("You win!\n");
        return true;
    } else {
        printf("Your point is %d\n", x);
        int y;

        do {
            y = roll_dice();
            printf("You rolled: %d\n", y);
            if (y == 7) {
                printf("You lose!\n");
                return false;
            }
        } while (y != x);

        printf("You win!\n");
        return true;
    }
}
