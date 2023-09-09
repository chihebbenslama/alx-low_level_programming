#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: allocated memory
 *
 * Return: return pointer to the allocated memory else error 98
*/

void *malloc_checked(unsigned int b)
{
	void *b

	b = malloc(sizeof(b));
	if (*b == NULL)
		exit(98);
	return (b);
}
