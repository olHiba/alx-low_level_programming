#include "main.h"
#include <stdio.h>
/**
 * main -  multiplies two numbers.
 * @argc: size of array argv
 * @argv: an array of strings
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	int mul;
	char error[10] = "Error";

	if (argc != 3)
	{
		printf("%s\n", error);
		return (1);
	}
	else
	{
		mul = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", mul);
	}
	return (0);
}
