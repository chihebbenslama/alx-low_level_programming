#include <stdlib.h>

/*
 * main -  allocates memory using malloc.
 *
 * Return: return pointer to the allocated memory else error 98
 */

void *malloc_checked(unsigned int b)
{
	void *all

	all = malloc(sizeof(b));
	if (*all == NULL)
		exit(98);
	return (all);
}
