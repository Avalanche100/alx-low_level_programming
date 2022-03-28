#include "main.h"

/**
 * print_last_digit - program that print the last digit of a number
 * @k: the character used to print the l.d.
 * Return: int.
 */

int print_last_digit(int k)
{

	k %= 10;

	if (k < 0)
		k *= -1;

	_putchar(k + '0');
	return (k);
}

