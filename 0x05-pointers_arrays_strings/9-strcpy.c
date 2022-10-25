#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *_strcpy- pointer
 *@src: source
 *@dest: destination
 *Return:void
 *
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		*(dest + l) = *(src + l);
		l++;
	}
	*(dest + l) = '\0';
	return (dest);
}
