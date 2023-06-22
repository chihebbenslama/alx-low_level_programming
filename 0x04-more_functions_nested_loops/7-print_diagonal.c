#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: checks if c is a digit
 *
 * Return: Returns 1 if c is a digit otherwise 0.
*/
void print_diagonal(int n)
{
	if ( n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
	}
	_putchar('\n');
}
