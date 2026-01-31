#include <stdio.h>

int main()
{
	int num1,num2;
	float ave;
	printf("enter the first number \n");
	scanf("%d",&num1);
	printf("enter the second number \n");
	scanf("%d",&num2);
	ave=(num1+num2)/2;
	printf("the ave is %lf",ave);
	return 0;
}