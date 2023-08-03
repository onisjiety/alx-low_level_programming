#include <stdio.h>

/*
 * int factorial - factorial of a number
 * @n: integer n
 * Return: always 0 on success
 */

int factorial(int n) {
    	int i;
	if (n < 0) {
        return -1;
    } else if (n == 0) {
        return 1;
    } else {
        int result = 1;
        for (i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}
