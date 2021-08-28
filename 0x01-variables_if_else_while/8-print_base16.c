#include <stdio.h>
/**
 *main - void function
 *Return: nothing
 */
int main(void)
{
int b = 0;
char i = 'a';

while (b <= 9)
{
putchar(b + '0');
b++;
i++;
}
while (i <= 'f')
{
putchar(i);
}
putchar('\n');
return (0);
}
