#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @n: size of bytes
 * @dest: destination position
 * @src: source position
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k = 0;
	unsigned int p = 0;

	while (k < n)
	{
		*(dest + k) = *(src + p);
		k += 1;
		p += 1;
	}
	return (dest);
}

