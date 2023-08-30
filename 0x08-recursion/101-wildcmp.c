#include <stdio.h>

/**
 * wildcmp - function that compares two strings and returns 1 if the strings can be considered identical
 * @s1: character pointer
 * @s2: character pointer
 * Return: always 0 on success
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
	return (1);
	}
	if (*s2 == '*')
	{
	return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
