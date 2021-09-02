#include "main.h"
/**
 *print_line - draws a straight line
 *@n: intiger parameter
 *return: nothing
 */
void print_line(int n)
{
int i = 1;

while (i <= n)
{
_putchar('_');
i++;
}
_putchar('\n');

}
