#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * list_len - prints elements of a list
 * @h: argument
 *
 * Return: Returs number of nodes.
 */
size_t list_len(const list_t *h)
{

	unsigned int node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
