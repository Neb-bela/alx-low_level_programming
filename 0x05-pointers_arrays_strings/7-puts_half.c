#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *puts_half- pointer
 *@str: s pointer
 *Return:void
 *
 */
void puts_half(char *str)
{
	int l = 0;

	while (*str != '\0')
	{
		l++;
		str++;
	}
	str -= (l / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
