#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint_end - prints elements of listin_n
 * @head: argument
 * @n: argument
 * Return: number of nide
 */
int pop_listint(listint_t **head)
{
	listint_t *a;
	listint_t *tmp;
	int i;

	a = *head;
	tmp = (*head)->next;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		a = a->next;
	}
	i = tmp->n;
	a->next = NULL;
	return (i);
}
