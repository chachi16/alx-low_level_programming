#include "main.h"
/**
 *print_rev - prints a reverse string
 *@s :string parameter
 *
 *Return: nothing
 */
void print_rev(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
