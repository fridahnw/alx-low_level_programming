#include "lists.h"
#include <stdio.h>

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = NULL;
	}
	if ((*head) == NULL)
	{
		head->next = new;
		return (new);
	}
	else
	{
		listint_int *temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;

		}
		temp->next = new;
	}
	return (new);
}


