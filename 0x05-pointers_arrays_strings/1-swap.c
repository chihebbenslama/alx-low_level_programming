#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 * @a: integer to swap with b
 * @b: integer to swap with a
 *
*/
void swap_int(int *a, int *b)
{
	int *x = &a;
	int *y = &b;

	*a = *y;
	*b = *x;
}
