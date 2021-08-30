#include <stdio.h>
/**
 *main - pritns combination of thre numbers
 *Return: nothing
 */
int main(void)
{
int i;
int j;
int k;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 9; j++)
{
for (k = 0; k < 10; k++)
{
if (k - j <= 0 || j - i <= 0)
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
if (k - i <= 0 || j - i <= 0)
{
continue;
}
}
}
putchar('\n');
return (0);
}
