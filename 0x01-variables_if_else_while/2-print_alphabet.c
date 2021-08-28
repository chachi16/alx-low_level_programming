#include <stdio.h>
/**
 *main - void function
 *Return nothing
 */
int main (void)
{
char c = 'a';
char s = '\n';

while (c <= 'z')
{
putchar(c);
putchar(s);
c++;
}
return (0);
}
