include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int pw[100];
	int i, n;


	srand(time(NULL));

	n = rand() % 101;
	for (i = 0; i < n; i++)
	{
		pw[i] = rand() % 94;
		putchar(pw[i] + '!');
	}
}
