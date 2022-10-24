#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * pop_listint - pop head
 * @head: argument
 * Return: number popped argument
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	tmp = *head;
	i = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (i);
}
