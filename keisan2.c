#include<stdio.h>
int main(void)
{
	int a,  surplus ;

	printf("please enter number of a: ");
	scanf_s("%d", &a);

	
		surplus = a % 2;

	if (surplus == 0)
	{
		printf("%d is even number", a);
	}

	else
	{
		printf("%d is odd number", a);
	}


	return 0;



}
