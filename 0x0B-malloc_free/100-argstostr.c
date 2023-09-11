#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: integer
 * @av: double pointer
 * Return: always on success
 */

char *argstostr(int ac, char **av) {
    if (ac == 0 || av == NULL)
        return NULL;

    // Calculate the total length of the concatenated string
    int total_length = 0;
    for (int i = 0; i < ac; i++) {
        // Add the length of the argument plus 1 for the '\n'
        total_length += strlen(av[i]) + 1;
    }

    // Allocate memory for the concatenated string (+1 for the null terminator)
    char *result = (char *)malloc(total_length + 1);
    if (result == NULL)
        return NULL;

    int current_index = 0;
    for (int i = 0; i < ac; i++) {
        // Copy the argument to the result string
        strcpy(result + current_index, av[i]);

        // Move the current_index to the end of the copied argument
        current_index += strlen(av[i]);

        // Add a newline character
        result[current_index] = '\n';

        // Move the current_index to the next position (after the newline)
        current_index++;
    }

    // Null-terminate the result string
    result[total_length] = '\0';

    return result;
}

