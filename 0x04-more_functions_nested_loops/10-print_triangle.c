#include "main.h"
/**
 *print_triangle - prints triangle
 *@size: size of the triangle
 *
 *Return: nothing
 */
void print_triangle(int size)
{
int i, k, j;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = size - 1; j > i; j--)
{
_putchar(' ');
}
for (k = 0; k <= i; k++)
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
