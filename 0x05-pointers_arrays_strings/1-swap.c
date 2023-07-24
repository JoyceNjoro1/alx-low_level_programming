#include "main.h"

/*
* swap_int - swaps the value of the integers
* @a: interger to be swapped
* @b: interger to be swapped
*/

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
