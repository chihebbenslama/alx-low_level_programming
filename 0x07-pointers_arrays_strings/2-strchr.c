#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string.
 * @s: the sting to be checked
 * @c: the character to search for
 *
 * Return: Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
