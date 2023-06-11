#include <stdio.h>
#include "main.h"

/**
 * main - To print all augument recieve
 * @argc: augument count
 * @argv: argument vector
 * Return: always 0 on success
 */

int main(int argc, char *argv[])
{
    int i;
    
    for(i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}
