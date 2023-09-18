#include "main.h"

/**
 * puts2 - Prints a string
 * @str: The string
 * Return: void
 */

void puts2(char *str)
{
	for (; *str != '\0'; str = str + 2)
	{
		_putchar(*str + 0);
	}
	_putchar('\n');
}
