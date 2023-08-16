#include <stdio.h>
#include "function_pointers.h"

/*
 * array_iterator- prints each array element
 * @array: array
 * @size- how many elemments to print
 * @action- pointer to print in regular 
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
