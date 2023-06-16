#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 * using putchar
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
