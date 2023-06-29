#include "main.h"

/**
 * string_toupper - function that changes all lowercase of a to uppercase
 * @f: the string thatis lowercase
 * Return: uc
 */

char *string_toupper(char *f)
{
	int i = 0;

	for (; f[i] != '\0'; i++)
	{
		if (f[i] >= 97 && f[i] <= 122)
		{
			f[i] = f[i] - 32;
		}
	}
	return (f);
}
