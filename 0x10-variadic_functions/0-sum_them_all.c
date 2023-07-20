#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum_them_all
 *
 * @n: sum
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list k;
	unsigned int i;
	int sum = 0;

	va_start(k, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(k, int);
	}
	va_end(k);
	return (sum);
}
