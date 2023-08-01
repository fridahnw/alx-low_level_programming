#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning
 *
 * @head: the beginning
 * @n: what to be added
 * Return: adreess of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *l;

	l = malloc(sizeof(listint_t));
	if (l == NULL)
	{
		return (NULL);
	}
	else
	{
		l->n = n;
		l->next = *head;
		*head = l;
	}
	return (*head);
}
