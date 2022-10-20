#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add an element at the beginning of the list
 * @head: argument
 * @str: argument
 *
 * Return: Returs number of nodes.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;
	unsigned int leng = 0;

	while (str[leng] != '\0')
		leng++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (*head == NULL)
	{
		new->next = *head;
		*head =  new;
	}
	else
	{
		new->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	new->len = leng;
	return (new);
}
