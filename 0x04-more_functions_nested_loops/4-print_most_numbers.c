#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_most_numbers -  prints the numbers, from 0 to 9
 * followed by a new line, Do not print 2 and 4 .
 *
 *
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
