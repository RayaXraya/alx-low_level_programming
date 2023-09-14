#include "main.h"

/**
 * _isupper - Checks if char is uppercase
 * @c: The letter to be checked
 * Return: 1 if upper, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
