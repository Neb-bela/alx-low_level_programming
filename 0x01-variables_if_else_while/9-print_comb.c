#include <stdio.h>
/**
 * main- Entry
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j = 43; 
	int k = 32;

	for (i = 48; i < 57; i++)
	{
		putchar(i);
		putchar(j, k);
	}
	putchar(i = 58);
	putchar('\n');
	return (0);
}
