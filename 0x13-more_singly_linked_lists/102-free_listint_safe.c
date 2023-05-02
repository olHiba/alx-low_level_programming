#include "lists.h"

/**
 * free_listint_safe -  function that frees a listint_t list.
 * @h: list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t node = 0;
	int i;
	listint_t *tmp;

	if (!h || !*h)
		return(0);

	while(*h)
	{
		i =*h - (*h)->next;
		if (i > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			node++;
		}
		else
		{
			free (*h);
			*h = NULL;
			node++;
			break;
		}
	}
	*h = NULL;
	return (node);
}
