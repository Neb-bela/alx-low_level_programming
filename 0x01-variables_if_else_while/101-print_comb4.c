#include <stdio.h>
/**
 * main- Entry
 * Return: Always 0
 */
int main(void)
{
	int i;
	int k;
	int j;

	for (i = 48; i < 56; i++)
	{
		for (j = i + 1; j <= 56; j++)
		{
			for (k = i + 2; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 56)
				{
					putchar(10);
				}
				else
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	return (0);
}
