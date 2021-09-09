#include "main.h"
/**
 *rev_string - prints a reverse string
 *@s :string parameter
 *
 *Return: nothing
 */
void rev_string(char *s)
{
  int i, j;
   i  = 0;
   j = 0;

while (s[i] > '\0')
{
i++;
}
i = i - 1;
while (i >= 0)
{
*s = s[i];
i--;
}
_putchar('\n');
}
