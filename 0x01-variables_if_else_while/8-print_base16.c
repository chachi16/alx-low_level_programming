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
}
while (i <= 'f')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
