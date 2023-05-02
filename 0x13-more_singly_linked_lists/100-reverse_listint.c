#include "lists.h"

/**
 * reverse_listint - reverse the lists in linked list
 * @head: the list need to be reversed
 * Return: pointer to the fiirst node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *act = *head, *hold = NULL, *tmp;

	while (act != NULL)
	{
		tmp = act->next;
		act->next = hold;
		hold = act;
		act = tmp;
	}

	*head = hold;
	return (*head);
}
