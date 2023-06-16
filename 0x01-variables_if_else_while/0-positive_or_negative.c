#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 *Random number
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n)
	} else if (n > 0)
	{
		printf("%d is positive\n", n);
	} else
	{
		printf("%d is is zero\n", n);
	}
	return (0);
}
