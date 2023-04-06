#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int count = 0;
	unsigned long int ob = n ^ m;

	for (i = 0; i < 64; i++)
	{
		if ((ob >> i) & 1)
			count++;
	}

	return (count);
}

