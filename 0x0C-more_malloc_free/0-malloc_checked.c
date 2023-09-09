#include <stdlib.h>

/*
 * main - 
 *
 */

void *malloc_checked(unsigned int b)
{
	void *all

	all = malloc(sizeof(b));
	if (*all == NULL)
		exit(98);
	return (all);
}
