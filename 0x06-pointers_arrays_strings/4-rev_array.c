#include "main.h"
/**
 *reverse_array- concatenation
 *@a: integer a
 *@n: integer n
 *Return: always 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
