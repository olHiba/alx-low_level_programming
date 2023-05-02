#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at n index
 * @head: a pointer to the head of list
 * @index: index of node
 * Return: -1 or 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *new = *head;
	unsigned int i;

	if (new == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (new->next == NULL)
			return (-1);
		new = new->next;
	}

	temp = new->next;
	new->next = temp->next;
	free(temp);
	return (1);
}
