// vowel or consonant

#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("vowel\n", ch);
    }

    else {
        printf("consonant\n");
    }

    return 0;
}