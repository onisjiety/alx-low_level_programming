#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Print total of all interger
 * @n: unsigned integer
 * Return: always 0 on success
 */

int sum_them_all(const unsigned int n, ...) {

unsigned int i;
int sum = 0;

va_list add;

va_start (add, n);

for ( i = 0; i < n; i++) {
   sum += va_arg(add,int);		
}

va_end(add);

return sum;
}
