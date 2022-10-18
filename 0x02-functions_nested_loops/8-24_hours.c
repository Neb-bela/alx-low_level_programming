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

	for (a = 0; a <= 23; a++)
	{
		int c;

		if (a < 10)
		{
			c = a % 10;
			_putchar(a + '0');
			_putchar(c + '0');
		}
		else
		{
			_putchar(a + '0');
		}
		_putchar(':');
		for (b = 0; b <= 59; b++)
		{
			int d;

			if (b < 10)
			{
				d = b % 10;
				_putchar(b + '0');
				_putchar(d + '0');
			}
			else
				_putchar(b + '0');
			_putchar('\n');
		}
	}
}
