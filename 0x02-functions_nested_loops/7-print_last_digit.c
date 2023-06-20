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
	int r;

	r = n % 10;
	if (n < 0)
	{
		r *= -1;
		_putchar('0' + r);
		return (r);
	} else 
	{
	_putchar('0' + r);                                                                                                                                                                                                                           return (r);
	}
}
