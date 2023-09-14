#include "main.h"

/**
 * more_numbers - Prints 0-14 10times
 *
 * Return: ...
 */

void more_numbers(void)
{
	int i, j, h;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			h = j;

			if (j > 9)
			{
				_putchar(1 + '0');
				h = j % 10;
			}
			_putchar(h + '0');
		}
		_putchar('\n');
	}
}
