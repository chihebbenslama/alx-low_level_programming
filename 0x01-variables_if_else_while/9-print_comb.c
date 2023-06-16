#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	n = 0;
	while (n < 9)
	{
		putchar('0' + n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar("9\n");
	return (0);
}
