#include "main.h"

/**
 * _memcpy - copies a memory area
 *
 * @dest: memory to be copied into
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
