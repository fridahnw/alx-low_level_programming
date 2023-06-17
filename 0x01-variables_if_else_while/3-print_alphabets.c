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
	char uc;
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)

	{
		putchar(lc);
	}

	for (uc = 'A'; uc <= 'Z'; uc++)

	{
		putchar(uc);
	}

	putchar('\n');
	return (0);
}
