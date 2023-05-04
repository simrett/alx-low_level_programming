#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @binary: binary number.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *binary)
{
	unsigned int decimal;
	int length, power;

	if (!binary)
		return (0);

	decimal = 0;

	for (length = 0; binary[length] != '\0'; length++)
		;

	for (length--, power = 1; length >= 0; length--, power *= 2)
	{
		if (binary[length] != '0' && binary[length] != '1')
		{
			return (0);
		}

		if (binary[length] & 1)
		{
			decimal += power;
		}
	}

	return (decimal);
}
