#include <stdio.h>
#include "main.h"
/**
 *main - prints the name of a program
 *@argc: the length of argv
 *@argv: array of strings
 *
 *Return: always 0
 */
int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
