#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * at a given index.
 * @numptr: pointer to an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *numptr, unsigned int index)
{
	unsigned int bitmask;

	if (index > 63)
		return (-1);

	bitmask = 1 << index;
	*numptr = (*numptr | bitmask);

	return (1);
}
