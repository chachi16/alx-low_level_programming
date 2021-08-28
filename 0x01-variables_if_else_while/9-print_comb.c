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
putchar(i + '0');
while (j<9)
{
putchar(',');
putchar(' ');
j++
}
i++;
}
putchar('\n');
return (0);
}
