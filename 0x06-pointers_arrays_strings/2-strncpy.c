#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string.
 * @dest: string
 * @src: string
 * @n: n bytes from src
 *
 * Return: the string copied
*/
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
