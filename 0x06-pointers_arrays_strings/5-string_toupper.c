#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdio.h>

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

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (str[i] == j)
				str[i] = j - 32;
		}
		i++;
	}
return (str);
}
