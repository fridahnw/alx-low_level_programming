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
	(void)head;

	if (*head == NULL)
	{
		return (0);
	}
	i = (*head)->n;
	listint_t *j = *head;
	*head = (*head)->next;
	free(j);
	return (i);
}
