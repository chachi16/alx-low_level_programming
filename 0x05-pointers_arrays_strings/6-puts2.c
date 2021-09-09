#include main.h
/**
 *puts2 - prints every other character of a string
 *@s: string parameter
 *
 *Return: nothing
 */
void puts2(char *s)
{
int i =0;

while(s[i] != '\0')
{
_putchar(*(s+i));
i = i + 2;
}
}
