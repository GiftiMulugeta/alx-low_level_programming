#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * listint_len - prints elements of listin_n
 * @h: argument
 * Return: number of nide
 */
size_t listint_len(const listint_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	printf("\n");
	return (node);
}
