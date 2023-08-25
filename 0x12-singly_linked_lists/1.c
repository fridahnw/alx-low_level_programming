#include "lists.h"
#include <stdio.h>

size_t list_len(const list_t *h)
{
	size_t i;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

