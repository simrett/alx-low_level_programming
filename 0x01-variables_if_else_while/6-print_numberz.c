#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(48 + num);
		num++;
	}
	putchar('\n');
	return (0);
}
