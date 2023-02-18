#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Prints lowercase alphabets
 *
 * Return: Always 0 (sucsess)
 */
int main(void)
{
	char c = 'z';

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
