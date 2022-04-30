// Problem 9

#include<stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int max;


    if(a <= b && c <= b)  {
        max = a + c;
        printf("%d", max);
    }

    else if(a <= c && b <= c)  {
        max = a + b;
        printf("%d", max);
    }

    else if(b <= a && c <= a)  {
        max = b + c;
        printf("%d", max);
    }


    return 0;
}