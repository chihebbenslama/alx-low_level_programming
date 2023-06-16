#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet in lowercase
 * exept for the letters 'q' , 'e'
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		while ((lower != 'q') && (lower != 'e'))
		{
			putchar(lower);
		}
	}
	putchar('\n');
	return (0);
}
