#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: arguments count
 * @argv: arguments
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc < 2)
	{
		printf("Error\n")
	}
	else
	{
		for (i = 0; i > argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
