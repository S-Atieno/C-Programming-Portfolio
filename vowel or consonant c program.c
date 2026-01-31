#include <stdio.h>

int main(void) {
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);   // NOTE: space before %c avoids taking previous newline

    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
        c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
        printf("Vowel.\n");
    } else {
        printf("Consonant.\n");
    }

    return 0;
}
