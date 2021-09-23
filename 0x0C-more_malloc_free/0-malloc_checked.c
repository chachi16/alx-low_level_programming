#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - a function that allocates a memory
 *@b: intiger parameter
 *
 *Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *allocate;

	allocate = malloc(b);

	if (allocate == NULL)
	{
		exit(98);
	}
	return (allocate);
}
