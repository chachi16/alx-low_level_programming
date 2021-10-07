#include <stdio.h>
#include "lists.h"
/**
 *print_list - prints all the elements of list_t
 *@h: head
 *
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
  size_t print_list(const list_t *h)
{
	int numb_node = 0;

	while (h != '\0')
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] %p\n", h->str);
		}
		h = h->next;
		numb_node++;
	}
	return (numb_node);
}
