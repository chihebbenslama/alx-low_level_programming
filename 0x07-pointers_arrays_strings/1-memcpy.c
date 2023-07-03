#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copies memory area.
 * @dest: memory area
 * @src: memory area
 * @n: bytes from memory area src
 *
 * Return: Returns a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
