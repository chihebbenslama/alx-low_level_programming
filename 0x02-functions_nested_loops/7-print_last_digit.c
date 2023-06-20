#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number to print it's last digit
 *
 * Return: Always return 0 (success)
*/
int print_last_digit(int n)
{
	_putchar(n % 10);
	_putchar(n % 10);
	_putchar('\n');
	return (0);
}
