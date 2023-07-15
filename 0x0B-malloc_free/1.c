#include "main.h"
#include "stdlib.h"

/**
 * create_array - creates an array of chars
 *
 * @size: bytes
 * @c: initial
 *
 * Return: s
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	if (size == 0)
	{
		return (NULL);
	}



	s = malloc((size + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		unsigned int i = 0;

		for (; i < size; i++)
		{
			s[i] = c;
		}
		s[size] = '\0';
	}
	return (s);
}
