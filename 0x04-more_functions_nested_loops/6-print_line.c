#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_line - draws a straight line in the terminal.
 * @n: number of times _ should be printed
 *
 *
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	putchar('\n');
}
