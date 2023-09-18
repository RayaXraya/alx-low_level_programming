#include "main.h"

/**
 * print_rev - Print a string in rev
 * @s: The string
 * Return: ...
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
