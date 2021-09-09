#include "main.h"
/**
 *rev_string - prints a reverse string
 *@s :string parameter
 *
 *Return: nothing
 */
void rev_string(char *s)
{
int i = 0;

while (s[i] > '\0')
{
i++;
}
i = i - 1;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
