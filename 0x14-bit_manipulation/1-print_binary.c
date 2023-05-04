#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @number: the number to print in binary.
 *
 * Return: none.
 *
 */
void print_binary(unsigned long int number)
{
	if (number >> 0)
	{
		if (number >> 1)
			print_binary(number >> 1);

		_putchar((number & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
