#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu(s).\n", sizeof(char));
	printf("Size of an int: %zu(s).\n", sizeof(int));
	printf("Size of a long int: %zu(s).\n", sizeof(long));
	printf("Size of a long long int: %zu(s).\n", sizeof(long long));
	printf("Size of a float: %zu(s).\n", sizeof(float));
	return (0);
}
