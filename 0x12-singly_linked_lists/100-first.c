#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - a fun to print sentence before the main
 *
 * function is execut
 */


void first(void)
{
	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back!\n");
}
