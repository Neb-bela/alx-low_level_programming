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
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
