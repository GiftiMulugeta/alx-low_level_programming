#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at the specified index
 * @head: argument
 * @index: given idex
 * Return: number popped argument
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *tmp;
	listint_t *a;

	if (*head == NULL)
		return (-1);
	a = (*head)->next;
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
	}
	else
	{
		while (i < index)
		{
			a = a->next;
			tmp = tmp->next;
			if (tmp == NULL)
				return (-1);
			i++;
		}
	tmp->next = a->next;
	free(a);
	}
	return (1);
}
