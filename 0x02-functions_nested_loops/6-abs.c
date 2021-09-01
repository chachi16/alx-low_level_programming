#include "main.h"
/**
 *_abs - computes the absolute value of an integer
 *@n: the number to be computed
 *Return: always zero
 */
int _abs(int n)
{
if (n >= 0)
{
_putchar(n + '0');
}
else
{
n = -1 * n;
_putchar(n + '0');
}
return (0);
}
