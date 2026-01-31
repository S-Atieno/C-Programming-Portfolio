#include <stdio.h>

int main()
{
	int score;
	printf("enter student's score\n");
	scanf("%d",&score);
	if (score>=70)
	{
		/*if condition is true then print the following*/
		printf("Grade is A\n");
	}
	else if (score>=60)
	{
		/*if else if condition is true then print the following*/
		printf("Grade is B\n");
	}
    else if (score>=50)
	{
		/*if else if condition is true then print the following*/
		printf("Grade is C\n");
	}
	else if (score>=40)
	{
		/*if else if condition is true then print the following*/
		printf("Grade is D\n");
	}
	else
	{
		/*if else if condition is true then print the following*/
		printf("Grade is FAIL\n");
	}
	return 0;
}