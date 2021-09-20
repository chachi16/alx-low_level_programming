#include <stdio.h>
#include "main.h"
/**
 *main - prints the name of a program
 *@argc: the length of argv
 *@argv: array of strings
 *
 *Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
