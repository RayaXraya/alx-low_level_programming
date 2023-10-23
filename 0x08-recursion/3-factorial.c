#include "main.h"

/**
 * factorial - calc factor
 * @n: int
 * Return: sum
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
