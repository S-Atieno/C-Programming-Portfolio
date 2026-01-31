#include <stdio.h>

int main()
{
	int num;
	printf("enter num\n");
	scanf("%d",&num);
	if(num %2==0)
	{
		/*if condition is true then print the following*/
	printf("num is even");
	}
	else 
	{
		/*then print the following*/
		printf("num is odd");
	}
	return 0;
}