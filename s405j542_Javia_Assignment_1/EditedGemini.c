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
    int guess; //store user input
    int result; //store in result variable to check if input is valid or not
    char buffer[100];
    printf("Guess a number between 1 and 10.\n");

    // Loop for up to 3 attempts
    for (int attempt = 1; attempt <= 3; attempt++) {
        
        
        printf("Attempt %d/%d. Enter your guess: ", attempt, 3);
        
        //handle edge case where user types in an invalid input like a string or a float

        result = scanf("%d", &guess); //store the user input into guess and check if it matches secret number or not
        //result will return either a 1 (valid int) or 0 (user typed in a string or a float)

        while (result != 1) { //force the user to type in an actual valid int number
            while (getchar() != '\n'); //clear invalid input from buffer

            printf("Invalid input please type in a whole number.\nAttempt %d/%d. Enter your guess: ", attempt, 3); //prompt user to actually type in a valid whole int number
            result = scanf("%d", &guess); //attempt to scan again for user input
        }


        // Check the user's guess
        if (guess == SECRET_NUMBER) { //if we correctly find the secret number
            printf("Correct! You win!\n");
            return 0; //exit and return after finding the correct number
        } else if (guess < SECRET_NUMBER) { //less than the secret number, tell user they guessed too low
            printf("Too low! Try again.\n");
        } else { //more than the secret number, tell user they guessed too high
            printf("Too high! Try again.\n");
        }
    }
    // Print final lose message if the user ran out of tries
    printf("Game over! You lost. The correct number was %d.\n", SECRET_NUMBER);

    return 0; //return since our program ended
}
