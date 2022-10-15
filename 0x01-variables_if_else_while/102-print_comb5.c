#include <stdio.h>
/**
 * main- Entry
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(32);
				putchar(i);
				putchar(k);
				putchar(44);
			}
			if (i == 56)
			{
				putchar(10);
			}
			else
			{
				putchar(32);
			}
		}
	}
	return (0);
}
