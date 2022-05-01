// Problem 2

#include<stdio.h>

int main() {
    int n, p, q;

    scanf("%d\n", &n);

    int room = 0;

    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &p, &q);
        if ((q - p) >= 2) room++;
    }
    printf("%d", room);

    return 0;
}