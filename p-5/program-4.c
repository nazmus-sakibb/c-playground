//  area of a trapezoid

#include <stdio.h>
int main()
{
    int a, b, h;

    scanf("%d\n %d\n %d", &a, &b, &h);

    int area = 0.5 * (a + b) * h;

    printf("%d\n", area);
    return 0;
}