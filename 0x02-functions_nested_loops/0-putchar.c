#include "main.h"
/**
 * main - a program that prints "_putchar" followed by a new line.
 * Description - You are not allowed to use standard libraries.
 * Return: 0
 */
int main(void)
{
	char akpan[] = "_putchar";
	int m = 0;

	while (akpan[m] != '\0')
	{
		_putchar(akpan[m]);
		m++;
	}
	_putchar('\n');

	return (0);
}

