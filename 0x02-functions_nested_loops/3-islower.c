#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase character.
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase returns 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} return (0);
}
