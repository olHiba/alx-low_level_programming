#include "lists.h"

/**
 * get_nodeint_at_index - nth node of a listint_t linked list.
 * @head: lists
 * @index: integer
 * Return: pointer to list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		i++;
	}
	return (head);
}

