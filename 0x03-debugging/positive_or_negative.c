#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *main- Entry
 *Return: Always Void
 *@int n: int n
 */

void positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is posiive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is negative\n", n);

	}
	else if (n < 0)
	{
		printf("%d is neative\n", n);
	}
}
