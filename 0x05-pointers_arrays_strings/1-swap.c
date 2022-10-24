#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *swap_int- pointer
 *@a: a pointer
 *@b: b pointer
 *Return:void
 *
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
