#include <stdio.h>
/**
 * main- Entry
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			putchar("\n");
		}
		else
		{
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
