#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char dodi;

	for (dodi = 'a'; dodi <= 'z'; dodi++)
	{
		if (dodi != 'e' && dodi != 'q')
			putchar(dodi);
	}

	putchar('\n');

	return (0);
}
