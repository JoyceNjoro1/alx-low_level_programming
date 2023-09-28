#include "main.h"
#include <stdio.h>

/**
 * get_bit - Get the value of a bit at a given index.
 * @n: The number to evaluate.
 * @index: The index, starting from 0, of the bit to retrieve.
 *
 * Return: value of the bit at the specified index, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;

	if (n & mask)
		return (1);
	else
		return (0);
}

