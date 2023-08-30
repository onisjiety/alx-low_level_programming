#include <stdio.h>

/**
 * factorial - factorial of a number
 * @n: integer n
 * Return: always 0 on success
 */

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
