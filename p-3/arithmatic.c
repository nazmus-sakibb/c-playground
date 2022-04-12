#include<stdio.h>

int main() {
    double num1, num2;

    scanf("%lf %lf", &num1, &num2);

    double sum = num1 + num2;
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, sum);

    double biyog = num1 - num2;
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, biyog);

    double multiplications = num1 * num2;
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, multiplications);

    double devide = num1 / num2;
    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, devide);

    // int mods = num1 % num2;
    // printf("%.2lf %% %.2lf = %.d\n", num1, num2, mods);

    return 0;
}
