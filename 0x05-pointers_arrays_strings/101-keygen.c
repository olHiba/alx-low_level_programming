#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generate random valid passwords for the program 101-crackme
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char pswd[100];
	int i, sum = 0, a;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pswd[i] = rand() % 78;
		sum += (pswd[i] + '0');
		putchar(pswd[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			a = 2772 - sum - '0';
			sum += a;
			putchar(a + '0');
			break;
		}
	}
	return (0);
}
