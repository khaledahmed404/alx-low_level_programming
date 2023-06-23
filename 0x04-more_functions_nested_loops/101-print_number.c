#include "main.h"

/**
 * print_nember - prints an intger
 *
 * @n: the intger to be printed
 */

void print_nember(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
	{
		print_nember(num / 10);
	}

	_putchar((num % 10) + 48);
}
