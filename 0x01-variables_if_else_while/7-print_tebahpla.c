#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the lowercase alphabet in reverse, followed by a new line.
 *
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
