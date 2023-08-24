#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 1 if one of the number contains symbols else return 0
*/

int main(int argc, char *argv[])
{
	int i, count = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(atoi(argv[i])) == 0)
			{
				printf("Error");
				return (1);
			}
			else if (atoi(argv[i]) > 0)
			{
				count += 1;
			}
		}
		printf("%d\n", count);
		return (0);
}
