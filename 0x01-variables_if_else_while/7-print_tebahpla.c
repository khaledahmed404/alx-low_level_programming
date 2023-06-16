#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char dodi;

	for (dodi = 'z'; dodi >= 'a'; dodi--)
		putchar(dodi);

	putchar('\n');

	return (0);
}
