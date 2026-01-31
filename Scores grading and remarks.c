#include <stdio.h>

int main()
{
	int score;
	printf("enter student's score\n");
	scanf("%d",&score);
	if (score>=70)
	{
		/*if condition is true then print the following*/
		printf("A\n");
		printf("Excellent!good work keep it up");
	}
	else if (score>=60&& score<=69)
	{
		/*if else if condition is true then print the following*/
		printf("B\n");
		printf("very good");
	}
    else if (score>=50&& score<=59)
	{
		/*if else if condition is true then print the following*/
		printf("C\n");
		printf("Good,can do better");
	}
	else if (score>=40&& score<=49)
	{
		/*if else if condition is true then print the following*/
		printf("D\n");
		printf("Pass but needs more effort");
	}
	else
	{
		printf("FAIL\n");
		printf("Pull up your socks");
	}
	return 0;
}