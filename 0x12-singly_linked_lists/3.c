#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end -  adds a new node at the end
 *
 * @head: beginning
 * @str: what to be added
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *k;
	
	k = malloc(sizeof(list_t));
	if (k == NULL)
	{
		return (NULL);
	}
	k->str = strdup(str);
	k->next = NULL;
	else
	{
		while ( *head != NULL)
		{
			*head = *head->next;
		}
		*head->next = k;
		
	}
	return (k);
}
