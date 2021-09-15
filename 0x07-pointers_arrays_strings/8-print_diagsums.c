#include "main.h"
/**
 * print_diagsums - print the sum of a diagonals
 * @a: the square matrix
 *@size: size of the matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int b;
	int sum = 0;
	
	for (b = 0; b =< size; b++)
	{
	 sum += a[b][b];
	}
	_putchar('0' + sum);
}
