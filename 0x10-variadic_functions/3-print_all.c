#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: list of arguments passed to the fuction
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char *p;
	int i = 0;
	va_list list;

	va_start(list, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(list, double));
				break;
			case 's':
				p = va_arg(list, char*);
				if (p != NULL)
				{
					printf("%s", p);
					break;
				}
				printf("(nil)");
				break;
			}
			if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
				format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
			i++;
	}
		printf("\n"), va_end(list);
}
