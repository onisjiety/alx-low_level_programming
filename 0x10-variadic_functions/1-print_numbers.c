#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print numbers follows by new line
 * @separator: character constant
 * @n: unsighed integer n
 * Return: always 0 on success
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    int sum = 0;

    va_list add;
    va_start(add, n);

    if (separator != NULL) {
        for (i = 0; i < n; i++) {
            int num = va_arg(add, int);
            sum += num;

            printf("%d", num);

            if (i < n - 1) {
                printf("%s", separator);
            }
        }
    }

    va_end(add);
    printf("\n");
}
