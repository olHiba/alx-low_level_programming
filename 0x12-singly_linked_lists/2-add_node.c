#include "lists.h"

/**
 * add_node - add newnode at the beginning of a list
 * @head: pointer to pointer of a list
 * @str: string to add.
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int l;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	l = strlen(str);
	node->str = strdup(str);
	node->len = l;
	node->next = *head;
	*head = node;
	return (node);
}
