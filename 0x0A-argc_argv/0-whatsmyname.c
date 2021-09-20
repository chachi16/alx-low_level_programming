#include <stdio.h>
#include "main.h"
/**
 *main - prints the name of a program
 *@argc: the length of argv
 *@argv: array of strings
 *
 *Return: always 0
 */
int main(int argc __attribute__((unused)), char* argv[])
{
printf("%s\n", argv[0]);
return (0);
}
