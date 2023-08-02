#include "lists.h"
#include <stdio.h>

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	if (h == NULL)
	{
		printf("%d\n", h->n);
		i = i + 1;
		return (i);
	}
	else
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}
	return (i);
}
					
