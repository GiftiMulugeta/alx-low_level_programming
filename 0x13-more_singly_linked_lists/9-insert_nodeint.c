#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - return element at the given index
 * @head: argument
 * @idx: index
 * @n: argument
 * Return: linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->n = n;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head;
		new-<n = n;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (i < idx)
	{
		tmp = tmp->next;
		i++;
	}
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
