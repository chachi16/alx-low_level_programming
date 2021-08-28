#include <stdio.h>
/**
 *main - void function
 *Return: nothing
 */
int main(void)
{
int i = 0;
int j = 0;

while (i < 10)
{
while (j < 10)
{
putchar(i + '0');
putchar(j + '0');
putchar(',');
putchar(' ');
j++;
}
i++;
}
return (0);
}
