#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *puts2- pointer
 *@str: s pointer
 *Return:void
 *
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
