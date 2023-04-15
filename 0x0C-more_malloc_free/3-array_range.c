#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - function that creates an array of integers.
 * @min: first parameter
 * @max: second parameter
 * Return: NULL or pointer to an array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int len, i;

	if (min > max)
		return (NULL);
	len = max - min + 1;

	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
