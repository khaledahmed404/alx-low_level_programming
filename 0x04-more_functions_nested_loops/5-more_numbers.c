#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * _putchar only 3 times
 * Return: 0-14 x10 followed by new line
 */
void more_numbers(void)
{
	int ii;
	int q;

	for (q = 0; q <= 9; q++)
	{
		for (ii = 0; ii <= 14; ii++)
		{
			if (ii >= 10)
			{
				_putchar((ii / 10) + '0');
			}
			_putchar((ii / 10) + '0');
		}
		_putchar('\n');
	}
}
