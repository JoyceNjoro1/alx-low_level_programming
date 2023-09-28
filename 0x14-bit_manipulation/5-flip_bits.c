#include "main.h"

/**
 * flip_bits - Calculate the number of bits needed to flip to convert n to m.
 * @n: The first number.
 * @m: The second number to convert to.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		if (diff & 1)
			count++;
		diff >>= 1;
	}

	return (count);
}

