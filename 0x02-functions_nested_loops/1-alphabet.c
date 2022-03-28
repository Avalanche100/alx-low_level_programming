#include "main.h"

/**
 * main - prints the alphabets in lowercase followed by a new line.
 * Description: You are not allowed to use standard libraries.
 * Only use _putchar twice.
 * Return: Nothing.
 */

void print_alphabet(void)
{
	int alw = 'a';

	while (alw <= 'z')
	{
		_putchar(alw);
		alw += 1;
	}
	_putchar(10);
}

