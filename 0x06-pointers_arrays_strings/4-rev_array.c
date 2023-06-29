#include "main.h"
#include <string.h>

/**
 * reverse_array - content of an array of integers.
 * @a: array
 * @n: number of elemnts
 *
 */
void reverse_array(int *a, int n)
{
	int i, j;

	j = 0;
	for (i = n - 1; i >= n / 2; i--)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
		j++;
	}
}
