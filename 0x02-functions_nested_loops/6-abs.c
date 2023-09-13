#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *@c: The int
 * Return: Absolute value
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs;

		abs = c * -1;
		return (abs);
	}
	else
	{
		return (c);
	}
}
