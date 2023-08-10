#include "main.h"
#include <stdlib.h>

/**
  * array_range - ...
  * @min: ...
  * @max: ...
  *
  * Return: integer value
  */
int *array_range(int min, int max)
{
	int *j, i = 0;

	if (min > max)
		return (NULL);

	j = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (j == NULL)
		return (NULL);

	while (min <= max)
	{
		j[i] = min;
		i++;
		min++;
	}

	return (j);
}
