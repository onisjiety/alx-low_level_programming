#include <stdio.h>

/*
 * int factorial - factorial of a number
 * @n: integer n
 * Return: always 0 on success
 */

int factorial(int n) {
    if (n < 0) {
        return -1; // Return -1 to indicate an error for negative inputs
    } else if (n == 0) {
        return 1; // Factorial of 0 is 1
    } else {
        int result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}
