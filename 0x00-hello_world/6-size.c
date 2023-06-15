#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: A C program that prints the size of various data types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of int: %ld bytes\n", sizeof(int));
	printf("Size of char: %ld bytes\n", sizeof(char));
	printf("Size of float: %ld bytes\n", sizeof(float));
	printf("Size of double: %ld bytes\n", sizeof(double));
	return (0);
}
