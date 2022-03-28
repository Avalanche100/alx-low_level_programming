#include "main.h"

/**
 * jack_bauer - programs that prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59.
 * Return: nothing.
 */

void jack_bauer(void)
{
	int k = 0;
	int l = 0;

	while (k <= 23)
	{
		l = 0;
		while (l <= 59)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar(':');
			_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
			_putchar('\n');
			l += 1;
		}
		k += 1;
	}
}

