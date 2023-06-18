#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * main - Entry point of a program
 *
 * Return: 0 on success
 */
int main(void)
{
	int p, q;

	for (p = 0; p <= 9; p++)
	{
		putchar('0' + p);

		for (q = p + 1; q <= 9 ; q++)
		{
			putchar(q + '0');

			if (p != 8 && q != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
