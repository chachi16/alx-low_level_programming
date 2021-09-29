#include "3-calc.h"
/**
 * op_add - the sum of two integers
 * @a: first number
 * @b: second number
 *
 * Return: the sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of two integers
 * @a: first number
 * @b: second number
 *
 * Return: the difference of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of two integers
 * @a: first number
 * @b: second number
 *
 * Return: the product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of two integers
 * @a: first number
 * @b: second number
 *
 * Return: the division of two integers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a / b);
	}
}
/**
 * op_mod - remainder of the division of two integers
 * @a: first number
 * @b: second number
 *
 * Return: the remainder of the division of two integers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a % b);
	}
}
