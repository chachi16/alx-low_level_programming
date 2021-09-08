#include "main.h"
/**
 *_puts - prints a string
 *@str: string passed
 *
 *Return: nothing
 */
void _puts(char *s)
{
int i = 0;

while (s[i] > '\0')
{
_putchar(s[i])
}
_putchar('\n');
}
