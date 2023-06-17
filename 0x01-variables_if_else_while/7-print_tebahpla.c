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
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}

