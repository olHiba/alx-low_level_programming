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
	int i, j, sum;

	sum = 0;


	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	return (printf("%d\n", sum), 0);
}
