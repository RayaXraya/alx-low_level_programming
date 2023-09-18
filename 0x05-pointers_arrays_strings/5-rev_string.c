#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: The string
 */

void rev_string(char *s)
{
	int i, l, z;
	char temp;

	for (l = 0; s[l] != '\0'; l++)
		;

	i = l / 2;

	for (z = 0; z < i; z++)
	{
		temp = s[z];
		s[z] = s[l - z - 1];
		s[l - z - 1] = temp;
	}
}

