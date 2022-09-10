#include <stdlib.h>
#include <stdio.h>
#include <time.h>
i
/*main - print after checking if the number is positive, 
 * negative or zero
 *
 *return: Always 0
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
