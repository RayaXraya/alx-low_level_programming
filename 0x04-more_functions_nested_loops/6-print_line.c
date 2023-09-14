#include "main.h"

/**
 * print_line - Prints a line in the terminal
 * @n: num
 * Return: ...
 */

void print_line(int n)
{
	if (n > 0)
	{
		int z;

		for (z = 0; z < n; z++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
