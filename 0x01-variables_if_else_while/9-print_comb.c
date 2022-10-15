#include <stdio.h>
#include <stdlib.h>
/**
 * main- Entry
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 57; i++)
	{
		putchar(i);
		putchar(43);
	}
	putchar(i = 58);
	putchar('\n');
	return (0);
}
