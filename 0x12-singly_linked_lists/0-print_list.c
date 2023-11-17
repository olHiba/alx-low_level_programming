#include "lists.h"

/**
 * print_list - function that print all the element of list
 * @h: list of type list_t
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node++;
	}
	return (node);
}
