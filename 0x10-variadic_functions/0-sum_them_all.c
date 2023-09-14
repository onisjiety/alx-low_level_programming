#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Print total of all integer
 * @n: unsigned integer
 * Return: always 0 on success
 */

int sum_them_all(const unsigned int n, ...)
{
        int sum = 0;
        unsigned int i;

        va_list args;

        va_start(args, n);

        for (i = 0; i < n; i++)
        {
                sum += va_arg(args, int);
        }

        va_end(args);

        return (sum);
}

