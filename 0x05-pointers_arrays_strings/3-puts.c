#include "main.h"

/**
 * _puts - Prints a string
 * @str: The string
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str + '0');
	}
	_putchar('\n');
}
