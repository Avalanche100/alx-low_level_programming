#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - program that prints all natural numbers from n to 98
 * followed by a new line.
 * numbers must be separated by ,followed by a space.
 * You are allowed to use standard libraries.
 * @k: input number to use.
 * Return: nothing.
 */

void print_to_98(int k)
{
	if (k < 98)
	{
		for (; k < 98; k++)
		{
			printf("%d, ", k);
		}
	}
	else if (k > 98)
	{
		for (; k > 98; k--)
		{
			printf("%d, ", k);
		}
	}
	if (k == 98)
	{
		printf("%d\n", k);
	}
}

