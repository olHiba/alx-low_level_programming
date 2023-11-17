#include "lists.h"

/**
 * add_node_end - add node node at the emd of a list
 * @head: list
 * @str: string
 * Return: pinter to a new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *h;

	h = *head;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	while (h->next != NULL)
		h = h->next;
	h->next = node;
	return (*head);
}
