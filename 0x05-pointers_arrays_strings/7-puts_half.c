#include "main.h"
/**
 * puts_half - prints half of a string
 * @s: the string to print half
 *
 *Return: nothing
 */
void puts_half(char *s)
{
int i, j;

i = 0;
while (s[i] != '\0')
{
i++;
}
j = (i / 2);
while (s[j] != '\0')
{
_putchar(s[j]);
j++;
}
_putchar('\n');
}
