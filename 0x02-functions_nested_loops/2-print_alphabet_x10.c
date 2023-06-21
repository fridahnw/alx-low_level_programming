#include "main.h"


/**
 * print_alphabet_x10 - prints 10 times the alphabet
 */

void print_alphabet_x10(void)

{
	int i;
	char lc;

	for (i = 0; i <= 9; i++)

	{
		for (lc = 'a'; lc <= 'z'; lc++)

		{
			_putchar(lc);
		}
		_putchar('\n');
	}
}
