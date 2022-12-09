#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * description: get a random number and print number
 * return 0
 */
int main(void)
{
	int b;
	srand(time(0));
	b = rand() - RAND_MAX / 2;
	if (b>0)
	{
		printf("%d is positive\n", b);
	}
	else if(b<0)
	{
		printf("%d is negative\n", b);
	}
	else
	{
		printf("%d is zero\n", b);
	}
	return (0);
}
