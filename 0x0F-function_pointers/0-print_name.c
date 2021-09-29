#include "function_pointers.h"
/**
 *print_name - prints a name
 *@name: the name to be printed
 *@f: pointer to a function
 *
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (f)
{
(*f)(name);
}
}
