#include "main.h"

/**
 * mult - return natural suqare root of n
 * @a: multpiles
 * @b: the integer n
 *
 * Return: return natural suqare root of b
*/
int mult(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	return (mult(a - 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 *
 * Return: return -1 if n does not have a natural square root else
 * return it's natural suquare root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (mult(1, n));
}
