#include "main.h"
#include <stdio.h>

/**
 * main - takes a pointer to an int as parameter and
 * updates the value it points to to 98.
 * @*p: pointer to n
 *
 * Return: the value of n updated
*/
void reset_to_98(int *n)
{
	int *p = &n;

	*p = 98;
	return (*p);
}
