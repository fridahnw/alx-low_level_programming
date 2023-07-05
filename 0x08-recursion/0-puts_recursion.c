#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
