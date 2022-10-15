#include <stdio.h>
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
		putchar(", ");
	}

	putchar(i = 58);
	putchar('\n');
	return (0);
}
