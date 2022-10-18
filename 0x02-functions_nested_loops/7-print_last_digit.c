#include "main.h"
/**
 *print_last_digit- checks if lowercase
 *@a: integer
 * Return: Always 0
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	printf("%d", b);
	return (b);
}
