#include <stdio.h>
#include <math.h>
/**
 *main - prints largest prime factor
 *Return: always zero
 */
int main(void)
{
long int i;
int j;
int max;

i = 612852475143;
for (j = 3; j <= sqrt(i); j += 2)
{
if (i % j == 0)
{
max = j;
i = i / j;
}
else
{
continue;
}
}
printf("%d", max);
printf("\n");
return (0);
}
