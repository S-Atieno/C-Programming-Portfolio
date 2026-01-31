#include <stdio.h>

int main() {
    int radius;
    float area;
    printf("Enter radius: ");
    scanf("%d", &radius);
    area = 22/7 * radius * radius;
    printf("Area is: %.2f\n", area);
    return 0;
}