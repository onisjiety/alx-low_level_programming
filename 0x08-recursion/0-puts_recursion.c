#include <stdio.h>

/**
 * _puts_recursion - A function to print a string followed by new line
 * @s: Character pointer s
 * Return: 0 always on success
 */

void _puts_recursion(char *s) 
{
	while (*s != '\0') {
		putchar(*S);
		*s++;	
	}
	putchar('\n');
}
