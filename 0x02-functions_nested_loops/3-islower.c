#include "main.h"
/**
 *_islower - checks for lower case letters
 *@parameterc: the character to be checked
 *Return:  1 if character is lower and 0 otherwise
 */
int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
