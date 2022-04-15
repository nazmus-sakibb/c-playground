#include <stdio.h>
int main()
{
    int height;
    printf("Enter height in inch: ");
    scanf("%d", &height);

    int feet, inch;
    feet = height / 12;
    inch = height % 12;

    printf("Height is %d feet and %d inch", feet, inch);
    
    return 0;
}