#include "main.h"
#include <stdlib.h>
/**
 * _strlen - give the length of a string
 * @s: the string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
	return (i);
}

/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}

	b = 0;

	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}

/**
 * str_concat - concatenate to strings
 * @s1: the string to print
 * @s2: the string to print
 *
 * Return: pointer that contains the content of s1 followed by s2
 */
char *str_concat(char *s1, char *s2)
{
	int length;
	char *space;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length = _strlen(s1) + _strlen(s2);
	if (s1 != NULL && s2 != NULL)
	{
		space = malloc(sizeof(char) * length + 1);

		if (space == NULL)
		{
			return ('\0');
		}
		else
		{
			space = _strcat(space, s1);
			space = _strcat(space, s2);
		}
	}
	else
	{
		space = "";
	}
	return (space);
	free(space);
}
