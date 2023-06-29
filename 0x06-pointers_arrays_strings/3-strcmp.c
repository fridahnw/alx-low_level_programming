#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: one of the string
 * @s2: the second string
 * Return: diff
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff;

	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}

	diff = s1[i] - s2[i];

	return (diff);
}
