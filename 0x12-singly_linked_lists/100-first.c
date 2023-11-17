#include "lists.h"

void leibre_tortuga(void) __attribute__((constructor));
/**
 * leibre_tortuga - fuction execute before main
 **/

void leibre_tortuga(void)
{
	char *str1, *str2;

	str1 = "You're beat! and yet, you must allow,\n";
	str2 = "I bore my house upon my back!\n";
	printf("%s%s", str1, str2);
}
