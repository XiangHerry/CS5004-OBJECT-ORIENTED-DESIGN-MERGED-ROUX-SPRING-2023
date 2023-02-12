// Your name: Chenyi Xiang
// Date: 01/19/2023
//
// Add your program here!
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    int count = 5;
    // used an array to store how many guesses made in each round.
    int guesses[count];
    int total_guesses = 0;

    // srand allows different guesses in every guess in each round.
    srand(time(0));

    for (int i = 0; i < count; i ++) {
        // Min number for the guessing 
        int min = 1;
        // Max number for the guessing range
        int large = 10;
        // Correct number to be guessed module the wole range and then + min which ensures it is greater than min number.
        int correct_num = (rand() % (large - min + 1)) + min;
        // guess number　
        int guess = 0;
        // Number of guesses made in the current round
        int num_guesses = 0;
        // print the header for the guess game as required in question.
        printf("==========================\n");
        printf("CPU Says: Pick a number 1-10\n");
        printf("==========================\n");

        while (guess != correct_num) {
            printf("Make a guess:");
            // we can get the user input through scanf
            scanf("%d", &guess);
            num_guesses++;
            // the condition when guess < set number.
            if (guess < correct_num) {
                printf("No guess higher!\n");
            } 
            // the condition when guess > set number.
            else if (guess > correct_num) {
                printf("No guess lower!\n");
            } 
            // when user gets the number.
            else {
                printf("You got it!\n");
                total_guesses += num_guesses;
                guesses[i] = num_guesses;
                break;
            }
        }
    }
    printf("=================================================\n");
    printf("|Here are the results of your guessing abilities|\n");
    printf("=================================================\n");

    // do the summary here.
    for (int i = 0; i < count; i++) {
        printf("Game %d took you %d gusses\n", i, total_guesses);

    }
    return 0;

}