#include "main.h"

/**
 * *_strncat - Appends src with dest
 * @src: 1st string
 * @dest: 2nd string
 * @n: TGhe num
 * Return: The new pinter to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int k, x, a;

	for (a = 0; dest[a] != '\0'; a++)
		;

	k = 0;
	for (x = a; src[k] != '\0' && k < n ; x++)
	{
		if (x >= a)
		{
			dest[x] = src[k];
			k++;
		}
	}
	dest[x] = '\0';
	return (dest);
}
