#include "main.h"

/**
 * get_endianness - a fun to  check if the machine
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;


	return (*c);
}
