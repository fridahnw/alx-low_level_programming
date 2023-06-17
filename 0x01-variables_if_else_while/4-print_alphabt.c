#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of a program
 *
 * Return: 0 on success
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
		{
			putchar(lc);
		}
	}
	putchar('\n');
	return (0);
}
