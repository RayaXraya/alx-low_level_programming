#include <stdio.h>

/**
 * main - Entry
 * Description: Lggg
 * Return: 0
 */

int main(void)
{
	int i, k, m;

	for (i = 48; i <= 57; i++)
	{
		for (k = 48; k <= 57; k++)
		{
			for (m = 48; m <= 57; m++)
			{
				if (i < k && k < m)
				{
					putchar(i);
					putchar(k);
					putchar(m);
					if (!(i == 55 && k == 56 && m == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
