#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: string which is being copied into
 * @src: string being copied
 * @n: number of bytes of src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
