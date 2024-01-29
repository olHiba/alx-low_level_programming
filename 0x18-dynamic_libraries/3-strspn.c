#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: first parameter
 * @accept: second parameter
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (k);
}
