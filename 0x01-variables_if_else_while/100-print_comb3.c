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

		for (q = p + 1; q <= 8 ; q++)
		{
			putchar('0' + p);
			putchar('0' + q);

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
