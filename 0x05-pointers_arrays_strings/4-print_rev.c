#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *print_rev- pointer
 *@s: s pointer
 *Return:void
 *
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
