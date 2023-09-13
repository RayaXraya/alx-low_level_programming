#include "main.h"

/**
 * print_to_98 - Prints to 98
 * @n: The passed num
 * Return: ...
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			_putchar(n + '0');
			_putchar(44);
			_putchar(32);
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			_putchar(n + '0');
                        _putchar(44);
                        _putchar(32);
		}
	}
	else
	{
		_putchar(n + '0');
	}
}
