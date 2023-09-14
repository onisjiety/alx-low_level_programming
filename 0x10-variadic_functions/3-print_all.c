#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

void print_all(const char * const format, ...) {
    const char *fmt = format;
    char c;
    int i;
    double f;
    char *s;

    va_list args;
    va_start(args, format);

    while (*fmt != '\0') {
        if (*fmt == 'c') {
            c = (char)va_arg(args, int);
            printf("%c", c);
        } else if (*fmt == 'i') {
            i = va_arg(args, int);
            printf("%d", i);
        } else if (*fmt == 'f') {
            f = va_arg(args, double);
            printf("%f", f);
        } else if (*fmt == 's') {
            s = va_arg(args, char*);
            if (s != NULL) {
                printf("%s", s);
            } else {
                printf("(nil)");
            }
        }
        ++fmt;
        if (*fmt != '\0')
            printf(", ");
    }

    printf("\n");
    va_end(args);
}

