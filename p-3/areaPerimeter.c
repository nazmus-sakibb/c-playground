#include<stdio.h>

int main() {
    printf("Enter radius: ");

    double radius;
    scanf("%lf", &radius);

    const double PI = 3.1416;

    double perimeter = 2 * PI * radius;
    printf("Perimeter = %.2lf\n", perimeter);

    double area = PI * radius * radius;
    printf("Area = %.2lf\n", area);

    return 0;
}
