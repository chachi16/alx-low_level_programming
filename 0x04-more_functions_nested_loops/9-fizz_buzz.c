#include <stdio.h>
/**
 *fizz_buzz - prints numbers and fizz buzz
 *Return: nothing
 */
int main(void)
{
int n;

for (n = 1; n < 101; n++)
{
if (n % 3 == 0)
{
if (n % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("Fizz");
}
}
else  if (n % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", n);
}
printf(" ");
}
 printf("\n");
return (0);
}
