#include <stdio.h>
#include "lists.h"

/**
 * list_len - a fun to print the elements ofa linked list
 * @h: a pointer
 *
 * Return: the number
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
