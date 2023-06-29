#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: string to be appended into
 * @src: string that is appended
 * Return: dest
 */

char *_strcat(char *dest, char *src)

{
	int l = 0, m;

	while (dest[l] != '\0')
	{
		l++;
	}

	for (m = 0; src[m] != '\0'; m++, l++)
	{
		dest[l] = src[m];
	}

	dest[l] = '\0';

	return (dest);
}

