#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int ii;

	for (ii = 0; ii < 10; ii++)
		_putchar(ii + '0');

	_putchar('\n');
}
