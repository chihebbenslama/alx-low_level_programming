#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: arguments count
 * @argv: arguments
 * Return: 1 if the program does not receive two arguments else return 0
*/

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i, sum = 1;

		for (i = 1; i < argc; i++)
		{
			sum = sum * atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
