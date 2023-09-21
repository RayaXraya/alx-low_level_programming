#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Descripition: Atny
 * Return: 0
 */

int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;

	printf("Last digit of %i is %i ", n, d);
	if (d > 5)
		printf("and is greater than 5");
	else if (d == 0)
		printf("and is 0");
	else if (d < 6 && d != 0)
		printf("and is less than 6 and not 0");
	printf("\n");
	return (0);
}
