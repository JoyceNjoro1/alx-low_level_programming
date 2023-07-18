#include <stdio.h>
/**
  * print_to_98 - print all natural numbers upto 98
  * @n: the starting input number
  *
  * Description: it prints all natural numbers from @n
  * to 98 separated by a coma
  * it prints the numbers in acsending order
  */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}
