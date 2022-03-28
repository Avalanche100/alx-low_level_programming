#include <stdio.h>

/**
 * main - program that finds and prints the sum of the
 * even-valued terms, followed by a new line.
 * Return: 0
 */

int main(void)
{
	int k = 1, l = 2, total = 0;
	int z;

	while (l < 4000000)
	{
		if (l % 2 == 0)
			total += l;

		z = l;
		l += k;
		k = z;
	}
	printf("%d\n", total);
	return (0);
}

