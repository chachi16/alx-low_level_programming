#include "main.h"
/**
 * times_table - prints 9 times table
 *returns: nothing
 */
void times_table(void)
{
int i, j, n, ld, fd;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
n = i * j;
if (n < 10)
{
_putchar('0' + n);
}
else
{
ld = n % 10;
fd = n / 10;
_putchar('0' + fd);
_putchar('0' + ld);
}
if (j == 9)
{
break;
}
_putchar(',');
if ((i < 2 || j < 1) || (i == 2 && j < 4) || (i = 3 && j < 3) || (i == 4 && j < 2))
{
_putchar(' ');
}
_putchar(' ');
}
_putchar('\n');
}
}
