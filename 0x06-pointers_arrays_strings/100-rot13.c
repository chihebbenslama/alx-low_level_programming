#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rot13 - encodes a string into rot13
 * @str: string to encode
 *
 * Return: address of str
 */
char *rot13(char *str)
{
	int i, j, len;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == str[i])
			{
				str[i] = b[j];
			}
		}
	}
	return (str);
}
