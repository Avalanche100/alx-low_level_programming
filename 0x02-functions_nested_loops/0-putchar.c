#include "main.h"

/** main - a program that prints "_putchar" followed by a new line.
 * Description - You are not allowed to use standard libraries.
 * Return: 0
 */
int main(void)
{
	char sabi[] = "_putchar",
	     int a = 0;

	while (sabi[a] != '\0')
	{
		_putchar(sabi[a]);
		a++;
	}
	_putchar('\n');

	return (0);
}

