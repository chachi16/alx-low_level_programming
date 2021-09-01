#include "main.h"
/**
 *_abs - computes the absolute value of an integer
 *@n: the number to be computed
 *Return: always zero
 */
int _abs(int n)
{
if (0 >= n)
{
n = -1 * n;
_putchar(n);
}
else
{
_putchar(n);
}
return (0);
}
