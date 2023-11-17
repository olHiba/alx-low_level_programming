#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp = 0;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
