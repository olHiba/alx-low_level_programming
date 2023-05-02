
#include "lists.h"

/**
 * listint_len - return the numebr of elements in  a list
 * @h: list
 * Return: the size of list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
