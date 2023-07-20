#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 *
 * @separator:  string to be printed between numbers
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list k;

	va_start(k, n);
	if (n == 0)
	{
		return;
	}
	if (separator == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(k, int));
			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(k);
	}
}
