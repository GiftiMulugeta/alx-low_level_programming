#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees head
 * @head: argument
 */

void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
