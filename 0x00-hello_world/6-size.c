#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu.\n", sizeof(char), "(s)");
	printf("Size of an int: %zu.\n", sizeof(int), "(s)");
	printf("Size of a long int: %zu.\n", sizeof(long), "(s)");
	printf("Size of a long long int: %zu.\n", sizeof(long long), "(s)");
	printf("Size of a float: %zu.\n", sizeof(float), "(s)");
	return (0);
}
