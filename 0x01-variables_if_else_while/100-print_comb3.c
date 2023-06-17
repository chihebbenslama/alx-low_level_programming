#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints a random number and states whether
 * it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, t;

	t = 0;
	for (i = 0; i <= 8; i++)
	{
		for (j = t + 1; j <= 9; j++)
		{
			if (i != j) 
			{
			putchar('0' + i);
			putchar('0' + j);
			}
			if ((i == 8) && (j == 9))
			{
				putchar('\n');
			} else
			{
				putchar(',');
				putchar(' ');
			}
		}
	t++;
	}
	return (0);
}
