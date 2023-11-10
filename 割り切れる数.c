#include<stdio.h>
int main(void)
{
	int max = 10000;
	for (int i = 1; i <= max; i++)
	{
		if (i % 13 == 0) 
		{
			printf("%d ",i);
		}
		else if (i % 17 == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
