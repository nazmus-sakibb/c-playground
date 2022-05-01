#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main () {
    srand(time(0));
    int hidden = rand() % 100 + 1;

    printf("%d\n", hidden);

    while(true) {
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
    }
}