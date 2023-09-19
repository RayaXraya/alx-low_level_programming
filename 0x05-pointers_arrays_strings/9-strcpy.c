#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src.
 * @src: String
 * @dest: Buffer
 * Description: Including the terminating null byte (\0)
 * Return: Pointer value to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
