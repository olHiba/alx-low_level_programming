#include "lists.h"

/**
 * list_len - fine the number of elements in linked list
 * @h: list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
