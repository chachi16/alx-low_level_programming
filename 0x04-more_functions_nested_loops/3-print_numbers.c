#include "main.h"
/**
 *print_numbers - prints numbers 0 to 9
 *return: nothing
 */
void print_numbers(void)
{
int i = 0;

while (i < 10)
{
_putchar('0' + i);
i++;
}
_putchar('\n');
}
