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
	unsigned int i = 0;
	listint_t *new;
	listint_t *tmp;

	/**
	* while(*head)
	* {
	*	*head = (*head)->next;
	*	leng++;
	* }
	* if (leng == idx)
	*	return (NULL);
	*/
	new = malloc(sizeof(listint_t));
	tmp = *head;
	while (i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	new->next = tmp->next;
	tmp->next = new;
	new->n = n;
	return (new);

}
