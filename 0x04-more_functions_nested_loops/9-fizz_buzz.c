#include <stdio.h>
/**
 *main - prints numbers and fizz buzz
 *Return: always 0
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
if (n == 100)
{
break;
}
printf(" ");
}
printf("\n");
return (0);
}
