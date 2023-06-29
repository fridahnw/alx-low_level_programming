#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @f: the string
 * Return: f
 */

char *cap_string(char *f)
{
	int i = 0;

	while (f[i] != '\0')

	{
		i++;
		if (f[i] >= 97 && f[i] <= 122)
		{
			f[i] = f[i] - 32;
		}
		if (f[i] == ' ' || f[i] == '\t' || f[i] == '\n'
				|| f[i] == ',' || f[i] == ';' || f[i] == '.'
				|| f[i] == '!' || f[i] == '?' || f[i] == '"' ||
				f[i] == '(' || f[i] == ')' || f[i] == '{' || f[i] == '}')
		{
			f[i] = f[i + 1];
			if (f[i] >= 97 && f[i] <= 122)
			{
				f[i] = f[i] - 32;
			}
		}
	}
	return (f);
}
