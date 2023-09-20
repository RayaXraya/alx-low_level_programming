#include "main.h"

/**
 * *_strcat - Appends src with dest
 * @src: 1st string
 * @dest: 2nd string
 * Return: The new pinter to dest
 */

char *_strcat(char *dest, char *src)
{
	int v, k, n, a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
		;

	v = b + a;
	k = 0;

	for (n = 0; dest[n] <= v; n++)
	{
		if (n >= a)
		{
			dest[n] = src[k];
			k++;
		}
	}
	return (dest);
}
