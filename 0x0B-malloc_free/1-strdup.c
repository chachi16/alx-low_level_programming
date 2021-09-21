#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *_strdup - returns a newly allocated space in memory
 *@str: string parameter
 *
 *Return: pointer to a string
 */
char *_strdup(char *str)
{
  char *sttr;
  
  sttr = malloc(sizeof(char) * strlen(str));
  if (sttr == NULL)
    {
      return (NULL);
    }
  return (sttr);
}
