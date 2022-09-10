#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print alphabet
 *
 *Return: Always 0
*/

int main(void)
{
	int i;
	char alphabet;

	for (i = 0; i <= 9; i++)
	{
		putchar(i+'0');
	}

	for (alphabet = 'a'; alphabet <= 'f'; ++alphabet)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
