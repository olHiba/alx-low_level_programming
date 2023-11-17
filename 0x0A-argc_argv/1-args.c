#include "main.h"
#include <stdio.h>

/**
 * main -  that prints the number of arguments passed into it.
 * @argc: size of array argv
 * @argv: an array of strings
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	if (argv[0] != 0)
	{
	for (i = 0; i < argc; i++)
	{
		sum += 1;
	}
	printf("%d\n", sum - 1);
	}
	return (0);
}
