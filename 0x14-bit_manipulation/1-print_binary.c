#include "main.h"

/**
 * print_binary - print binary representation
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
			break;
	}
	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
