#include <stdio.h>
#include "main.h"
/**
  * binary_to_uint - to  convert binary to int
  * @b: the input binary
  * Return: value to be returned
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k  = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		k = (k << 1) + (b[i] - '0');
		i++;
	}

	return (k);
}
