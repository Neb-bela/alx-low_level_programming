#include <stdio.h>
/**
 * main- Entry
 * Return: Always 0
 */
void main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			putchar(32);
		}
		else
		{
			putchar(44);
			putchar(32);
		}
	}
}
