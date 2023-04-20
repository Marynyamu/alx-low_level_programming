#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* sum_them_all - return sum when given unknown amount of arguments
* @n: integers to add
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0, i;
va_list addno;

if (n == 0)
	return (0);
va_start(addno, n);
for (i = 0; i < n; i++)
	sum += va_arg(addno, int);
va_end(addno);
return (sum);
}
