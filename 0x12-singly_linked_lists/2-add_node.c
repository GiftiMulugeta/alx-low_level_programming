#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - add an element at the beginning of the list
 * @head: argument
 * @str: argument
 *
 * Return: Returs number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int leng = 0;

	while (str[leng] != '\0')
		leng++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	new->len = leng;
	return (new);
}
