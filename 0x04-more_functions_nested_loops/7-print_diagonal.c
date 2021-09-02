#include "main.h"
/**
 *print_diagonal - prints diagonal line
 *@n: number of times line is drawn
 *return: nothing
 */
void print_diagonal(int n)
{
int i = 1;
int j = 1;

if (n <= 0)
{
_putchar('\n');
}
while (i <= n)
{
if (i == 1)
{
_putchar('\\');
_putchar('\n');
}
else
{
while(j < i)
{
_putchar(' ');
j++;
}
j = 1;
_putchar('\\');
_putchar('\n');
}
i++;
}
}
