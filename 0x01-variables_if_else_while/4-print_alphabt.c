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
putchar(c);
c++;
if (c == 'e' || c == 'q')
continue;
}
putchar(s);
return (0);
}
