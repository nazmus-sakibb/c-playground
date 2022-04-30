// Problem 3

#include <stdio.h>

int main()
{
    int n, t;

    scanf("%d\n", &n);

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &t);

        if (t < 0)
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}