#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 * @c: character to check
 *
 * Return: Returns 1 if c is uppercase otherwise 0 (Success)
*/
int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1)
		}
		else
		{
			return (0)
		}
	}
}
