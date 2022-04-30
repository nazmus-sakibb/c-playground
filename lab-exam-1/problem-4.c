// Problem 4

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    float sum;

    for (int i = 0; i < n; i++)
    {
        float a, b;

        scanf("%f %f", &a, &b);
        sum += a * b;
    }

    printf("%.3f", sum);

    return 0;
}