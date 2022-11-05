#include "main.h"
#include <stdio.h>
/**
 *main- prints a string followed by a new line
 *@argv: The string to be printed
 *@argc: The string
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%i\n", argc - 1);
	return (0);
}
