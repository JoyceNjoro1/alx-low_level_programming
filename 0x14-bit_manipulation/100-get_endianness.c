#include "main.h"

/**
 * get_endianness -  to check if a machine is little or big
 * Return: to return 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
