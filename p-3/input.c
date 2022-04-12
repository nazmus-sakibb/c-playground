#include<stdio.h>

int main() {
    int english;
    int math;
    int marks;

    scanf("%d\n", &english);
    scanf("%d", &math);

    marks = english + math;

    printf("Total Marks = %d", marks);
    return 0;
}