#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character.
 * @c: character to check
 *
 * Return: Returns 1 if c is uppercase otherwise 0 (Success)
*/
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
	}
}
