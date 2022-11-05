#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main- prints a string followed by a new line
 *@argv: The string to be printed
 *@argc: The string
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
