#include "lists.h"
#include <stdio.h>

list_t *add_node(list_t **head, const char *str)
{	
	list_t *k;
	k = malloc(sizeof(list_t);
	if (k == NULL)
	{
		return (NULL);
	}
	else
	{
		k->next = *head;
		k->str = strdup(str);
	}
	return (k);
}
