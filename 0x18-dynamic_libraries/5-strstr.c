#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: first string
 * @needle: second string
 * Return: string or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;
		while (*b != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (!*b)
			return (a);
		haystack++;
	}
	return (NULL);
}
