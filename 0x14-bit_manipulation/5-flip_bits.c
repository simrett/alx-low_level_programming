#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @a: number one.
 * @b: number two.
 *
 * Return: number of bits.
 *
 */
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	unsigned int nbits = 0;
	unsigned long int c;

	c = a ^ b;

	while (c)
	{
		nbits += c & 1;
		c >>= 1;
	}

	return (nbits);
}

