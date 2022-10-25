#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * get_nodeint_at_index - return element at the given index
 * @head: argument
 * @index: given index
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
			return (head);
		head =  head->next;
		i++;
	}
	return (NULL);
}
