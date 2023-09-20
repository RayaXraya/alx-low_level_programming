#include "main.h"

/**
 * _strcmp - Compares 2 strings
 * @s1: First string
 * @s2: Second string
 * Return: the difference
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] == '\0')
		return (+1);
	else if (s2[i] == '\0')
		return (-1);
	else
		return (s1[i] - s2[i]);
}
