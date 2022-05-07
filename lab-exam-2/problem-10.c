#include<stdio.h>

int main() {
   int a, b, c;

   scanf("%d%d%d", &a, &b, &c);

   int r = ("%d%d%d + %d%d%d + %d%d%d", a,b,c,b,c,a,c,a,b);

   printf("%d", r);

    return 0;
}