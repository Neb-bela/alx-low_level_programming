#include "main.h"
/**
 *_strlen_recursion- prints a string followed by a new line
 *@s: The string to be printed
 *Return: lenght of strings
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
