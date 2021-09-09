#include "main.h"
/**
 *puts2 - prints every other character of a string
 *@s: string parameter
 *
 *Return: nothing
 */
void puts2(char *s)
{
int i, j;

i  = 0;
j = 0;
while (s[i] != '\0')
{
i++;
}
while (j < i)
{
_putchar(*(s + j));
j = j + 2;
}
_putchar('\n');
}
