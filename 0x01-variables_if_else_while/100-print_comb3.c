#include <stdio.h>

/**
 * main - Entry
 * Description: Lggg
 * Return: 0
 */

int main(void)
{
	int i, k;

	for (i = 48; i <= 57; i++)
	{
		for (k = 48; k <= 57; k++)
		{
			if (i < k)
			{
				putchar(i);
				putchar(k);

				if (!(i == 56 && k == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
