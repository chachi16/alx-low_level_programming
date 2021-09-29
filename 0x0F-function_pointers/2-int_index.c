#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array: array containing elements
 *@size: size of the array
 *@cmp: pointer to a function
 *
 *Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (size <= 0 || cmp == NULL || array == NULL)
{
return (-1);
}
else
{
while (i < size)
{
if ((*cmp)(array[i]) != 0)
{
return (i);
}
i++;
}
return (-1);
}
}
