#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer compare
 * Return: the int index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int it;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (it = 0; it < size; it++)
	{
		if (cmp(array[it]))
			return (it);
	}

	return (-1);
}
