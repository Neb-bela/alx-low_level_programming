#include <stdio.h>
/**
 * main- Entry
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56)
			{
				putchar(10);
			}
			else
			{
				puchar(44);
				putchar(32)
			}
		}
	}
	return (0);
}
