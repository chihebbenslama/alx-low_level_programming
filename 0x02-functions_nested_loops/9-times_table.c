#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 *
 *
*/
void times_table(void)
{
	int i, j, t;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			t = i * j;
			if (t > 9)
			{
			_putchar((t / 10) + '0');
			_putchar((t % 10) + '0');
			}
			else
			{
			_putchar((t % 10) + '0');
			_putchar(' ');
			}
			if (j < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		j++;
		}
	i++;

	}
}
