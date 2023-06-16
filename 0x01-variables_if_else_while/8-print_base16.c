#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints
 *
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar ('0' + n);
		n++;
	}
	while ((n > 9) && (n < 16))
	{
		putchar ('W' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
