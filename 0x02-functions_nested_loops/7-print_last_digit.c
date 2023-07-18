 #include "main.h"

/**
  * print_last_digit - prints the last digit in the number
  *
  * @j: the number
  * Return: the last value o the digit
  */

int print_last_digit(int v)
{
	int a;

	if (v < 0)
	v = -v;

	a = v % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
