#include "main.h"
/**
 *_memset - fills memory with a constant byte
 *@s: a pointr to a memory
 *@b: a constant byte
 *@n: number of bytes
 *
 *Return: a pointer to a string
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned  int i;

for (i = 0; i <= n; i++)
{
_putchar(s[i]);
}
return (s);
}
