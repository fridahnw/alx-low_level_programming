#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len -  returns the number of elements
 *
 * @h: looking for elements
 * in here
 *
 * Return: length
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
