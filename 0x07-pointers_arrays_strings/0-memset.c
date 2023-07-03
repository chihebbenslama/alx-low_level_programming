#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: memory area.
 * @b: constant byte
 * @n: bytes of the memory area pointed to by s.
 *
 * Return: Returns a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
