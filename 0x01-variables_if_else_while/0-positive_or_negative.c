#include <stdio.h>
#include <time.h>
#included <stdlib.h>
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
		printf("%i is positive\n", b);
	else if(b<0)
		printf("%i is negative\n", b);
	else
		printf("%i is zero\n", b);
	return (0);
}
