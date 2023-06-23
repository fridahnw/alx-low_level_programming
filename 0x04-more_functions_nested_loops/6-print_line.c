#include "main.h"

/**
 * print_line - prints straight line n times.
 *
 * @n: times straight line is printed.
 * Return: no return.
 */

void print_line(int n)

{
	int i;

	if (n <= 0)

	{
		_putchar('\n');
	}

	else

	{
		for (i = 0; i < n; i++)

		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
