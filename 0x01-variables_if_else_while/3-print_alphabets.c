#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char dodi;

	for (dodi = 'a'; dodi <= 'z'; dodi++)
		putchar(dodi);

	for (dodi = 'A'; dodi <= 'Z'; dodi++)
		putchar(dodi);

	putchar('\n');

	return (0);
}
