#include "lists.h"

/**
 * print_listint -a fun to  print all the element
 * @h: linked listt
 * Return: the number of node
 */
size_t print_listint(const listin_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
