#include <stdio.h>

int main()
{
	int num;
	printf("enter number\n");
	scanf("%d",&num);
	if(num>0)
	{
		//if condition is true then print the following
		printf("number is positive");
	}
	else if(num<0)
	{
		//then print the following
		printf("number is negative");
	}
	else
	{
		printf("number is 0");
	}
	return 0;
}