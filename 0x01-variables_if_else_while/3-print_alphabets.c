#include <stdio.h>
/**
 *main - void function
 *Return: nothing
 */
int main(void)
{
char c = 'a';
char d = 'A';
char s = '\n';
int n = 0;

while (n < 26)
{
putchar(c);
c++;
n++;
}
n = 0;
while (n < 26)
{
putchar(d);
d++;
n++;
}
putchar(s);
return (0);
}
