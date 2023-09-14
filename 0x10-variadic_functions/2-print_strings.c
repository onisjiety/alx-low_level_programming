#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - print a string followed by new line
 * @separator: Constant character  pointer
 * @n: unsigned integer n
 * Return: always 0 success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;

    va_list add;
    va_start(add, n);

    if (separator != NULL) {
        for (i = 0; i < n; i++) {
            char* str = va_arg(add, char*);

            printf("%s", str);

            if (i < n - 1) {
                printf("%s", separator);
            }
        }
    }

    va_end(add);
    printf("\n");
}

