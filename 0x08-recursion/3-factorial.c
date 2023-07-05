#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the integer to work on
 *
 * Return: return -1 to indicate an error
 * Factorial of 0 is 1 else return factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
