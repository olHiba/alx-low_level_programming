#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **strtow - splits a string into words
 * @str: string
 * return: NULL or pointer to array
 */

char **strtow(char *str)
{	
	int len = 0;
	char *ptr;
	
	if (str == NULL)
		return (NULL);
	if (str == "")
		return (NULL);
	
	while(*str != '\0')
	{
		if (str  == ' ')
		{
			str++;
		}
		else
		{
			while (*str != ' ' && *str != '\0')
				str++;
			len++;
		}
	}


	ptr = malloc((len + 1) * sizeof(char))
		if (ptr == NULL)
			return (NULL);

	for (i = 0; i < len; i++)
	{
