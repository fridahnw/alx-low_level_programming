#include "main.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 *
 * @str: the string
 *
 * @Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i;

	char *f;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	f = malloc((i + 1) * sizeof(char));
	if (f == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			f[i] = str[i];
		}
	}
	f[i] = '\0';
	return (f);
}
