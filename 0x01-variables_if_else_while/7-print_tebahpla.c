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
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; --alphabet)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
