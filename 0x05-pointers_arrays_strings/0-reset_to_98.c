#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - takes a pointer to an int as parameter and
 * updates the value it points to to 98.
 * @*p: pointer to n
 *
 *
*/
void reset_to_98(int *n)
{
	int *p = &n;

	*p = 98;
}
