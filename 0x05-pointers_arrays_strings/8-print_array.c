#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *print_array- pointer
 *@a: a pointer
 *@n: n integer
 *Return:void
 *
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf("\n");
}
