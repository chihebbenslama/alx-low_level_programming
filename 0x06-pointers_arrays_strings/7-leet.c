#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * leet - encodes a string into 1337.
 * @str: string
 *
 * Return: string encoded
*/
char *leet(char *str)
{
	char chaar[] = {aAeEoOtTlL};
	int inarr[] = {4433007711};
	int len, i, j;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == chaar[j])
			{
				str[i] = inarr[j];
			}
		}
	}
	return (str);
}
