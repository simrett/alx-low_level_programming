#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index.
 * @number: the number to retrieve the bit from.
 * @index: the index of the bit to retrieve.
 *
 * Return: the value of the bit at the given index, or -1 if index is invalid.
 *
 */
int get_bit(unsigned long int number, unsigned int index)
{
	unsigned int i;

	if (index >= 64)
		return (-1);

	for (i = 0; i <= 63; number >>= 1, i++)
	{
		if (index == i)
			return (number & 1);
	}

	/* index out of bounds */
	return (-1);
}
