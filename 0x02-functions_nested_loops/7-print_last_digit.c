#include "main.h"


/**
 * print_last_digit - prints the last digit of a number
 * @i: number whose last digit is to be printed
 * Return: j  on success
 */

int print_last_digit(int i)

{
	int j;

	j = (i % 10);


	if (j < 0)

	{
		j = -j;
	}

	_putchar('0' + j);
	return (j);
}
