#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: integer
 * @y: raising x to the power of y
 *
 * Return: If y is lower than 0 return -1 else if y is 0 return 1
 * else return x power of y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
