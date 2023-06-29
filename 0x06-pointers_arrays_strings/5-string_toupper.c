#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: the string to check
 *
 * Return: the string in uppercase
*/

char *string_toupper(char *str)
{
	int i;
	char j;

	for (i = 0; i < strlen(str) - 1; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (str[i] == j)
				str[i] = j - 32;
		}
	}
	return (str);
}
