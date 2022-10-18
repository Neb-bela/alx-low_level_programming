#include "main.h"
/**
 *jack_bauer- checks if lowercase
 *@void: void
 * Return: Always 0
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			c = a % 10;
			d = b % 10;

			_putchar(a + '0');
			_putchar(c + '0');
			_putchar(':');
			_putchar(b + '0');
			_putchar(d + '0');
			_putchar('\n');
		}
	}
}
