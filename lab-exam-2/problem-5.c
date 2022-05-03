// Problem 5 lab exam 2

#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,x,xx,i;

    scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&x);
    xx=x;

    int t=0,aa=0;

    t+=(a*b)*(x/(a+c));
    x%=(a+c);

    if(x<a)
        a=x;
    t+=a*b;

    aa+=(d*e)*(xx/(d+f));
    xx%=(d+f);


    if(xx<d)
        d=xx;
    aa+=(d*e);

    if(t>aa)
        printf("Takahashi\n");
    else if(t<aa)
        printf("Aoki\n");
    else
        printf("Draw\n");
}
