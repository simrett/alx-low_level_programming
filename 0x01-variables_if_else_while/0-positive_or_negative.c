#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	srand(time(NULL)); /* do not touch this line */

	int n = rand() % 201 - 100; /* do not touch this line */

	printf("%d ", n);

	if (n > 0)
	{
		printf("%i is positive\n");
	}
	else if (n == 0)
	{
		printf("%i is zero\n");
	}
	else
	{
		printf("%i is negative\n");
	}

	return (0);
}
