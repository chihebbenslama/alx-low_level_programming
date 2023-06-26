#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @n: number of elements of the array to be printed
 * @a: the array to be printed
 *
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	_putchar(a[n - 1]);
	_putchar('\n');
}
