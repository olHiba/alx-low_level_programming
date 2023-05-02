#include "lists.h"

/**
 * find_listint_loop - find the loop in linked list
 * @head: list
 * Return: pointer to the stsrt of loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *chain1 = head, *chain2 = head;

	if (head)
	{
		while (chain1 && chain1->next)
		{
			chain1 = chain1->next->next;
			chain2 = chain2->next;
			if (chain1 == chain2)
				break;
		}

		if (!chain1 || chain1->next)
			return (NULL);
		chain2 = head;

		if (chain2 != chain1)
		{
			while (chain2 != chain1)
			{
				chain1 = chain1->next;
				chain2 = chain2->next;
			}
			return (chain2);
		}
	}
	return (head);
}
