#include <stdio.h>

/*
 * _pow_recursion - X raised to the power y
 * @x: Integer x
 * @y: Inter y
 * Return: 0 on success
 */


int _pow_recursion(int x, int y) {
    if (y < 0) {
        return -1;
    } else if (y == 0) {
        return 1;
    } else {
        return x * _pow_recursion(x, y - 1);
    }
}
