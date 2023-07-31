#include "lists.h"
#include <stdio.h>

/**
 * print_listint - all elems in list
 * @h: Pointer
 *
 * Return: Nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
