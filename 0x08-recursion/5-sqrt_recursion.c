#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - Funtion that returns a natural sqrt
 * @n: parameter n
 * Return: always 0 on success
 */

int _sqrt_recursion(int n)
{
	int sr = sqrt(n);
	if (n >= 0)
	{
	return (sr);
	}
	else
	{
	return (-1);
	}
}
