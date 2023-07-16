#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	char *c;

	

	c = malloc(b);
	if (c == NULL)
                exit (98);
	return (c);
}
