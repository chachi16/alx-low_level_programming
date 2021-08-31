#include "main.h"
/**
 *void print_alphabet_x10(void) - prints alphabet 10 times
 *Return: nothing
 */
void print_alphabet_x10(void)
{
char alpha;
alpha = "a";
int i = 0;

while (i <= 9)
{
while (alpha <= "z")
{
_putchar(alpha);
alpha++;
}
alpha = "a";
i++;
_putchar('\n');
}
}
