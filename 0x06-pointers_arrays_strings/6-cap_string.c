#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string.
 * @str: the string to check
 *
 * Return: the string in uppercase
*/
char *cap_string(char *str);
{
	int i;
	char j;

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (str[0] == j)
			{
				str[0] -= 32;
			}
			if
				(str[i - 1] == ',') || (str[i - 1] == ';') ||
				(str[i - 1] == '.') || (str[i - 1] == '!') ||
					(str[i - 1] == '?') || (str[i - 1] == '"') ||
					(str[i - 1] == "\(") || (str[i - 1] == "\)") ||
					(str[i - 1] == "\{") || (str[i - 1] == "\}")
					str[i] -= 32;
		}
		i++;
	}
	return (str);
}
