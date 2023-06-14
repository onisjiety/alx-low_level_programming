#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - memory that contains a copy of a string
 * @str:
 * Return: always 0 on success
 */
char* _strdup(char* str) {
    size_t len;
    char* duplicate;

    if (str == NULL) {
        return NULL;
    }

    len = strlen(str);

    duplicate = (char*)malloc((len + 1) * sizeof(char));
    if (duplicate == NULL) {
        return NULL;
    }

    strcpy(duplicate, str);

    return duplicate;
}
