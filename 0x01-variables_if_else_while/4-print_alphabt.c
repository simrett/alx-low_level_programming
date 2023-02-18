#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/**
 * main - prints lowercase alphabets except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
		{}
		else
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
