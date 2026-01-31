#include <stdio.h>

int main(void) {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("the year is a leap year.\n");
    else
        printf("the year is NOT a leap year.\n");

    return 0;
}
