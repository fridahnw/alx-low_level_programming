#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j = 0;

	if (b == NULL)
		return (0);
	for (i = 0, b[i] != '\0', i++)
	{
		if (b[i] == '0' || b[i] == '1')


			


