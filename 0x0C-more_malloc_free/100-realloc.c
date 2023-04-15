#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to previous memory
 * @old_size: old memory array size
 * @new_size: new memory array size
 * Return: pointer to new memory
 *         NULL if it fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr, *temp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		free(ptr);
		return (newptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
	temp = ptr;
	for (i = 0; i < old_size; i++)
		newptr[i] = temp[i];

	free(ptr);
	return (newptr);
}
