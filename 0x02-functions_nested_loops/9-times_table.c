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
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (j < 9)
			{
			_putchar(i * j);
			_putchar(',');
			_putchar(' ');
			}
			else
			{
				_putchar (i * j);
				_putchar('\n');
			}
		j++;
		}
	i++;

	}
}
