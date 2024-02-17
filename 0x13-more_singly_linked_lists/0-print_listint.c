#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a linked list
 *
 * @h: head of linked list node
 *
 * Return: number of nodes
 *
 */
size_t print_listint(const listint_t *h);
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
