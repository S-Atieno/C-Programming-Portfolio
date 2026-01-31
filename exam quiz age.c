#include <stdint.h>

int main(int argc, char** argv)
{
	int age;
	printf("enter age\n");
	scanf("%d",&age);
	if(age<18)
	{
		/*if condition is true*/
		printf("you are eligible for the ticket\n");
	}
	else
	{
		/*if condition not true*/
		printf("you are not eligible for the ticket\n");
	}
	return 0;
}