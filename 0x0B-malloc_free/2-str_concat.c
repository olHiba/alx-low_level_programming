#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int size1;
	unsigned int size2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = strlen(s1);
	size2 = strlen(s2);
	ptr = malloc((size1 + size2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= (size1 + size2); i++)
	{
		if (i < size1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - size1];
	}
	ptr[i] = '\0';
	return (ptr);
}
