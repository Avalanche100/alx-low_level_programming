#include "main.h"

/**
 * -abs - program that prints the absolute value of an integer
 *  @x: the input number to check
 *  Return: int.
 */

int _abs(int x)
{
	if (x < 0)
	{
		x = x * (-1);
		return (x);
	}
	else
		return (x);
}

