#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number:\n");
    scanf("%d", &num);

    // First check if the number is positive, negative, or zero
    if (num > 0)
    {
        printf("The number is positive.\n");

        // Nested if: check even or odd only for positive numbers
        if (num % 2 == 0)
        {
            printf("It is also even.\n");
        }
        else
        {
            printf("It is also odd.\n");
        }
    }
    else if (num < 0)
    {
        printf("The number is negative.\n");

        // Nested if: check even or odd only for negative numbers
        if (num % 2 == 0)
        {
            printf("It is also even.\n");
        }
        else
        {
            printf("It is also odd.\n");
        }
    }
    else
    {
        // Zero is neither positive nor negative, but even
        printf("The number is zero and it is even.\n");
    }

    return 0;
}
