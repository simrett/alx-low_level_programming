#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/**
 * main - Prints lower and uppercase alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char chL = 'a';
	char chU = 'A';

	for (chL = 'a'; chL <= 'z'; chL++)
	{
		putchar(chL);
	}
	for (chU = 'A'; chU <= 'Z'; chU++)
	{
		putchar(chU);
	}
	putchar('\n');
	return (0);
}
