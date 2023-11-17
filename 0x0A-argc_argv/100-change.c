#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: size of array argv
 * @argv: an array of strings
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	int cents[] = {25, 10, 5, 2};
	int change = 0;
	int a;
	int i;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);

	if (a > 1)
	{
		for (i = 0; i < 4; i++)
		{
			change += a / cents[i];
			a = (a % cents[i]);

		}

	}
	if (a == 1)
		change++;
	printf("%d\n", change);
	return (0);
}
