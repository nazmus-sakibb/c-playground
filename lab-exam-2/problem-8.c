// Problem 8

#include<stdio.h>

int main() {
    int n, index = 1;

    scanf("%d", &n);

    while(index <= n){
        if(index & 1){
            printf("I hate ");
        }
        else {
            printf("I love ");
        }
        if(index < n){
            printf("that ");
        }
        index++;
    }
    printf("it");

    return 0;
}
