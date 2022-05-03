// Problem 7

#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    if (B > A)
    {
        printf("%d", B - A + 1);
    }
    else {
        printf("0");
    }

    return 0;
}