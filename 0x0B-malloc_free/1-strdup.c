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
  int i;
  sttr = malloc(sizeof(char) * strlen(str) + 1);
  for (i = 0 ; str[i] != '\0' ; i++)
		{
			sttr[i] = str[i];
		}
  if (sttr == NULL)
    {
      return (NULL);
    }
  return (sttr);
}
