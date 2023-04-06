#include "main.h"

/**
 * get_bit - Get the bit at the index given
 * @n: bit
 * @index: index at which we get
 * Return: bit value, or -1 if index is out of range
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}

