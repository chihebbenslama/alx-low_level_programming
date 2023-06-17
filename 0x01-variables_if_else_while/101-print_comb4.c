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
	int i, j, t, c, w, v;

	t = 0;
	v = 0;
	for (i = 0; i <= 7; i++)
	{
		v = w + 1;
		w = 0;
		for (j = t + 1; j <= 8; j++)
		{
			for (c = w + 2; c <= 9; c++)
			{
				if (((i != j) || (i != c)) || (j != c))
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + c);
				}
				if ((i == 7) && (j == 8) && (c == 9))
				{
					putchar('\n');
				} else
				{
					putchar(',');
					putchar(' ');
				}
			}
		w++;
		}
	t++;
	v++;
	}
	return (0);
}
