#include "main.h"

/**
 * count_bits_to_flip - returns the number of bits that need
 * to be flipped to convert one number to another.
 * @num1: the first number.
 * @num2: the second number.
 *
 * Return: the number of bits to flip.
 */
unsigned int count_bits_to_flip(unsigned long int num1, unsigned long int num2)
{
	unsigned int bits_to_flip = 0;

	while (num1 != 0 || num2 != 0)
	{
		if ((num1 & 1) != (num2 & 1))
			bits_to_flip++;

		num1 >>= 1;
		num2 >>= 1;
	}

	return (bits_to_flip);
}
