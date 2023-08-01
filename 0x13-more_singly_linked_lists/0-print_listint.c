#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements
 *
 * @h: whose elements are to be printed
 *
 * Return: number vof nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
