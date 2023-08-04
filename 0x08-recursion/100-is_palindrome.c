#include <stdio.h>
#include <string.h>

/*
 * is_palindrome_helper - palindrome string
 * @s:
 * @start:
 * @end:
 * Return: 0 on success
 */

int is_palindrome_helper(char *s, int start, int end) {
    if (start >= end) {
        return 1;
    }

    if (s[start] != s[end]) {
        return 0;
    }

    return is_palindrome_helper(s, start + 1, end - 1);
}
