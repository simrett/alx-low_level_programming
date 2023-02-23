#include "main.h"
/**
 * _isupper - check for upper case letter
 *
 * @c: the character to be checked
 *
 * Return: 1 if the letter is uppercase 0 otherwise
 */

int _isupper(int c)
{
if (c <= 'Z' && c >= 'A')
{
return (1);
}
else
{
return (0);
}
}
