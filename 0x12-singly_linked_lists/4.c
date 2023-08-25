#include "Lists.h"
#include <stdio.h>

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head->head);
		head = head->next;
	}
}
