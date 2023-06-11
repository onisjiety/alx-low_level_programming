#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - print numbers of augument passed into it
 * @argc: augument count
 * @*argv[]: augument vector
 * Return: always return 0 on success
 */

int main(int argc, char *argv[])
{
    printf("%d\n", argc - 1); 
    
    return 0;
}
