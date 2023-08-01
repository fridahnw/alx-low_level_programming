#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node
 *
 * @head: beginning
 *
 * Return: head node’s data
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *j;

	if (*head == NULL)
	{
		return (0);
	}
	i = (*head)->n;
	j = *head;
	*head = (*head)->next;
	free(j);
	return (i);
}
