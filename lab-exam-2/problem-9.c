// Problem 9

#include <stdio.h>

int main()
{
    int x;

    scanf("%d", &x);

    int needPoint = 0;

    while (x >= 0 && x <= 100)
    {
        if (x >= 90)
        {
            printf("expert");
            break;
        }
        else if (x >= 70 && x < 90)
        {
            needPoint += 90 - x;
            printf("%d", needPoint);
            break;
        }

        else if (x >= 40 && x < 70)
        {
            needPoint += 70 - x;
            printf("%d", needPoint);
            break;
        }

        else if (x >= 0 && x < 40)
        {
            needPoint += 40 - x;
            printf("%d", needPoint);
            break;
        }
    }

    return;
}