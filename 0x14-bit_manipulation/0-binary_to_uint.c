#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 characters
 *
 * Return: The coverted number or c0 if the string contains non-0/1 chars
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int bit = 0;

while (b && *b)
{
if (*b != '0' && *b != '1')
return (0);

bit = bit << 1;
bit = bit | (*b - '0');
b++;
}
return (bit);
}
