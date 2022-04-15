// Problem 6

#include <stdio.h>
int main()
{
    int abul, babul, average;

    scanf("%d %d", &abul, &average);

    babul = (average * 2) - abul;

    printf("%d\n", babul);

    return 0;
}