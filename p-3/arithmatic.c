#include<stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, sum);

    int biyog = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, biyog);

    int multiplications = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, multiplications);

    int devide = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, devide);
    
    return 0;
}