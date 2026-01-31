#include <stdio.h>

int main()
{
	int num;
	printf("Enter number\n");
	scanf("%d",&num);
	switch(num)
	{
	case 1:printf("one");
		break;
	case 2:printf("two");
	    break;
	case 3:printf("three");
	    break;
	case 4:printf("four");
        break;
    case 5:printf("five");
        break;
	default:printf("Error");
	}
	return 0;
}