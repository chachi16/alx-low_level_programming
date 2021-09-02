#include "main.h"
/**
 *print_triangle - prints triangle
 *@size: size of the triangle
 *Return: nothing
 */
void print_triangle(int size)
{
int i, j;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = i; j > 0; j-- )
{
_putchar(' ');
}
for (k = 0; k < i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
