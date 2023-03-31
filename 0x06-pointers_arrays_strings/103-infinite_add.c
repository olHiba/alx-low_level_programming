#include "main.h"
/**
 * rev_string - reverse array
 * @n: integer
 *
 * Return: 0 (Success)
 */
void rev_string(char *n)
{
	int i = 0, j = 0;
	char c;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++, i--)
	{
		c = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = c;
	}
}
/**
 * infinite_add - Add two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer
 * @size_r: The buffer size
 *
 * Return: 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int o = 0, d = 0, i = 0, j = 0, v1 = 0, v2 = 0, s = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || o == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		s = v1 + v2 + o;
		if (s >= 10)
			o = 1;
		else
			o = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (s % 10) + '0';
		d++;
		j--;
		i--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
}
