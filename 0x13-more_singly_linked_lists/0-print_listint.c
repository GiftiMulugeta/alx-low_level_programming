#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * print_listint - prints elements of listin_n
 * @h: argument
 * Return: number of nide
 */
size_t print_listint(const listint_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
		return (node);
}
