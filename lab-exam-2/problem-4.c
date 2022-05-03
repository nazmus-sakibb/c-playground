// Problem 4

#include<stdio.h>

int main() {
    int n;
    scanf("%d\n", &n);

    int wonAnton = 0;
    int wonDanik = 0;

    for (int i = 0; i <= n; i++) {
        char ch;
        scanf("%c", &ch);
        if(ch == 'A') wonAnton++;
        else if(ch == 'D') wonDanik++;
    }

    if( wonAnton == wonDanik ) {
        printf("Friendship");
    }
    else if( wonAnton > wonDanik ) {
        printf("Anton");
    }
    else {
        printf("Danik");
    }

    return 0;
}