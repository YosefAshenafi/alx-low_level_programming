#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intType;
	float floatType;
	long longType;
	long long longlongType;
	char charType;

	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longType));
	printf("Size of a long long int: %zu bytes\n", sizeof(longlongType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));

	return (0);
}
