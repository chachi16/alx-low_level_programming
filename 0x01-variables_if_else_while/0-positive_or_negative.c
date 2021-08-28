#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/** main - Void function
 * Return: Nothing
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n>0)
    printf("%d is postive/n", n);
else 
    if (n<0)
       printf("%d is negative/n", n);/* your code goes there */
    else
       printf("%d is zero/n", n);
return (0);
}
