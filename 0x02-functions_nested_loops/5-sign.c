#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number
 * Return: 1 if positive, -1 if negative, 0 if else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(00);
		return (0);
	}
}
