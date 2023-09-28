#include "main.h"

/**
 * set_bit - Set the value of a bit to 1 at a given index.
 * @n: Pointer to the decimal number to modify.
 * @index: Index position to change, starting from 0.
 *
 * Return: 1 if the operation succeeds, -1 if an error occurs.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Use a bitwise OR operation to set the bit at the specified index */
	*n |= (mask << index);

	return (1);
}
