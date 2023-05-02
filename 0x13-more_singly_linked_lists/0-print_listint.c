#include "lists.h"

/**
 * print_listint - print all element of a list
 * @h: list need to be printed
 * Return: numbre of node
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
