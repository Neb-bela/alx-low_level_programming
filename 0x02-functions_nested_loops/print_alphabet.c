#include <unistd.h>
#include "main.h"


/**
 *print_alphabet- writes characters
 * Return: void
 */
void print_alphabet(void)
{

		char alp[26] = {abcdefghijklmnopqrstuvwxyz};

		for (i = 0; i <= 26; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
}
