#include "main.h"


/**
 * print_to_98 - prints all natural numbers
 * @n: starting number
 */

void print_to_98(void)

{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
