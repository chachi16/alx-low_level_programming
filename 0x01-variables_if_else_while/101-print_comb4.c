#include <stdio.h>
/**
 *main :print number
 *Return: nothing
 */
int main(void)
{
int i;
int j;
int k;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
for (k = 0; k < 8; k++)
{
if ( k - i -j <=1)
{
continue;
}
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i == 7)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
