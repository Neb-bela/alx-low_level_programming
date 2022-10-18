#include "main.h"
/**
 *print_alphabet_x10- writes characters
 * Return: void
 */
void print_alphabet_x10(void)
{
		char la;
		int i;

		for (i = 0; i < 10; i++)
		{
			for (la = 'a'; la <= 'z'; la++)
			{
				_putchar(la);
			}
			_putchar('\n');
		}
}
