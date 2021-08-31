#include "main.h"
/**
 *_isalpha - checks alphabetic charater
 *@c: a charater to be checked
 *return: 1 if c is a character 0 otherwise
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
