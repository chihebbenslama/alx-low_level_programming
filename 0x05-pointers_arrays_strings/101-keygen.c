include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(101-crackme));
	int random_variable = rand();
	
	printf("Random value on [0,%d]: %d\n", RAND_MAX, random_variable);
}

