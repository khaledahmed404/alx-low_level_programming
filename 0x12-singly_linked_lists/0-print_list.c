#include <stdio.h>
#include "lists.h"

/**
 * print_list - a fun to print the elements ofa linked list
 * @h: a pointer
 *
 * Return: the number
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
