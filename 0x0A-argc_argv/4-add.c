#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main -  program that adds positive numbers.
 * @argc: augument count
 * @argv: augument vector
 * Return: always on success
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int i;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{

		int j;
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (!isdigit(argv[i][j]))
		{
		printf("Error\n");
		return (1);
		}
	}
	result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
