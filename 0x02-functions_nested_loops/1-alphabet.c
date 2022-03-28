#include "main.h"

/**
 * main - prints the alphabets in lowercase followed by a new line.
 * Only use _putchar twice.
 * Return: Nothing.
 */

void print_alphabet(void)
{
	int plw = 'a';

	while (plw <= 'z')
	{
		_putchar(plw);
		plw += 1;
	}
	_putchar('\n');
}

