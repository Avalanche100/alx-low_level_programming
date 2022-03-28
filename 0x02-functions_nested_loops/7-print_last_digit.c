#include "main.h"

/**
 * print_last_digit - program that print the last digit of a number
 * @c: the character used to print the l.d.
 * Return: int.
 */

int print_last_digit(int c)
{
	c %= 10;

	if (c < 0)
		c *= -1;
		
		_putchar(c + '0');
		return (c);
	
}
i
