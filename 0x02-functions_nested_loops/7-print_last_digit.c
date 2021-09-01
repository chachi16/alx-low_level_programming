#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@n: the numcer to be computed
 *Return: last digit of n
 */
int print_last_digit(int n)
{
int ld;

ld = n % 10;
_putchar('0' + ld);
return (ld);
}
