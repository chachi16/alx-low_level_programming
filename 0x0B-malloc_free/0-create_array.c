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

ch = malloc(sizeof(size) * size);
ch[0] = c;

if (ch == NULL)
{
return (NULL);
}
return (ch);
free(ch);
}
