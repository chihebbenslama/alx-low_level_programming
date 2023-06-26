#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be printed in reverse
 *
 *
*/
void print_rev(char *s)
{
	int i, j;

	j = 0;
	while (j != '\n')
		j++;
	for (i = j; i <= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
