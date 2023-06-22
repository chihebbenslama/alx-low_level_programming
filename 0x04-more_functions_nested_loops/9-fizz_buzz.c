#include <stdio.h>

/**
 * main - print fizz if i is multiples of three
 * else print buzz if i is multiples of five
 * else print fizzbuzz if i is multiple of five and three
 * otherwise prints i
 *
 * Return: Always 0 (success).
*/
int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("Buzz");
	putchar('\n');
	return (0);
}
