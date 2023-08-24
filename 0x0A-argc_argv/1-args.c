#include <stdio.h>

/**
 * main -prints the number of arguments passed into it.
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 0
*/

int main(int argc, *argv[])
{
	int argcount = argc - 1;

	printf("%d\n", argcount);
	return (0);
}
