#include <stdio.h>
int computeProduct(int num1,int num2)
{
	return num1*num2;
}
int main()
{
	int number1,number2,product;
	printf("enter the first number:");
	scanf("%d",&number1);
	printf("enter the second number:");
	scanf("%d",&number2);
	product=computeProduct(number1,number2);
	printf("The product of %d and %d is %d\n",number1,number2,product);
	return 0;
}