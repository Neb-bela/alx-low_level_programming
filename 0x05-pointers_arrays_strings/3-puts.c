#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *_puts- pointer
 *@str: s pointer
 *Return:void
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
