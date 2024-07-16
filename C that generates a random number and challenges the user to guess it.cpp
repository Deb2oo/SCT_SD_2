#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess;
    srand(time(NULL));  // Seed for random number generation
    
    // Generate random number between 1 and 100
    secret_number = rand() % 50 + 1;
    
    printf("Guess the number (between 1 and 100):\n");
    
    // Keep looping until user guesses correctly
    while (1) {
        scanf("%d", &guess);  // Read user input
        
        if (guess < secret_number) {
            printf("Too low! Try again.\n");
        } else if (guess > secret_number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d!\n", secret_number);
            break;  // Exit the loop on correct guess
        }
    }
    
    return 0;
}

