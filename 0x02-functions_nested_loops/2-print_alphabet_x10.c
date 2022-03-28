#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase.
 * You can only use _putchar 2 times in your code
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	int a;
	int b = 0;

	while (b < 10)
	{
		b = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a += 1;
		}
		_putchar(b);
		b += 1;
	}
}

