#include <stdio.h>
#include "main.h"
/**
 *fizz_buzz - prints numbers and fizz buzz
 *Return: nothing
 */
void fizz_buzz(void)
{
int n;

for (n = 1; n < 101; n++)
{
if (n % 3 == 0)
{
printf("Fizz");
}
else  if (n % 5 == 0)
{
printf("Buzz");
}
else if (n % 3 == 0 && n % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", n);
}
printf(" ");
}
}
