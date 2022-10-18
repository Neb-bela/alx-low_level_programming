#include "main.h"
/**
 *_islower- checks if lowercase
 *@c: The charactr to print
 *Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
