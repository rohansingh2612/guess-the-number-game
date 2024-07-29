/*
AUTHOR: ROHAN SINGH
WORK OF PROGRAM: This program generates a random number between 1 and 100.
                    It prompts the user to guess the number and provides hints 
                    (higher/lower) until the correct number is guessed. 
                    The number of guesses taken by the user is counted and displayed 
                    at the end. The program uses C language features such as 
                    standard input/output, random number generation, and looping.
PROGRAM LANGUAGE: PURE C LANGUAGE
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // Seed the random number generator with the current time
    int random_number = (rand() % 100) + 1; // Generate a random number between 1 and 100

    int entered_number, number_of_guesses = 0; // Declare variables to store user input and count guesses

    // Loop until the user guesses the correct number
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &entered_number); // Read user input

        // Compare user input with the randomly generated number
        if (entered_number > random_number)
        {
            printf("LOWER NUMBER PLEASE\n"); // Prompt the user to enter a lower number
        }
        else if (entered_number < random_number)
        {
            printf("HIGHER NUMBER PLEASE\n"); // Prompt the user to enter a higher number
        }
        else
        {
            printf("CONGRATS!! \n"); // If user guesses correctly, congratulate them
        }

        number_of_guesses++; // Increment the number of guesses

    } while (entered_number != random_number); // Continue loop until correct number is guessed

    // Print the final results
    printf("You entered the correct number %d\n", entered_number);
    printf("Number of guesses: %d\n", number_of_guesses);

    return 0; // Exit the program
}
