#include "main.h"
#include <stdio.h>

/**
 * print_binary - Print binary representation of a number.
 * @n: Decimal number to print as binary.
 */
void print_binary(unsigned long int n)
{
	int bit, flag = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	for (bit = sizeof(unsigned long int) * 8 - 1; bit >= 0; bit--)
	{
		if ((n >> bit) & 1)
		{
			putchar('1');
			flag = 1;  /* Set a flag to indicate that 1 has been printed */
		}
		else if (flag)
		{
			putchar('0');
		}
	}

}

