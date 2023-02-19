#include <stdio.h>
/* more headers goes there */

/*
 * main - Entry point of the program
 *
 * This function Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
