#include <stdio.h>

/**
 * main - program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: int.
 */

int main(void)
{
	long i = 0;
	long j = 1;
	int k = 0;
	long fibo;

	while (k < 50)
	{
		fibo = j + i;
		if (k != 49)
			printf("%ld, ", fibo);
		else
			printf("%ld\n", fibo);
		i = j;
		j = fibo;
		k += 1;
	}
	return (0);
}

