#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: parameter to print
 *
 * Return: a number serie.
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
printf("%d", n);
if (n == 98)
{
break;
}
printf(", ");
n++;
}
printf("\n");
}
else
{
while (n >= 98)
{
printf("%d", n);
if (n == 98)
{
break;
}
printf(", ");
n--;
}
printf("\n");
}
}
