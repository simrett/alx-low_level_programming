#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @binary: binary number as a null-terminated string.
 *
 * Return: the unsigned int value of the binary number, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *binary)
{
	unsigned int decimal = 0;
	int length, power = 1;

	if (binary == NULL)
		return (0);

	for (length = 0; binary[length] != '\0'; length++)
		;

	for (length--, power = 1; length >= 0; length--, power *= 2)
	{
		if (binary[length] != '0' && binary[length] != '1')
			return (0);

		if (binary[length] & 1)
			decimal += power;
	}

	return (decimal);
}
