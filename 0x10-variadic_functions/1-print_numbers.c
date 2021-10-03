#include <stdarg.h>
#include "vardiac_functions"
/**
 *print_numbers - prints numbers followed by a new line
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 *
 *Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
int i;

va list ap;

va_start(ap, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (separator != NULL && i < n-1)
{
printf("%s", separator);
}
}
va_end(ap);
printf("\n");
}
