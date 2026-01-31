#include <stdio.h>

int main()
{
	int num1,num2;
	printf("enter num1");
	scanf("%d",&num1);
	printf("enter num2");
	scanf("%d",&num2);
	if(num1>num2)
	{
		/*if condition true then print the following*/
		printf("num1 is greater");
	}
	else if(num2>num1)
	{
		/*then print the following*/
		printf("num2 is greater");
	}
	else 
	{
		printf("the two numbers are equal");
	}
	return 0;
}