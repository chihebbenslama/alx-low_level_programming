#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Prints 10 x alphabet
 *
 *
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		print_alphabet();
		n++;
	}
	return (0);
}
