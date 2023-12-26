#include <stdio.h>

/**
 * main - Entry
 * Description: Lggg
 * Return: 0
 */

int main(void)
{
	int i, k;

	for (i = 0; i <= 99; i++)
	{
		for (k = i; k <= 99; k++)
		{
			if (i != k)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
			}
			if (!(i == 98 || k == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
