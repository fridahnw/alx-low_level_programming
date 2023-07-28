#include "lists.h"
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning 
 *
 * @head: beginning
 *
 * @str: what it will contain
 * @Return: idk
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if(new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->str = strdup(str);
		new->next = *head;
		*head = new;
	}
	return (*head);
}
