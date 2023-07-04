#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: the string
 * @c: character to be located
 * Return: s or Null if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	i++;
	}
	return (0);
}
