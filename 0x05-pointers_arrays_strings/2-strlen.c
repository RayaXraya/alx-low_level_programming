#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string
 * Return: int
 */

int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; s++)
		l++;

	return (l);
}
