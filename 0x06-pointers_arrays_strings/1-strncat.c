#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings.
 * @dest: string
 * @src: string
 * @n: n bytes from src
 *
 * Return: the two strings concatenated
*/
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
