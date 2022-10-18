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
			_putchar(a);
			_putchar(c);
		}
		else
		{
			_putchar(a);
		}
		_putchar(':');
		for (b = 0; b <= 59; b++)
		{
			int d;

			if (b < 10)
			{
				d = b % 10;
				_putchar(b);
				_putchar(d);
			}
			else
				_putchar(b);
			putchar('\n');
		}
	}
}
