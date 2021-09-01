#include "main.h"
/**
 * times_table - prints 9 times table
 *returns: nothing
 */
void times_table(void)
{
int i, j, n;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
n = i * j;
_putchar('0' + n);
if (j == 9)
{
break;
}
_putchar(',');
if (n < 10 && n >= 0)
{
_putchar(' ');
}
_putchar(' ');
}
_putchar('\n');
}
}
