/*
    Program name: Gemini.c
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
    // Requirements: Fixed secret number and maximum of 3 tries
    const int SECRET_NUMBER = 7;
    const int MAX_ATTEMPTS = 3;
    int guess;
    int win = 0; // Flag to track if the user won

    printf("Guess a number between 1 and 10.\n");

    // Loop for up to 3 attempts
    for (int attempt = 1; attempt <= MAX_ATTEMPTS; attempt++) {
        printf("Attempt %d/%d. Enter your guess: ", attempt, MAX_ATTEMPTS);
        scanf("%d", &guess);

        // Check the user's guess
        if (guess == SECRET_NUMBER) {
            printf("Correct! You win!\n");
            win = 1; 
            break; // Stop the loop immediately on correct guess
        } else if (guess < SECRET_NUMBER) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }

    // Print final lose message if the user ran out of tries
    if (!win) {
        printf("Game over! You lost. The correct number was %d.\n", SECRET_NUMBER);
    }

    return 0;
}
