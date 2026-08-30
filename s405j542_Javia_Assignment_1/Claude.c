/*
    Program name: Claude.c
    Description: A C number guessing game that has the user guess
    the number between 1-10, with the user having up to 3 attempts
    to guess the number correctly.

    Inputs: User inputs a number
    Outputs: Program determines if the User guess correctly, guessed a number too high/low, or displays that the user ran out of attempts in guessing
    Collaborators: Som Javia
    
    Code Source: Google Gemini Search
    Author's name: Som Javia
    Creation Date: 9/1/2026

    Revisions: Create program in C

*/

#include <stdio.h>

int main() {
    int secret = 7;
    int guess;
    int attempts = 3;
    int won = 0;

    printf("Guess a number between 1 and 10.\n");

    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d/%d. Enter your guess: ", i, attempts);
        scanf("%d", &guess);

        if (guess == secret) {
            printf("Correct! You win!\n");
            won = 1;
            break;
        } else if (guess < secret) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }

    if (!won) {
        printf("Out of attempts! The number was %d. You lose.\n", secret);
    }

    return 0;
}