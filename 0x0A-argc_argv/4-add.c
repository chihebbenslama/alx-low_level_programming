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
	int i, sum = 0, valid = 1;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			int num = atoi(argv[i]);

			if (num == 0 && argv[i][0] != '0')
			{
				valid = 0;
				break;
			}
			else
			{
				sum += num;
			}
		}
	}
	if (valid == 0)
	{
		printf("Error");
		return (1);
	}
	else
	{
		printf("%d\n", sum);
		return (0);
	}
}
