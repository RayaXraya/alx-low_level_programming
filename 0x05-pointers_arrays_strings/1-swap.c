#include "main.h"

/**
 * swap_int - Swaps values of 2 ints
 * @a: 1st int
 * @b: 2nd int
 * Return: ...
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
