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
	int l;
	int m;
	int n;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			k = i / 10;
			l = i % 10;
			m = j / 10;
			n = j % 10;
			putchar(k + 48);
			putchar(l + 48);
			putchar(32);
			putchar(m + 48);
			putchar(n + 48);

			if (i == 98)
				putchar(10);
			else
				putchar(32);
		}
	}
	return (0);
}
