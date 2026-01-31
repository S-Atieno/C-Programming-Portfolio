#include <stdio.h>

int main()
{
	int num1, num2;
	float average;
	printf("enter num1");
	scanf("%d",&num1);
	printf("enter num2");
	scanf("%d",&num2);
	average=(num1+num2)/2;
	printf("The average is %.2f\n",average);
	return 0;
}