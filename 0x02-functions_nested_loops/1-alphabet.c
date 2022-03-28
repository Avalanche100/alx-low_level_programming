#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase followed by a new line.
 * You can only use _putchar two times.	
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

