#include <stdio.h>

/*
 * _print_rev_recursion - Print string in reverse form
 * @s: Character pointer s
 * Return: always 0 on succes
 */

void _print_rev_recursion(char *s) {


    if (*s == '\0') {
        return;
    } else {
        _print_rev_recursion(s + 1);
        putchar(*s);
    }
}
