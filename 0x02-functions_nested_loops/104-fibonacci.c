#include <stdio.h>

/**
 * main - Print the sum of even fibonacci numbers less than 4000000
 *
 * Return: Always 0
 */

int main(void)
{
	int a = 1, b = 2, c, i;

	printf("%d, %d, ", a, b);

	for (i = 2; i < 98; i++)
	{
		c = a + b;

		printf("%d", c);

		if (i < 97)
		{
			printf(", ");
		}

		a = b;
		b = c;
	}

	printf("\n");

	return 0;
}
