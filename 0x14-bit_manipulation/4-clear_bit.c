#include "main.h"

/**
 * clear_bit - Set the value of a bit to 0 at a given index.
 * @n: Pointer to the decimal number to change.
 * @index: Index position to change.
 *
 * Return: 1 if the operation succeeds, -1 if an error occurs.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask <<= index;
	*n &= ~mask;

	return (1);
}
