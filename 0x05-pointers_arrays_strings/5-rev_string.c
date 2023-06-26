#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string to be printed in reverse
 *
 *
*/
void rev_string(char *s)
{
	int i, j, n;

	j = 0;
	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		if (j < i)
		{
			char temp = s[j];
				s[j] = s[i];
				s[i] = temp;
				j++;
		}
	}
}
