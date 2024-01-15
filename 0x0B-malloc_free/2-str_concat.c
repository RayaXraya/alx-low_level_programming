#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * str_concat - concat
 * @s1: 1st string
 * @s2: 2nd string
 * Return: Pointer to str
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j, len3;
	char *p;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len1++;
	for (i = 0; s2[i]; i++)
		len2++;

	len3 = len1 + len2;
	p = (char *)malloc(sizeof(char) * (len3 + 1));

	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		p[i] = s1[i];
	for (j = 0; s2[j]; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';

	return (p);
}
