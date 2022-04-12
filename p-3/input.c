#include<stdio.h>

int main() {
    int english;
    int math;

    printf("Enter English and Math marks = ");
    scanf("%d %d", &english, &math);

    int marks = english + math;

    printf("Total Marks = %d", marks);
    return 0;
}
