#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet
 *return: 0
 */
void print_alphabet(void)
{
char alpha;
alpha = 'a';

while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
 _putchar('\n');
}
