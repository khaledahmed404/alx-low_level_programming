#include "lists.h"

/**
 * print_listint -a fun to  print all the element
 * @h: linked listt
 * Return: the number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t numm = 0;

	while (h)
	{

		printf("%d\n", h->n);

		numm++;

		h = h->next;
	}

	return (numm);
}
