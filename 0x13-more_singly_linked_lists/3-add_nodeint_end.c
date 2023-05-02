#include "lists.h"

/**
 * add_nodeint_end - add new node at the end
 * @head: list
 * @n: integer
 * Return: pointer to the new element pr null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = *head;

	new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}
