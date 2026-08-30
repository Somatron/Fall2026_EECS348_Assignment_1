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

    I AUTHORED ALL OF THE CODE HERE IN DISPLAY 
*/


#include <stdio.h> //standard input output library operations

int main() { //jumpstart our main program, remember we put int to indicate a return of 1 or 0 if program ran successfully
    // Requirements: Fixed secret number and maximum of 3 tries
    const int SECRET_NUMBER = 7; //Gemini (unlike claude) does a very smart thing and creates a const variable and capitalizes the variable name to indicate that the variable wont change
    const int MAX_ATTEMPTS = 3; //same with maximum number of attempts
    int guess; //still creates a guess variable for output to be stored in
    int win = 0; // Flag to track if the user won

    printf("Guess a number between 1 and 10.\n"); //string asking user to guess number between 1 and 10

    // Loop for up to 3 attempts
    for (int attempt = 1; attempt <= MAX_ATTEMPTS; attempt++) { //instead of i shown in claudes code, Gemini uses attempt to loop through a total of 3 attempts or however the variable is sized
        printf("Attempt %d/%d. Enter your guess: ", attempt, MAX_ATTEMPTS); //%d and %d injects variable names (current attempt) out of (MAX ATTEMPTS)
        //i.e. Attempt 1/3. Enter your guess: 
        scanf("%d", &guess); //and we would store the users input into that guess

        // Check the user's guess
        if (guess == SECRET_NUMBER) { //check if the user input is equal to the secret number
            printf("Correct! You win!\n"); //if correct the user wins
            win = 1; //flag set that user won
            break; // Stop the loop immediately on correct guess
        } else if (guess < SECRET_NUMBER) { //if the user guesses too low in the secret number
            printf("Too low! Try again.\n"); //program tells user to try again and then goes back to the start of the loop
        } else {
            printf("Too high! Try again.\n"); //same thing here except the only other outcome would be that the user guesses too high
        }
    }

    // Print final lose message if the user ran out of tries
    if (!win) { //if we exit out of loop and win is still 0
        printf("Game over! You lost. The correct number was %d.\n", SECRET_NUMBER); //tell user that they lose the game and reveal the secret number towards them, with %d injecting that SECRET_NUMBER variable
    }

    return 0; //if we return 0 that means to our OS that the program ran successfully (if 1 or non zero value it signals a failure)
}
