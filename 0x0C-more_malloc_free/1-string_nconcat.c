#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: what is appended
 * @n: number of bytes
 * Return: s1
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	int j = 0;
	int i = 0;

	for (; s1[j] != '\0'; j++)
	{
		;
	}
	while
	{
		s2[i] < '\0';
		i++;
		if (n > i)
		{
			n = i;
		}
	}

	j = j + n;

	k = malloc(j + 1);

	if (k == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++);
	{
		if (i < 


