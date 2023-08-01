#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint_t list
 *
 * @head: beginning
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		free(head);
	}
	else
	{
	 	listint_t *y = head;
		while (y != NULL)
		{
			free(y);
			y = y->next;
		}
		free (y);
	}
}
