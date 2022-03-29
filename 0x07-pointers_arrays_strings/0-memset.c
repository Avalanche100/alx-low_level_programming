#include "main.h"

/**
 * _memset - function that fills the memory with constant byte.
 *
 * @n: size of bytes
 * @b: constant byte
 * @s: memory area to return
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{

		*(s + k) = b;
		k += 1;
	}
	return (s);
}

