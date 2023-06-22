#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 *
*/
void print_triangle(int size)
{
	int i, j, a;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (a = 1; a < size - i; a++)
			{
				putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
