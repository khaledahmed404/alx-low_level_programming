#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by new line
 */
void print_most_numbers(void)
{
	int ii;

	for (ii = 0; ii <= 9; ii++)
	{
		if ((ii == 2 || ii == 4))
		{
			continue;
		}
		else
		{
			_putchar(ii + '0');
		}

	}
	_putchar('\n');
}
