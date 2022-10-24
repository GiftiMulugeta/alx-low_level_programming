#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free listiny linked list
 * @head: argument
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
