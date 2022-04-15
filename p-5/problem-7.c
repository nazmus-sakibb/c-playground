// Problem 7

#include<stdio.h>
int main() {
    int H,W,h,w;

    scanf("%d %d",&H,&W);
    scanf("%d %d",&h,&w);

    int white = (H - h) * (W - w);
    printf("%d", white);

    return 0;
}