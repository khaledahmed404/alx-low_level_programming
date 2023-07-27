#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -a fun to add new node in the beginning
 * @head: a double pointer
 * @str: a string
 *
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int lenn = 0;

	while (str[lenn])
		lenn++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->lenn = lenn;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
