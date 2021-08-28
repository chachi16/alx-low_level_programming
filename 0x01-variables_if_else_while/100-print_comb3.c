#include <stdio.h>
/**
 *main - void
 *Return: nothing
 */
int main(void)
{
int i = 0;
int j = 0;

while (i < 9)
{
while (j < 10)
{
if (i == j || j-i < 0)
{
j++;
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
j++;
}
i++;
}
return (0);
}
