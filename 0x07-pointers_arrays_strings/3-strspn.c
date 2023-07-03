#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment
 * @accept: string
 *
 * Return: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
