#include <stdio.h>
#include "main.h"

/**
 * main - print numbers of augument passed into it
 * @argc: augument count
 * @argv: augument vector
 * Return: always on success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}

