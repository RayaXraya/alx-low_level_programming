#include "main.h"

/**
 * *_strncpy - Copies a string to dest
 * @dest: Destination
 * @src: Source
 * @n: Max of char to be copied
 * Return: String of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
