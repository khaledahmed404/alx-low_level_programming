#include "lists.h"

/**
 * listint_len - a fun to return number of element
 * @h: linked list
 *
 * Return: numbers
 */
size_t listint_len(const listint_t *h)
{
	size_t numm = 0;

	while (h)
	{
		numm++;
		h = h->next;
	}

	return (numm);
}
