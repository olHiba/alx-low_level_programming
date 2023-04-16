#include "main.h"
/**
 * _atoi - Convert a string to an integer
 * @s: THe string
 *
 * Return: The integer
 */
int _atoi(char *s)
{
	int i = 1;
	unsigned int n = 0;

	do {
		if (*s >= '0' && *s <= '9')
		{
			n = n * 10 + (*s - '0');
		}
		else if (*s == '-')
		{
			i = i * -1;
		}
		else if (n > 0)
		{
			break;
		}
	} while (*s++);
	return (n * i);
}
