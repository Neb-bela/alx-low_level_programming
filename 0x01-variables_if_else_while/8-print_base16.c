#include <stdio.h>
/**
 * main- Entry
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 17; i++)
	{
		putchar("%x", i);
	}
	putchar('\n');
	return (0);
}
