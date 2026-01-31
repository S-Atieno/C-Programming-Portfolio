#include <stdio.h>

int main()
{
    int i = 1;

    do
    {
        if(i == 5)
        {
            i++;          // move to next number first
            continue;     // skip printing 5
        }

        if(i == 8)
            break;        // stop the loop completely

        printf("%d\n", i);
        i++;

    } while(i <= 10);

    return 0;
}
