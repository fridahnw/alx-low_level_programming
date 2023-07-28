#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements 
 *
 * @h: wat to be printed
 * @Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nill));
		}
		else
		{
			printf("[%d] %s\n" h->len, h->str);
		}

	h = h->next;
	i++;
	}
	return (i);
}
