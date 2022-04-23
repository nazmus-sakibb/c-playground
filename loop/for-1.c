#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    printf("*****************\n");
    for (int i = 1; i < n -2; i++) {
        printf("*\t\t*\n");
    }

    printf("*****************");
    return 0;
}
