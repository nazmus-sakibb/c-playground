// Problem 1 (A - A)

#include <stdio.h>

int main()
{
    int n, k, a;

    scanf("%d %d %d", &n, &k, &a);
    int lastPosition;

    if (k <= n - a + 1)
    {
        k = k + a - 1;
        // printf("%d\n", k);
    }

    k = k - (n - a + 1);
    // printf("%d\n", k);

    lastPosition = (k % n == 0) ? n : (k % n);
    printf("%d", lastPosition);

    return 0;
}