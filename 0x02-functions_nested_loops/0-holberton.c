#include "main.h"
/**
 *main - Prints a character
 *Return: nothing
 */
int main(void)
{
char c[] = "Holberton";
int n = 0;

while (n <= 8)
{
_putchar(c[n]);
n++;
}
_putchar('\n');
return (0);
}
