#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Displays base 10 numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%i", num);
		num++;
	}
	printf("\n");
	return (0);
}
