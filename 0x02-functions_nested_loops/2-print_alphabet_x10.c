#include "main.h"

/**
 * print_alphabet_x10 - Printing alphabet ten
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char d;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
