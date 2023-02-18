#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Prints all single digit numbers of base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	i = 0;

	while (i < 6)
	{
		putchar(i + 'a');
		i++;
	}

	putchar('\n');
	return (0);
}
