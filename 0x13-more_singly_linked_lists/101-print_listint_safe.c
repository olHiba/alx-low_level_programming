#include "lists.h"

/**
 * print_listint_safe -  function that prints a listint_t linked list.
 * @head: list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *chain1, *chain2;
	size_t node;

	if (!head)
		exit(98);

	chain1 = chain2 = head;
	node = 0;
	while (chain2 && chain2->next)
	{
		node++;
		chain1 = chain1->next;
		chain2 = chain2->next->next;

		if (chain1 == chain2)
		{
			chain1 = head;
			while (chain1 != chain2)
			{
				node++;
				chain1 = chain1->next;
				chain2 = chain2->next;

			}
			printf("-> [%p] %d\n", (void *) chain2, chain2->n);
			exit(98);
		}
		printf("-> [%p] %d\n", (void *) chain1, chain1->n);
	}
	node++;
	printf("-> [%p] %d\n", (void *) chain2, chain2->n);
	return (node);
}
