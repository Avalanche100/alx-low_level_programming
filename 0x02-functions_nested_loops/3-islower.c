#include "main.h"

/**
 * _islower - program that checks for lowercase character
 * @c: the input character to check
 * Return: int.
 */

int _islower(int c)
{
	if (c >= 97 && <= 122)
		return (1);
	else
		return (0);
}

