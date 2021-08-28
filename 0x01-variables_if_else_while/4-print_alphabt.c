#include <stdio.h>
/**
 *main - void function
 *Return: nothing
 */
int main(void)
{
char c = 'a';
char s = '\n';

while (c <= 'z')
{
if (c == 'e' || c == 'q')
{
c++;
continue;
}
putchar(c);
c++;
}
putchar(s);
return (0);
}
