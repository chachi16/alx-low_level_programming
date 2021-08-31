#include "main.h"
/**
 *_islower - checks for lower case letters
 *Return - 1 if character is lower and 0 otherwise
 */
int _islower(int c)
{
char d;

d = c + '0';
if (d >= 'a' && d <= 'z')
{
return (1);
}
else
{
return (0);
}
}
	      
