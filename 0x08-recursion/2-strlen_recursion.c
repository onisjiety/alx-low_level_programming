#include <stdio.h>
#include <string.h>

/**
 *_strlen_recursion - print lenght of string
 * @s: character pointer
 * Return: always 0 on success
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return 0; 
	}
	else
	{
	return 1 + _strlen_recursion(s + 1);
	}
}
