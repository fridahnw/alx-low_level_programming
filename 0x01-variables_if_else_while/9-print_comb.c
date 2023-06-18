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
	int n;

	n = 0;

	while (n <= 9)

	{
		putchar('0' + n);
		if (n != 9)

		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
