#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - excutes a function given as a parameter on each element of an array
 *@array: array of functions
 *@size: the size of the array
 *@action: pointer to the function
 *
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i = 0;

if (array != NULL && action != NULL)
{
while (i < size)
{
(*action)(array[i]);
i++;
}
}
}
