#include<stdio.h>
int main() {
    int n = 9;
    int m = 9;
    // int cur = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m ; j++) {
            char I = '.';
            if(i % 2 == 0) {
                I++;
                printf("%c", I);
            }
            else {
                printf("#");
            }
        }
        printf("\n");
    }

    return 0;
}