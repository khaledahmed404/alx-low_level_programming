#include "lists.h"

/**
 * sum_listint - a fun to calculate the sum
 * @head: first node
 * Return: resulting summ
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;

		temp = temp->next;
	}


	return (sum);
}
