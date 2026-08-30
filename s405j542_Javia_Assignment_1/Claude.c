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

    I AUTHORED ALL OF THE CODE HERE IN DISPLAY 
*/

#include <stdio.h> //standard input output library operations

int main() { //jumpstart our main program, remember we put int to indicate a return of 1 or 0 if program ran successfully
    int secret = 7; //7 is our secret number we hardcoded
    int guess; //guess would be the guess output the user gives (i.e user guessing a 5)
    int attempts = 3; //number of attempts user is given to
    int won = 0; //since the game has started, user hasn't won yet until they guess the number correctly

    printf("Guess a number between 1 and 10.\n"); //string asking user to guess number between 1 and 10

    for (int i = 1; i <= attempts; i++) { //loop through a total of attempts (which is 3) where the program asks the user to enter their guess and it decides if the number the user guess is correct or not
        printf("Attempt %d/%d. Enter your guess: ", i, attempts); //%d allows int variables to be injected into strings
        scanf("%d", &guess); //read the user input

        if (guess == secret) { //check if the user input is equal to the secret number
            printf("Correct! You win!\n"); //if correct the user wins
            won = 1; //and we set the flag of the user won to 1
            break; //exit the loop since user correctly guessed the secret number
        } else if (guess < secret) { //but if the user guesses too low in the secret number
            printf("Too low! Try again.\n"); //program tells user to try again and then goes back to the start of the loop
        } else {
            printf("Too high! Try again.\n"); //Same thing here, except we dont need a conditional else if the user guesses too high since the only other option is that the user guesses too high
        }
    }

    if (!won) { //if the won is still 0 and the loop closes after 3 attempts then we print out "Out of attempts"
        printf("Out of attempts! The number was %d. You lose.\n", secret); //reveal to the user what the secret number is 
    }

    return 0; //if we return 0 that means to our OS that the program ran successfully (if 1 or non zero value it signals a failure)
}
