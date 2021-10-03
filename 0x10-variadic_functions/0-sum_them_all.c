#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - adds its parameters
 *@n: integer parameter
 *
 *Return: sum of its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
int i, sum;

va_list ap;

i = 0;
sum = 0;
va_start(parameters, n);
if (n == 0)
{
return (0);
}

while (i < n)
{
sum += va_arg(ap, int);
i++;
}
va_end(ap);
return (sum);
}
