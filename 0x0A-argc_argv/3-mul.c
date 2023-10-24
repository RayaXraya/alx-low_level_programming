#include <stdio.h>
#include <stdlib.h>
/**
* main - prints multiplication
*of two numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 0
*/

int main(int argc, char *argv[])
{
	int numfirst, numsecond, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	numfirst = atoi(argv[1]);
	numsecond = atoi(argv[2]);
	mul = numfirst * numsecond;

	printf("%d\n", mul);
	return (0);
}
