#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - prints elements of a list
 * @h: argument
 *
 * Return: Returs number of nodes.
 */
size_t print_list(const list_t *h)
{

	unsigned int node = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%u] ", h->len);
			printf("(nil)\n");
		}
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		node;
	}
	return (node);
}
