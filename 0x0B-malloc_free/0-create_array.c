#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 *create_array - creates an array of chars
 *@size: size of the array
 *@c: a character parameter
 *
 *Return: a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
char *ch;
int i = 0;

ch = malloc(sizeof(size) * size);
while (i < size)
{
ch[i] = c;
i++;
}
if (ch == NULL)
{
return (NULL);
}
return (ch);
free(ch);
}
