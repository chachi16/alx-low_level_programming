#include <stdio.h>
/**
 *main - void
 *Return: nothing
 */
int main(void)
{
int i;
int j;

for (i = 0; i < 9; i++)
{
for (j = 0; j < 10; j++)
{
if (j-i <= 0)
{
continue;
}
putchar(i + '0');
putchar(j + '0');
if (i == 8)
{
break;
}
putchar(',');
putchar(' ');
}
}
return (0);
}
