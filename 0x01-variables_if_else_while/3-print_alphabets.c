#include <stdio.h>
/**
 *main - void function
 *Return: nothing
 */
int main(void)
{
char c = 'a';
char C = 'A';
char s = '\n';
int n = 0;

while (n < 26)
{
putchar(c);
putchar(C);
c++;
C++;
}
putchar(s);
return (0);
}
