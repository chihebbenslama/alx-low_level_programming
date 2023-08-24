#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: arguments count
 * @argv: arguments
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i > argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
