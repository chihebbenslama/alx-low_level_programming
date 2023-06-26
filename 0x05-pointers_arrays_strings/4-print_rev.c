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
	char rev;
	int len;

	len = _strlen(s) - 1;
	j = 0;
	for (i = len; i <= 0; i--)
	{
		rev[j] = s[i];
		j++;
	}
	_puts(rev);
}
