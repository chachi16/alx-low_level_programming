#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_string - prints strings
 *@separator: string to be printed between strings
 *@n: number of strings passed to the function
 *
 *Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;

va_list ap;

va_start(ap, n);
str = va_arg(ap, char*);
for (i = 0; i < n; i++)
{
if (str == NULL)
{
printf("%p", str);
}
else
{
printf("%s", str);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(ap);
}
