#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num1, num2;
    float num3, num4;
    
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int sum1 = num1 + num2;
    int dif1 = num1 - num2;
    
    printf("The sum of the two numbers are: %d \n The difference of the two numbers are: %d", sum1, dif1);
    
    
    printf("Enter 2 numbers: ");
    scanf("%f %f", &num3, &num4);
    
    float sum2 = num3 + num4;
    float dif2 = num3 - num4;
    
    printf("The sum of the two numbers are: %.1f \n The difference of the two numbers are: %.1f", sum2, dif2);
    
    return 0;
}