#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int Goal, guess;
    srand(time(0));
    Goal = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\nCan you guess the number between 1 and 100?\n");

    while (scanf("%d", &guess) == 1) {
        
        
        if (guess == Goal) {
            printf("Congratulations! You guessed it!\n");
            break;
        }
        
        else {
            printf("Wrong guess, Try again!!!\n");
            printf("Let's try again");
        }
    }

    if (scanf("%d", &guess) != 1) {
        printf("Please enter a valid number.\n");
        printf("Let's Try Again");
    }

    return 0;
}
