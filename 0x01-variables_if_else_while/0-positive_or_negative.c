#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * main - Entry point
 * is_positive - when numbers are greater than 0
 * is_negative - when numbers are greater than 0
 * is_zero -when numbers are 0
 *
 * Return: Always 0 (Success)
 */
int main(void)

{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* check if n is positive */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	/* check if n is zero */
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	/* check if n is negative */
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);

}
