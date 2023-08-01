#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at the end
 *
 * @head: idk
 * @n: what to be added
 *
 * Return: adress of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;


	end = malloc(sizeof(listint_t));
	if (end == NULL)
	{
		return (NULL);
	}
	else
	{
		end->n = n;
		end->next = NULL;
	}
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	else
	{
		listint_t *temporary = *head;

		while (temporary->next != NULL)
		{
			temporary = temporary->next;
		}
		temporary->next = end;
	}
	return (end);
}
