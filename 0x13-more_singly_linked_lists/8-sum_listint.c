#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * sum_listint - return element at the given index
 * @head: argument
 * Return: NULL
 */
int sum_listint(listint_t *head)
{
	int i;
	int sum = 0;
	listint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp)
	{
		i = tmp->n;
		sum += i;
		tmp = tmp->next;
	}
	return (sum);
}
