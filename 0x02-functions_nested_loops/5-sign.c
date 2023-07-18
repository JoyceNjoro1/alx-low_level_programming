#include "main.h"

/**
  * print_sign - print if a number is positive,negative or zero
  * @n: The input number
  *
  * Return: 1 and print + if n  > 0
  *         0 if n is zero,
  *        -1 if n is less than zero.
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
