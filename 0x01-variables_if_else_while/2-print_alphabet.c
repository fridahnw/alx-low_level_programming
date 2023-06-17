#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
