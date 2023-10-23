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
	else if (n == 1 || n == 0)
		return (1);
	else
		return (n + factorial(n - 1));
}
