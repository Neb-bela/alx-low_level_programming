#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *_strlen- pointer
 *@s: s pointer
 *Return:void
 *
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
