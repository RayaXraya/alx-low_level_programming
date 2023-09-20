#include "main.h"

/**
 * reverse_array - Rev an array
 * @a: Array
 * @n: Size of array
 * Return: ...
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n -1];
		a[n - 1] = temp;
		n--;
		i++;
	}
}
