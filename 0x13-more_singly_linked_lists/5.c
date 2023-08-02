#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - frees 
 *
 * @head: beginning
 */

void free_listint2(listint_t **head)
{
	listint_t *i = *head;
	while( i != NULL)
	{
		free(i);
		i = i->next;
	}
}	
