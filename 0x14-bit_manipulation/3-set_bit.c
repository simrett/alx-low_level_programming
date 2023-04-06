#include "main.h"

/**
 * set_bit - sets the value of bit to 1
 * @n: pointer to the number to be changed
 * @index: index of the bit to be set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1ul << index;
	*n |= mask;

	return (1);
}

