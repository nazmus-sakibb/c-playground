#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main () {
    srand(time(0));
    int hidden = rand() % 100 + 1;

    // printf("%d\n", hidden);

    int number_of_guesses = 0;

    while(number_of_guesses < 15) {
        int guess;
        scanf("%d", &guess);

        if(guess == hidden) {
            printf("Your are right!\n");
            break;
        }
        else if(guess < hidden) {
            printf("Guess little higher!\n");
        }
        else {
            printf("Guess little lower!\n");
        }
        number_of_guesses++;
    }

    if(number_of_guesses == 0) {
        printf("You have failed!\n");
    }

    return 0;
}